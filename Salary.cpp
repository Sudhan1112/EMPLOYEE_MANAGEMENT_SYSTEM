#include "Salary.h"
#include <iostream>

using namespace std;

// Implementation of Salary constructor
Salary::Salary(double base, double bonus, double tax)
    : base(base), bonus(bonus), tax(tax) {}

// Implementation of method to calculate net salary
double Salary::calculateNetSalary() const {
    double taxDeduction = base * tax / 100;
    double netSalary = base - taxDeduction + bonus;
    return netSalary;
}

// Implementation of method to print salary details
void Salary::printSalaryDetails() const {
    cout << "Base Salary: " << base << "\nBonus: " << bonus
         << "\nTax Rate: " << tax << "%" << endl;
}
