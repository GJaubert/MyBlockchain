/*
 * Block.cpp
 *
 *  Created on: 17 jun 2023
 *      Author: Rikus
 */

#include "Block.h"

namespace myblockchain {

Block::Block(std::string data, std::string prevBlockHash): m_hash(0) {
	m_timestamp = std::time(0);
	m_prevBlockHash = prevBlockHash;
	m_data = data;
}

Block::~Block() {
	// TODO Auto-generated destructor stub
}

void Block::setHash(Block& block) {

}

} /* namespace fractal */
