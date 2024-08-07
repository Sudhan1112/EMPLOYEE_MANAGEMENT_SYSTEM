#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {
private:
    string id;         // Employee ID
    string name;       // Employee Name
    string department; // Employee Department

public:
    // Constructor
    Employee(const string& id, const string& name, const string& dept);

    // Getters
    string getId() const;
    string getName() const;
    string getDepartment() const;

    // Method to print employee information
    void printInfo() const;
};

#endif // EMPLOYEE_H
