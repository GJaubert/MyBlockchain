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

Block::Block(Block& other) {
	m_timestamp = other.m_timestamp;
	m_data = other.m_data;
	m_prevBlockHash = other.m_prevBlockHash;
	m_hash = other.m_hash;
}

std::string Block::getHash() {
	return m_hash;
}

std::string Block::getData() {
	return m_data;
}
long long Block::getTimestamp() {
	return m_timestamp;
}

std::string Block::getPrevBlockHash() {
	return m_prevBlockHash;
}

Block::~Block() {}

void Block::setHash(Block& block) {
	std::string timestamp = std::to_string(block.m_timestamp);
	std::string headers = block.m_prevBlockHash + block.m_data + timestamp;

	SHA256 sha;
	sha.update(headers);
	uint8_t* digest = sha.digest();
	block.m_hash = SHA256::toString(digest);
	delete[] digest;
}

} /* namespace fractal */
