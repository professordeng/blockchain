#pragma once
#include <list>
#include "Block.h"

class Blockchain
{
	std::list<Block> blockchain;
	
	bool isValid(Block newBlock);
public:
	Blockchain();
	void appendBlock(Block newBlock);
	void sendData(std::string data);
	void print();
	~Blockchain();
};

