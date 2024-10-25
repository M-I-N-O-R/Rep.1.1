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
		{"Сiрожа Галапуп", 5000.0 },
		{ "Галя Ченькова", 3453.0 },
		{ "Коля Стьопашин", 7865.0 },
		{ "Iван Жандар", 12000.0},
		{ "Катроль", 2563.0 }
	};

	displayAccounts(accounts);

	return 0;
}
