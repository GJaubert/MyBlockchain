/*
 * Blockchain.h
 *
 *  Created on: 18 jun 2023
 *      Author: Rikus
 */

#ifndef BLOCKCHAIN_BLOCKCHAIN_H_
#define BLOCKCHAIN_BLOCKCHAIN_H_

#include "../Block/Block.h"
#include <vector>

namespace myblockchain {

class Blockchain {
public:
	Blockchain();
	~Blockchain();
	void AddBlock(std::string data);
private:
	std::vector<Block*> blocks;
	Block* newGenesisBlock();
};

} /* namespace myblockchain */

#endif /* BLOCKCHAIN_BLOCKCHAIN_H_ */
