#include <iostream>
#include <vector>
#include "Employee.h"
#include "Salary.h"

using namespace std;

int main() {
    vector<Employee> employees;
    vector<Salary> salaries;

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

        employees.emplace_back(id, name, dept);

        cout << "Base Salary: ";
        cin >> baseSalary;
        cout << "Bonus: ";
        cin >> bonus;
        cout << "Tax Rate (%): ";
        cin >> taxRate;

        salaries.emplace_back(baseSalary, bonus, taxRate);
    }

    for (size_t i = 0; i < employees.size(); ++i) {
        cout << "\nEmployee " << i + 1 << " Information:" << endl;
        employees[i].printInfo();
        cout << "Salary Details:" << endl;
        salaries[i].printSalaryDetails();
        cout << "Net Salary: " << salaries[i].calculateNetSalary() << endl;
    }

    return 0;
}
