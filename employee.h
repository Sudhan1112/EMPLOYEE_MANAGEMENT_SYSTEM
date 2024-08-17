#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>

using namespace std;

class Employee {
private:
    string id;         // Employee ID
    string name;       // Employee Name
    string department; // Employee Department
    static int employeeCount; // Static variable to track total employees

public:
    // Constructor
    Employee(const string& id, const string& name, const string& dept) : id(id), name(name), department(dept) {
        employeeCount++; // Increment employee count whenever a new employee is created
    }

    ~Employee() {
        employeeCount--; // Decrement employee count when an employee is destroyed
    }

    // Getters
    string getId() const {
        return id;
    }
    string getName() const {
        return name;
    }
    string getDepartment() const {
        return department;
    }

    static int getEmployeeCount() {
        return employeeCount; // Return the total number of employees
    }

    // Method to print employee information
    void printInfo() const {
        cout << "Employee ID: " << id << "\nName: " << name
             << "\nDepartment: " << department << endl;
    }
};

// Define and initialize static member
int Employee::employeeCount = 0;

#endif // EMPLOYEE_H
