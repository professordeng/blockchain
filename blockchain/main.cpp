#include "Blockchain.h"

int main() {
	Blockchain blockchain;
	blockchain.sendData("Send 1 BTC to Jacky");
	blockchain.sendData("Send 1 EOS to Jack");
	blockchain.print();
	std::cin.get();
	return 0;
}