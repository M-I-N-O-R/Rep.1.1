#include <iostream>

using namespace std;

struct BankAccoun {
	string owner;
	double balance;
};

void deposit(double* balance, double amount) {
	if (amount > 0) *balance += amount;
}

int main() {
	setlocale(0, ".1251");
	BankAccoun myAccount = { "Галапуп Сiрожа:", 5000.0 };
	deposit(&myAccount.balance, 500.0);
	cout << "Власник: " << myAccount.owner << ", Баланс: " << myAccount.balance<<endl;
	return 0;
}