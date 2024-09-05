#include <iostream>
#include <vector>
#include "Employee.h"
#include "Salary.h"

using namespace std;

int main() {
    // Vectors to hold raw pointers to Employee and Salary objects
    vector<Employee*> employees; // Vector of pointers to Employee
    vector<Salary*> salaries;    // Vector of pointers to Salary

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

        // Creating Employee object with new and setting its data
        Employee* emp = new Employee();
        emp->setId(id);
        emp->setName(name);
        emp->setDepartment(dept);
        employees.push_back(emp);

        cout << "Base Salary: ";
        cin >> baseSalary;
        cout << "Bonus: ";
        cin >> bonus;
        cout << "Tax Rate (%): ";
        cin >> taxRate;

        // Creating Salary object with new and setting its data
        Salary* sal = new Salary();
        sal->setBaseSalary(baseSalary);
        sal->setBonus(bonus);
        sal->setTaxRate(taxRate);
        salaries.push_back(sal);
    }

    for (size_t i = 0; i < employees.size(); ++i) {
        cout << "\nEmployee " << i + 1 << " Information:" << endl;
        // Accessing Employee object using raw pointer
        employees[i]->printInfo();
        cout << "Salary Details:" << endl;
        // Accessing Salary object using raw pointer
        salaries[i]->printSalaryDetails();
        cout << "Net Salary: " << salaries[i]->calculateNetSalary() << endl;
    }

    // Display the total number of employees and total salary paid using static member functions
    Employee::printEmployeeCount();
    Salary::printTotalSalaryPaid();

    // Deallocate memory
    for (size_t i = 0; i < employees.size(); ++i) {
        delete employees[i];  // Free memory for Employee
        delete salaries[i];   // Free memory for Salary
    }

    // Clear vectors
    employees.clear();
    salaries.clear();

    return 0;
}
