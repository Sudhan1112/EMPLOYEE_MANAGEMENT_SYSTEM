// BonusSalary.h
#ifndef BONUS_SALARY_H
#define BONUS_SALARY_H

#include "Compensation.h"

// Derived Class: BonusSalary inherits from Compensation and implements its abstract methods.
class BonusSalary : public Compensation {
private:
    double baseSalary;
    double bonus;
    double taxRate;

public:
    BonusSalary(double salary, double bonusAmt, double tax)
        : baseSalary(salary), bonus(bonusAmt), taxRate(tax) {}

    // Implementing the abstract function from Compensation
    void displayCompensationDetails() override {
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Tax Rate: " << taxRate << "%" << endl;
    }

    // Implementing the abstract function from Compensation
    double calculateNetSalary() override {
        double grossSalary = baseSalary + bonus;
        return grossSalary - (grossSalary * (taxRate / 100));
    }
};

#endif
