#ifndef SALARY_H
#define SALARY_H

#include <iostream>
#include "Compensation.h"

using namespace std;

class Salary : public Compensation { // Single Inheritance
protected:
    double bonus;
    double taxRate;
    static double totalSalaryPaid;

public:
    // Constructors
    Salary() : Compensation(), bonus(0.0), taxRate(0.0) {}
    Salary(double baseSalary, double bonusAmount, double taxRatePercentage)
        : Compensation(baseSalary), bonus(bonusAmount), taxRate(taxRatePercentage) {
        totalSalaryPaid += calculateNetSalary();
    }

    // Destructor
    virtual ~Salary() {
        totalSalaryPaid -= calculateNetSalary();
    }

    // Setters
    void setBonus(double bonusAmount) {
        bonus = bonusAmount;
    }

    void setTaxRate(double taxRatePercentage) {
        taxRate = taxRatePercentage;
    }

    // Getters
    double getBonus() const {
        return bonus;
    }

    double getTaxRate() const {
        return taxRate;
    }

    // Override printCompensation
    void printCompensation() const override {
        Compensation::printCompensation();
        cout << "Bonus: " << bonus << "\nTax Rate: " << taxRate << "%" << endl;
    }

    // Method to calculate net salary
    virtual double calculateNetSalary() const {
        double taxDeduction = baseSalary * taxRate / 100;
        double netSalary = baseSalary - taxDeduction + bonus;
        return netSalary;
    }

    // Override calculateTotalCompensation
    double calculateTotalCompensation() const override {
        return calculateNetSalary();
    }

    // Static methods
    static double getTotalSalaryPaid() {
        return totalSalaryPaid;
    }

    static void printTotalSalaryPaid() {
        cout << "Total Net Salary Paid: " << totalSalaryPaid << endl;
    }
};

// Initialize static member
double Salary::totalSalaryPaid = 0.0;

#endif // SALARY_H
