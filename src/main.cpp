//============================================================================
// Name        : MyBlockchain.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Blockchain/Blockchain.h"

using namespace myblockchain;

int main() {

	Blockchain bc;
	bc.AddBlock("Send 1 BTC to Ivan");
	bc.AddBlock("Send 2 more BTC to Ivan");

	for (int i = 0; i < bc.blocks.size(); i++) {
		std::cout << "Prev. hash: " << bc.blocks[i]->m_prevBlockHash << std::endl;
		std::cout << "Data: " << bc.blocks[i]->m_data << std::endl;
		std::cout << "Hash: " << bc.blocks[i]->m_hash << std::endl;
	}

	std::cout << "Finished"  << std::endl;
	return 0;
}
