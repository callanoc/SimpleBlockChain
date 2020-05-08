#ifndef BLOCKCHAIN_H_INCLUDED
#define BLOCKCHAIN_H_INCLUDED
#include <cstdint>
#include <vector>
#include "BLOCK.h"



class BlockChain{
public:
    BlockChain();
    void AddBlock(Block New);
private :
    uint32_t Difficulty;
    std::vector<Block> Chain;
    Block getLastBlock() const;

};

#endif // BLOCKCHAIN_H_INCLUDED
