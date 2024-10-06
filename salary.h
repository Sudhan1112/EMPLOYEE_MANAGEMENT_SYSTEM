// Salary.h
#ifndef SALARY_H
#define SALARY_H

#include "Compensation.h"

class Salary : public Compensation {
private:
    double baseSalary;
    double taxRate;

public:
    Salary(double salary, double tax) : baseSalary(salary), taxRate(tax) {}

    // Polymorphism: This function overrides the Compensation class's pure virtual function.
    void displayCompensationDetails() override {
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Tax Rate: " << taxRate << "%" << endl;
    }

    // Polymorphism: Another override for dynamic salary calculation.
    double calculateNetSalary() override {
        return baseSalary - (baseSalary * (taxRate / 100));
    }
};

#endif
