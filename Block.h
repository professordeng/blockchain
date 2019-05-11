#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include "picosha2.h"

class Block
{
public:
	long index;                 // ������
	time_t timesTamp;           // ����ʱ���
	std::string prevBlockHash;  // ��һ�������ϣֵ
	std::string hash;           // ��ǰ�����ϣֵ
	std::string data;           // ��������

	Block();
	Block(const Block& prevBlock, const std::string& data);
	std::string calculateHash();
	~Block();
};

