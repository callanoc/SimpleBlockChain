#include <iostream>
#include "BLOCKCHAIN.h"


int main()
{
    BlockChain Chain = BlockChain();
    std::cout<<"Mining first block...."<<std::endl;

    Chain.AddBlock(Block(1,"Block 1"));
    std::cout<<"Mining second block...."<<std::endl;
    Chain.AddBlock(Block(2,"Block 2"));
    std::cout<<"Mining third block...."<<std::endl;
    Chain.AddBlock(Block(3,"Block 3"));

    return 0;

}
