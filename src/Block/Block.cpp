/*
 * Block.cpp
 *
 *  Created on: 17 jun 2023
 *      Author: Rikus
 */

#include "Block.h"

namespace myblockchain {

Block::Block(std::string data, std::string prevBlockHash): m_hash("") {
	m_timestamp = std::time(0);
	m_prevBlockHash = prevBlockHash;
	m_data = data;
	setHash(*this);
}

Block::~Block() {
	// TODO Auto-generated destructor stub
}

void Block::setHash(Block& block) {
	std::string timestamp = std::to_string(block.m_timestamp);
	std::string headers = block.m_prevBlockHash + block.m_data + timestamp;

	SHA256 sha;
	sha.update(headers);
	uint8_t* digest = sha.digest();
	block.m_hash = SHA256::toString(digest);
	std::cout << block.m_hash << std::endl;
	delete[] digest;
}

} /* namespace fractal */
