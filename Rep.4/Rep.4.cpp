#include <iostream>
#include <vector>
using namespace std;

struct BankAccount {
	string owner;
	double balance;
};

void displayAccounts(const vector <BankAccount> &accounts) {
	for (const auto &account : accounts) {
		cout << "Власник: " << account.owner << ", Баланс: " << account.balance << endl;
	}
}

int main() {
	vector <BankAccount> accounts = {
		{"Андрій", 5000.0 },
		{ "Юра", 7865.0 },
		{ "Iван", 12000.0},
		{ "Коля", 2563.0 }
	};

	displayAccounts(accounts);

	return 0;
}
