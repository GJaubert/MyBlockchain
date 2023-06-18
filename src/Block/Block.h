/*
 * Block.h
 *
 *  Created on: 17 jun 2023
 *      Author: Rikus
 */

#ifndef BLOCK_BLOCK_H_
#define BLOCK_BLOCK_H_

#include <cstdint>
#include <string>
#include <ctime>
#include <iostream>
#include "../utils/SHA256/SHA256.h"

namespace myblockchain {

class Block {
public:
	Block(std::string data, std::string prevBlockHash);
	Block(Block& other);
	~Block();

	void setHash(Block& block);
	std::string getHash();

//private:
	long long m_timestamp;
	std::string m_data;
	std::string m_prevBlockHash;
	std::string m_hash;
};

} /* namespace myblockchain */

#endif /* BLOCK_BLOCK_H_ */
