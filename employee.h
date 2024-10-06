// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include "Compensation.h"
#include "Benefit.h"

// Derived Class: Employee inherits from Person. It uses the abstract class Compensation for polymorphism.
class Employee : public Person {
protected:
    string department;
    Compensation* compensation; // Abstract class pointer
    Benefit benefit;

public:
    Employee(string id, string name, string department, Compensation* comp, Benefit ben)
        : Person(id, name), department(department), compensation(comp), benefit(ben) {}

    // Polymorphism: Uses abstract class pointer to call overridden methods in derived classes
    void displayDetails() override {
        cout << "\nEmployee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        benefit.displayBenefitDetails(); // Display employee benefits

        // Call the correct derived class's implementation of displayCompensationDetails
        compensation->displayCompensationDetails(); 
    }

    // Calculate and display net salary using the abstract class Compensation
    double getNetSalary() {
        // Polymorphism: Calls calculateNetSalary based on actual object type (Salary/BonusSalary)
        return compensation->calculateNetSalary();
    }
};

#endif
