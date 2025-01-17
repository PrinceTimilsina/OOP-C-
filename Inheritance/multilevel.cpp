//Here,is a program that demonstrate 
#include <iostream>
#include <string>
using namespace std;
class Bank {
public:
 string name;
    int age;
    string address;
    long int phoneNumber; // Using long int for phone number
    int setDetails(string name, int age,string address, long int phone) {
        this->name=name;
        this->address=address;
        this->age=age;
        this->phoneNumber=phone;
        return 0;
    }
    int showDetails() {
        cout<<"Name:" <<name<< endl;
        cout<<"Age:" <<age<< endl;
        cout<<"Address:" <<address<< endl;
        cout<<"Phone Number:"<<phoneNumber<< endl;
        return 0;
    }
};

class Account : public Bank {
public:
    float balance;

    Account() {
        balance=0;
    }

    int deposit(float amount) {
        balance=balance + amount;
        cout << "Deposited:RS" << amount << endl;
        return 0;
    }

    int withdraw(float amount) {
        if (amount <= balance) {
            balance = balance-amount;
            cout << "Withdrawn: RS" << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
        return 0;
    }

    int showBalance() {
        cout << "Current Balance:RS" << balance << endl;
        return 0;
    }
};

class Balance : public Account {
public:
    int displayAccountDetails() {
        showDetails();
        showBalance();
        return 0;
    }
};

int main() {
    Balance account;
    account.setDetails("Prince Timilsina", 14, "Dumkibas,1 puranobasti", 987979234);
    account.deposit(1000);
    account.withdraw(200);
    account.showBalance();
    cout << "\nAccount Details:\n";
    account.displayAccountDetails();

    return 0;
}

