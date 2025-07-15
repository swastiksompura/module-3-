// 19. Class for Bank Account (Encapsulation)

#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void deposit(float amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid deposit amount!" << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    float getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;

    account.deposit(1000);
    account.withdraw(300);

    cout << "Current balance: ₹" << account.getBalance() << endl;

    return 0;
}
 
