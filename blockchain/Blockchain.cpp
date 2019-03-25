#include "Blockchain.h"


bool Blockchain::isValid(Block newBlock)
{
	Block prevBlock = blockchain.back();
	if (newBlock.index - 1 != prevBlock.index) return false;
	if (newBlock.prevBlockHash != prevBlock.hash) return false;
	if (newBlock.hash != newBlock.calculateHash()) return false;
	return true;
}

Blockchain::Blockchain()
{
	Block firstBlock;
	blockchain.push_back(firstBlock);
}

void Blockchain::appendBlock(Block newBlock)
{
	if (isValid(newBlock)) 
	{
		blockchain.push_back(newBlock);
	}
	else
	{
		std::cout << "Invalid Block!" << std::endl;
	}
}

void Blockchain::sendData(std::string data)
{
	Block preBlock = blockchain.back();
	Block newBlock(preBlock, data);
	blockchain.push_back(newBlock);
}

void Blockchain::print()
{
	for (std::list<Block>::iterator it = blockchain.begin(); it != blockchain.end(); it++) {
		std::cout << "Index: " << (*it).index << std::endl;
		std::cout << "Prev.Hash: " << (*it).prevBlockHash << std::endl;
		std::cout << "Curr.Hash: " << (*it).hash << std::endl;
		std::cout << "Data: " << (*it).data << std::endl;
		std::cout << "Timestamp: " << (*it).timesTamp << std::endl << std::endl;
	}
}

Blockchain::~Blockchain()
{
}


