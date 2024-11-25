// Compensation.h
#ifndef COMPENSATION_H
#define COMPENSATION_H

// Abstract Class: Compensation is an abstract class since it has pure virtual functions.
class Compensation {
public:
    // Virtual destructor to ensure proper cleanup of derived objects.
    virtual ~Compensation() {}

    // Abstract function (pure virtual): Must be implemented by derived classes.
    virtual void displayCompensationDetails() = 0;

    // Abstract function (pure virtual): Forces derived classes to implement their own salary calculation logic.
    virtual double calculateNetSalary() = 0; 
};

#endif
