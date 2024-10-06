// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include "Compensation.h"
#include "Benefit.h"

class Employee : public Person {
protected:
    string department;
    Compensation* compensation; // Polymorphism: Using a pointer to base class Compensation
    Benefit benefit;

public:
    Employee(string id, string name, string department, Compensation* comp, Benefit ben)
        : Person(id, name), department(department), compensation(comp), benefit(ben) {}

    // Polymorphism: Calls compensation's specific displayCompensationDetails at runtime
    void displayDetails() override {
        cout << "\nEmployee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        benefit.displayBenefitDetails(); // Display employee benefits

        // Polymorphism: Will call the derived class's implementation (either Salary or BonusSalary)
        compensation->displayCompensationDetails(); 
    }

    // Calculate and display net salary using polymorphism
    double getNetSalary() {
        // Polymorphism: Calls calculateNetSalary based on actual object type (Salary/BonusSalary)
        return compensation->calculateNetSalary();
    }
};

#endif
