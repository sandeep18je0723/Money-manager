#include<vector>
#include<map>
using namespace std;
#ifndef NETWORK_H
#define NETWORK_H


struct Transaction {
	string donor;
	string borrower;
	int amount;
};

class Network {
	vector<Transaction> transactions;
	map<std::string, int> net_amount;
public:
	void addTransaction(Transaction s);

	void optimiseTransaction();

	void print();
};

#endif
