#include <iostream>
using namespace std;

int main() {
    int pin = 1234; 
    int enteredPin, balance = 10000; 
    int choice, amount;
    cout << "********************** Welcome to  ATM **********************" << endl<<endl;

    cout << "        Please enter your PIN----: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "    Incorrect PIN. Access denied!" << endl;
        return 0;
    }
    cout << "  Login successful!" << endl;

    cout << "   1 . Check Balance"<<endl<<"   2 . Withdraw Money"<<endl<<"   3 . Deposit Money"<<endl<<"   4 . Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Your current balance is: Rs. " << balance << endl;
    } 
    else if (choice == 2) {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Please collect your cash. Remaining balance: Rs. " << balance << endl;
        }
    } 
    else if (choice == 3) {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit successful! New balance: Rs. " << balance << endl;
    } 
    else if (choice == 4) {
        cout << "Thank you for using the ATM. Goodbye!" << endl;
    } 
    else {
        cout << "Invalid choice! Please try again." << endl;
    }

    return 0;
}

