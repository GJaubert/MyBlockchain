/*
 * ProofOfWork.h
 *
 *  Created on: 26 jun 2023
 *      Author: Rikus
 */

#ifndef PROOFOFWORK_PROOFOFWORK_H_
#define PROOFOFWORK_PROOFOFWORK_H_

#include "../Block/Block.h"

namespace myblockchain {

class ProofOfWork {
private:
	int m_targetBits;
	Block* m_block;
	long int* target;
public:
	ProofOfWork();
	ProofOfWork(int targetBits);
};

} /* namespace myblockchain */

#endif /* PROOFOFWORK_PROOFOFWORK_H_ */
