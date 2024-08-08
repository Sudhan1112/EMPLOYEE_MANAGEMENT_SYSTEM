#include <iostream>
#include <vector>
#include <memory>
#include "Employee.h"
#include "Salary.h"

using namespace std;

int main() {
    // Using unique_ptr to manage Employee and Salary objects dynamically
    vector<unique_ptr<Employee>> employees; // Vector of unique pointers to Employee
    vector<unique_ptr<Salary>> salaries;    // Vector of unique pointers to Salary

    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; ++i) {
        string id, name, dept;
        double baseSalary, bonus, taxRate;

        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "Employee ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Department: ";
        cin >> dept;

        // Creating Employee object with unique_ptr and adding it to the vector
        employees.push_back(make_unique<Employee>(id, name, dept));

        cout << "Base Salary: ";
        cin >> baseSalary;
        cout << "Bonus: ";
        cin >> bonus;
        cout << "Tax Rate (%): ";
        cin >> taxRate;

        // Creating Salary object with unique_ptr and adding it to the vector
        salaries.push_back(make_unique<Salary>(baseSalary, bonus, taxRate));
    }

    for (size_t i = 0; i < employees.size(); ++i) {
        cout << "\nEmployee " << i + 1 << " Information:" << endl;
        // Accessing Employee object using unique_ptr
        employees[i]->printInfo();
        cout << "Salary Details:" << endl;
        // Accessing Salary object using unique_ptr
        salaries[i]->printSalaryDetails();
        cout << "Net Salary: " << salaries[i]->calculateNetSalary() << endl;
    }
    return 0;
}
