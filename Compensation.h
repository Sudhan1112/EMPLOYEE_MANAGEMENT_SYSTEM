#ifndef COMPENSATION_H
#define COMPENSATION_H

#include <iostream>
using namespace std;

class Compensation {
protected:
    double baseSalary;

public:
    // Constructor
    Compensation() : baseSalary(0.0) {}
    Compensation(double base) : baseSalary(base) {}

    // Setter
    void setBaseSalary(double base) {
        baseSalary = base;
    }

    // Getter
    double getBaseSalary() const {
        return baseSalary;
    }

    // Method to print base salary
    virtual void printCompensation() const {
        cout << "Base Salary: " << baseSalary << endl;
    }

    // Virtual method to calculate total compensation
    virtual double calculateTotalCompensation() const {
        return baseSalary;
    }

    // Virtual destructor
    virtual ~Compensation() {}
};

#endif // COMPENSATION_H
