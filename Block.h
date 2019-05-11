#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include "picosha2.h"

class Block
{
public:
	long index;                 // 区块编号
	time_t timesTamp;           // 区块时间戳
	std::string prevBlockHash;  // 上一个区块哈希值
	std::string hash;           // 当前区块哈希值
	std::string data;           // 区块数据

	Block();
	Block(const Block& prevBlock, const std::string& data);
	std::string calculateHash();
	~Block();
};

