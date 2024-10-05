#include <iostream>
#include <iomanip>  // For formatting the output
using namespace std;


int main() {
    // 1) Variables to store employee information
    string name;
    double hoursWorked, hourlyPayRate, federalTaxRate, stateTaxRate;

    // 2) Input employee information
    cout << "Enter employee's name: ";
    cin >> name;
    cout << "Enter number of hours worked in a week: ";
    cin >> hoursWorked;
    cout << "Enter hourly pay rate: ";
    cin >> hourlyPayRate;
    cout << "Enter federal tax withholding rate: ";
    cin >> federalTaxRate;
    cout << "Enter state tax withholding rate: ";
    cin >> stateTaxRate;

    // 3) Calculations
    double grossPay = hoursWorked * hourlyPayRate;
    double federalWithholding = grossPay * federalTaxRate;
    float stateWithholding = grossPay * stateTaxRate;
    double totalDeduction = federalWithholding + stateWithholding;
    float netPay = grossPay - totalDeduction;

    //  4) Display the payroll statement
    cout << fixed << setprecision(2);
    cout << "\nEmployee Name: " << name << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Pay Rate: $" << hourlyPayRate << endl;
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Deductions:" << endl;
    cout << "  Federal Withholding (" << federalTaxRate * 100 << "%): $" << federalWithholding << endl;
    cout << "  State Withholding (" << stateTaxRate * 100 << "%): $" << stateWithholding << endl;
    cout << "  Total Deduction: $" << totalDeduction << endl;
    cout << "Net Pay: $" << netPay << endl;

    return 0;
}
