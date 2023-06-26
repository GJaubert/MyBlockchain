/*
 * ProofOfWork.cpp
 *
 *  Created on: 26 jun 2023
 *      Author: Rikus
 */

#include "ProofOfWork.h"

namespace myblockchain {

ProofOfWork::ProofOfWork(): m_targetBits(0) {}

ProofOfWork::ProofOfWork(int targetBits): m_targetBits(targetBits) {}


} /* namespace myblockchain */
