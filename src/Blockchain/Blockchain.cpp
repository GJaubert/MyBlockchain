/*
 * Blockchain.cpp
 *
 *  Created on: 18 jun 2023
 *      Author: Rikus
 */

#include "Blockchain.h"

namespace myblockchain {

Blockchain::Blockchain() {
	blocks.push_back(newGenesisBlock());
}

Blockchain::~Blockchain() {
	for (unsigned int i  = 0; i < blocks.size(); i++) {
		delete blocks[i];
	}
}

void Blockchain::AddBlock(std::string data) {
	Block prevBlock(*blocks[blocks.size() - 1]);
	Block* newBlock = new Block(data, prevBlock.getHash());
	blocks.push_back(newBlock);
	//For debugging
	ProofOfWork pow(newBlock);
}

Block* Blockchain::newGenesisBlock() {
	Block* genesisBlock = new Block("Genesis Block", "");
	return genesisBlock;
}

} /* namespace myblockchain */
