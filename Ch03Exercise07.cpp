// Kristoffer Carlino
// Assignment M2 (Interest)
// CS 310

#include <iostream>   // For input and output (cin, cout)
#include <iomanip>    // For formatting output (setprecision, fixed)
#include <locale>     // For thousands separator in currency
using namespace std;

int main() {
    // Declare variables
    double netBalance, payment, interestRate;
    int d1, d2;

    // Prompt user for inputs
    cout << "Enter net balance: ";
    cin >> netBalance;

    cout << "Enter payment made: ";
    cin >> payment;

    cout << "Enter number of days in the billing cycle (d1): ";
    cin >> d1;

    cout << "Enter number of days payment is made before billing cycle (d2): ";
    cin >> d2;

    cout << "Enter monthly interest rate (e.g., 0.0152): ";
    cin >> interestRate;

    // Calculate the average daily balance using the formula:
    // (netBalance * d1 - payment * d2) / d1
    double averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

    // Calculate the interest:
    // averageDailyBalance * interestRate
    double interest = averageDailyBalance * interestRate;

    // Format the output:
    // - fixed: ensures decimal point is fixed (not scientific notation)
    // - setprecision(2): limits decimals to 2 places (like money)
    cout << fixed << setprecision(2);

    // Set locale for thousands separator (e.g., 1,000.00)
    locale loc("");
    cout.imbue(loc);

    // Display results
    cout << "\nAverage Daily Balance: $" << averageDailyBalance << endl;
    cout << "Interest: $" << interest << endl;

    return 0;  // End program
}
