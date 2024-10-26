#include <iostream>
using namespace std;

struct BankAccount {
	string owner;
	double balance;
};

void withdraw(double* balance, double amount) {
	if (amount > 0 && *balance >= amount) {
		*balance -= amount;
	}
	else {
		cout << "Помилка, коштiв невистачає." << endl;
	}
}

int main() {
	BankAccount myAccount{ "Андрій: ", 5000.0 };
	
	withdraw(&myAccount.balance, 500.0);
	cout << "Баланс: " << myAccount.balance << endl;

	withdraw(&myAccount.balance, 4600.0);
	cout << "Баланс: " << myAccount.balance << endl;
	
	return 0;
}
