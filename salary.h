// Salary.h
#ifndef SALARY_H
#define SALARY_H

#include "Compensation.h"

// Derived Class: Salary inherits from Compensation and implements its abstract methods.
class Salary : public Compensation {
private:
    double baseSalary;
    double taxRate;

public:
    Salary(double salary, double tax) : baseSalary(salary), taxRate(tax) {}

    // Implementing the abstract function from Compensation
    void displayCompensationDetails() override {
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Tax Rate: " << taxRate << "%" << endl;
    }

    // Implementing the abstract function from Compensation
    double calculateNetSalary() override {
        return baseSalary - (baseSalary * (taxRate / 100));
    }
};

#endif
