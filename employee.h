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
    Employee(const string& id, const string& name, const string& dept) : id(id), name(name), department(dept) {};

    // Getters
    string getId() const {
    return id;
};
    string getName() const  {
    return name;
};
    string getDepartment() const  {
    return department;
};

    // Method to print employee information
    void printInfo() const  {
    cout << "Employee ID: " << id << "\nName: " << name
         << "\nDepartment: " << department << endl;
};
};

#endif // EMPLOYEE_H
