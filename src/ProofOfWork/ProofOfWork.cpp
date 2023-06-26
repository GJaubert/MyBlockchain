/*
 * ProofOfWork.cpp
 *
 *  Created on: 26 jun 2023
 *      Author: Rikus
 */

#include "ProofOfWork.h"

namespace myblockchain {

ProofOfWork::ProofOfWork(Block* block): m_block(block) {
	target = (long int) 1;
	target = target << (256 - TARGET_BITS);
}

std::string ProofOfWork::prepareData(int nonce) {

}

} /* namespace myblockchain */
