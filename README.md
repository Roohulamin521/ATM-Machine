Here is a README file for your ATM code to use in your GitHub repository:

---

# ATM Simulation in C++

This is a simple C++ program simulating basic ATM functionalities. The program allows users to perform the following operations:

1. **Check Balance**
2. **Withdraw Money**
3. **Deposit Money**
4. **Exit**

## How It Works

1. The user is prompted to enter a **PIN** for authentication.
2. If the entered PIN is incorrect, the program denies access and exits.
3. Once authenticated, the user is presented with a menu to choose an operation.
4. Depending on the selected operation:
   - The user can view their current balance.
   - Withdraw an amount (if sufficient balance is available).
   - Deposit an amount to their account.
   - Exit the program.

---

## Features

- **Simple Authentication:** The PIN (`1234` by default) ensures only authorized users can access the ATM.
- **Balance Checking:** Users can view their current balance.
- **Withdrawal Handling:** Ensures users cannot withdraw more than their available balance.
- **Deposit Functionality:** Allows users to increase their account balance.
- **Error Handling:** Handles incorrect PINs and invalid menu choices gracefully.

---

## How to Run

1. Clone this repository or copy the code.
2. Compile the code using any C++ compiler, e.g., `g++ atm.cpp -o atm`.
3. Run the executable, e.g., `./atm`.
4. Follow the on-screen instructions.

---

## Sample Output

```
********************** Welcome to ATM **********************

        Please enter your PIN----: 1234
  Login successful!
   1 . Check Balance
   2 . Withdraw Money
   3 . Deposit Money
   4 . Exit
Enter your choice: 1
Your current balance is: Rs. 10000
```

---

## Notes

- The default PIN is hardcoded as `1234`. Modify the `pin` variable in the code if needed.
- The initial balance is set to `Rs. 10,000`. Adjust it by changing the `balance` variable in the code.

---
