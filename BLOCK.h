#ifndef BLOCK_H_INCLUDED
#define BLOCK_H_INCLUDED

#include <cstdint>
#include <iostream>
#include <sstream>



class Block{
public :
    std::string Hash;
    std::string prev_hash;
    Block(uint32_t IndexIn,const std::string &DataIn);
    void MineBlock(uint32_t Difficulty);


private :
    uint32_t Index;
    int64_t Nonce;
    std::string Data;
    time_t Time;
    std::string calculateHash() const;
};
#endif // BLOCK_H_INCLUDED
