#ifndef SALARY_H
#define SALARY_H

#include <iostream>
using namespace std;

class Salary {
private:
    double base; // Base Salary
    double bonus; // Bonus
    double tax;   // Tax Rate
    static double totalSalaryPaid; // Static variable to track total salary paid

public:
    // Default Constructor
    Salary() : base(0), bonus(0), tax(0) {
        // Default values set to 0
    }

    // Parameterized Constructor
    Salary(double baseSalary, double bonusAmount, double taxRate) 
        : base(baseSalary), bonus(bonusAmount), tax(taxRate) {
        totalSalaryPaid += calculateNetSalary(); // Add net salary to total salary paid
    }

    // Destructor
    ~Salary() {
        totalSalaryPaid -= calculateNetSalary(); // Subtract net salary from total salary paid
    }

    static double getTotalSalaryPaid() {
        return totalSalaryPaid; // Return the total net salary paid
    }

    static void printTotalSalaryPaid() {
        cout << "Total Net Salary Paid: " << totalSalaryPaid << endl;
    }

    // Setters
    void setBaseSalary(double baseSalary) {
        base = baseSalary;
    }
    void setBonus(double bonusAmount) {
        bonus = bonusAmount;
    }
    void setTaxRate(double taxRate) {
        tax = taxRate;
    }

    // Method to calculate net salary
    double calculateNetSalary() const {
        double taxDeduction = base * tax / 100;
        double netSalary = base - taxDeduction + bonus;
        return netSalary;
    }

    // Method to print salary details
    void printSalaryDetails() const {
        cout << "Base Salary: " << base << "\nBonus: " << bonus
             << "\nTax Rate: " << tax << "%" << endl;
    }
};

// Define and initialize static member
double Salary::totalSalaryPaid = 0.0;

#endif // SALARY_H
