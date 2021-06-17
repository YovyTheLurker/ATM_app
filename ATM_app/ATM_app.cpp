// ATM_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//UPgrade: transfer option from multiple accounts.

#include <iostream>
using namespace std;

void showMenu() {
	cout << "**********Menu**********" << endl;
	cout << "1. Check Balance " << endl;
	cout << "2. Make Deposit " << endl;
	cout << "3. Withdraw Funds " << endl;
	cout << "4. Exit " << endl;
    cout << "************************" << endl;
}

int main()
{
	//check balance, deposit, withdraw, show menu
	int option;
	double balance = 500;

	do {
		showMenu();
		cout << "Please make a choice: ";
		cin >> option;
		system("cls");

		switch (option) {
		case 1: cout << "Balance is " << balance << " $ " << endl; break;
		case 2:cout << "Deposit Amount: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		case 3:cout << "Withdraw Amount: ";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)
				balance -= withdrawAmount;
			else
				cout << "Not enough funds available." << endl;
			break;

		}
	} while (option != 4);
	system("pause>0");
}


