// Compensation.h
#ifndef COMPENSATION_H
#define COMPENSATION_H

class Compensation {
public:
    virtual ~Compensation() {}

    // Polymorphism: Pure virtual function. 
    // Derived classes like Salary and BonusSalary must implement this.
    virtual void displayCompensationDetails() = 0;

    // Polymorphism: Pure virtual function for salary calculation.
    // Allows dynamic binding to different compensation types at runtime.
    virtual double calculateNetSalary() = 0; 
};

#endif
