// BonusSalary.h
#ifndef BONUS_SALARY_H
#define BONUS_SALARY_H

#include "Compensation.h"

class BonusSalary : public Compensation {
private:
    double baseSalary;
    double bonus;
    double taxRate;

public:
    BonusSalary(double salary, double bonusAmt, double tax)
        : baseSalary(salary), bonus(bonusAmt), taxRate(tax) {}

    // Polymorphism: Overriding Compensation class's pure virtual function.
    void displayCompensationDetails() override {
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Tax Rate: " << taxRate << "%" << endl;
    }

    // Polymorphism: Dynamic net salary calculation, including bonus.
    double calculateNetSalary() override {
        double grossSalary = baseSalary + bonus;
        return grossSalary - (grossSalary * (taxRate / 100));
    }
};

#endif
