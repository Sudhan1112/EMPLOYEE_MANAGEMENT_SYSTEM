#include "Employee.h"
#include <iostream>

using namespace std;

// Implementation of Employee constructor
Employee::Employee(const string& id, const string& name, const string& dept)
    : id(id), name(name), department(dept) {}

// Implementation of getters
string Employee::getId() const {
    return id;
}

string Employee::getName() const {
    return name;
}

string Employee::getDepartment() const {
    return department;
}

// Implementation of method to print employee information
void Employee::printInfo() const {
    cout << "Employee ID: " << id << "\nName: " << name
         << "\nDepartment: " << department << endl;
}
