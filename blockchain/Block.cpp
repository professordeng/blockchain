#include "Block.h"



Block::Block()
	: index(0), prevBlockHash(""), data("Genesis Block")
{
	timesTamp = time(NULL);
	hash = calculateHash();
}

Block::Block(const Block & prevBlock, const std::string& data)
	: prevBlockHash(prevBlock.hash), data(data)
{
	index = prevBlock.index + 1;
	timesTamp = time(NULL);
	hash = calculateHash();
}

std::string Block::calculateHash()
{
	std::string blockData = std::to_string(index) + std::to_string(timesTamp) + prevBlockHash + data;
	std::string correctHash;
	picosha2::hash256_hex_string(blockData, correctHash);
	return correctHash;
}

Block::~Block()
{
}
