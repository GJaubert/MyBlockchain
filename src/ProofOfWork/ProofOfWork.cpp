/*
 * ProofOfWork.cpp
 *
 *  Created on: 26 jun 2023
 *      Author: Rikus
 */

#include "ProofOfWork.h"

namespace myblockchain {

//Necesita ser depurado
ProofOfWork::ProofOfWork(Block* block): m_block(block) {
	boost::multiprecision::mpz_int one(1);
	// Buscar error: fatal error: gmp.h: No such file or directory
	unsigned long long tmp_target = (one << (unsigned int)(256 - TARGET_BITS));
	std::cout << "temp_target: " << tmp_target << std::endl;
	target = &tmp_target;
}

std::string ProofOfWork::prepareData(int nonce) {
	std::string data;

	data = m_block->getPrevBlockHash();
	data += m_block->getData();

	std::stringstream stream;
	stream << std::hex << m_block->getTimestamp();
	std::cout << stream.str();
	data = data + stream.str();
	stream << std::hex << (long long) TARGET_BITS;
	std::cout << stream.str();
	data = data + stream.str();
	stream << std::hex << (long long) nonce;
	std::cout << stream.str();
	data = data + stream.str();

	return data;
}

} /* namespace myblockchain */
