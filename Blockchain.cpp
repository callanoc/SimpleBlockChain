#include "BLOCKCHAIN.h"

BlockChain::BlockChain(){

    Block temp(0,"head block");
    Chain.push_back(temp);
    Difficulty=6;

}

void BlockChain::AddBlock(Block New)
{
    New.prev_hash=getLastBlock().Hash;

    New.MineBlock(Difficulty);
    Chain.push_back(New);

}

Block BlockChain::getLastBlock() const
{
    return Chain.back();
}
