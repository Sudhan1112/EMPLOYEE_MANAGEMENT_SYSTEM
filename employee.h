#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include "Person.h"
#include "Benefit.h"

using namespace std;

class Employee : public Person, public Benefit { // Multiple Inheritance
private:
    string department;      // Employee Department
    static int employeeCount; // Static variable to track total employees

public:
    // Constructor
    Employee() {
        employeeCount++; // Increment employee count when a new employee is created
    }

    // Destructor
    ~Employee() {
        employeeCount--; // Decrement employee count when an employee is destroyed
    }

    // Setters
    void setDepartment(const string& newDepartment) {
        department = newDepartment;
    }

    // Getters
    string getDepartment() const {
        return department;
    }

    static int getEmployeeCount() {
        return employeeCount; // Return total number of employees
    }

    static void printEmployeeCount() {
        cout << "Total Number of Employees: " << employeeCount << endl;
    }

    // Method to print employee info
    void printInfo() const {
        // Using printPersonInfo from the base class Person
        printPersonInfo();
        cout << "Department: " << department << endl;
        // Using printBenefitDetails from the base class Benefit
        printBenefitDetails();
    }
};

// Define and initialize static member
int Employee::employeeCount = 0;

#endif // EMPLOYEE_H
