/* Write a c++ program to implement constructer write real life scenario
1. Default Constructor
2.Parameterized constructer
3.Copy Constructer
4.Constructer with default argument 
5.Destructer */


#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // 1. Default Constructor
    BankAccount() {
        accountHolder = "Unknown";
        accountNumber = 0;
        balance = 0.0;
        cout << "Default Constructor called: Account created with default values.\n";
    }

    // 2. Parameterized Constructor
    BankAccount(string holder, int number, double bal) {
        accountHolder = holder;
        accountNumber = number;
        balance = bal;
        cout << "Parameterized Constructor called: Account created for " << accountHolder << ".\n";
    }

    // 3. Copy Constructor
    BankAccount(const BankAccount &source) {
        accountHolder = source.accountHolder;
        accountNumber = source.accountNumber;
        balance = source.balance;
        cout << "Copy Constructor called: Account copied for " << accountHolder << ".\n";
    }

    // 4. Constructor with Default Argument
    BankAccount(string holder, int number) {
        accountHolder = holder;
        accountNumber = number;
        balance = 100.0; // Default balance for new accounts
        cout << "Constructor with Default Argument called: Account created with default balance for " << accountHolder << ".\n";
    }

    // Destructor
    ~BankAccount() {
        cout << "Destructor called: Account of " << accountHolder << " is being deleted.\n";
    }

    // Display Account Information
    void display() const {
        cout << "Account Holder: " << accountHolder << "\nAccount Number: " << accountNumber
             << "\nBalance: $" << balance << "\n\n";
    }
};

int main() {
    // Default Constructor
    BankAccount account1;
    account1.display();

    // Parameterized Constructor
    BankAccount account2("Alice", 123456, 500.0);
    account2.display();

    // Copy Constructor
    BankAccount account3 = account2;
    account3.display();

    // Constructor with Default Argument
    BankAccount account4("Bob", 654321);
    account4.display();

    return 0;
}
