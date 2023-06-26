/*
 * ProofOfWork.h
 *
 *  Created on: 26 jun 2023
 *      Author: Rikus
 */

#ifndef PROOFOFWORK_PROOFOFWORK_H_
#define PROOFOFWORK_PROOFOFWORK_H_

#include <string>
#include "../Block/Block.h"

namespace myblockchain {

const int TARGET_BITS = 24;

class ProofOfWork {
private:
	Block* m_block;
	long int* target;

	std::string prepareData(int nonce);
public:
	ProofOfWork(Block* block);
};

} /* namespace myblockchain */

#endif /* PROOFOFWORK_PROOFOFWORK_H_ */
