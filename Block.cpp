#include "BLOCK.h"
#include "sha256.h"
#include <string>
#include <cstring>
#include <ctime>
#include <iostream>
#include <sstream>

/*SHA-256 is the most popular hash function in the SHA-2 family at the time of writing.
It provides 128 bits of security for digital signatures and hash-only applications
(SHA-1 provides only 80 bits).*/

Block::Block(uint32_t IndexIn,
          const std::string &DataIn ) : Index(IndexIn), Data(DataIn){
Nonce=0;
Time=time(nullptr);
Hash=calculateHash();
}


void Block::MineBlock(uint32_t Difficulty)
{
    char beginning[Difficulty+1];
    for(uint32_t i=0;i<Difficulty;i++){
            beginning[i]='0';
    }
    beginning[Difficulty]='\0';

    std::string final(beginning);

    do{
       Nonce++;
       Hash=calculateHash();
    }while(final.substr(0,Difficulty)!=beginning);

    std::cout<<"Block mined : "<<Hash<<std::endl;
}

inline std::string Block::calculateHash() const
{
    std::stringstream ss;
    ss<<Index<<prev_hash<<Time<<Data<<Nonce;
    return sha256(ss.str());
}

