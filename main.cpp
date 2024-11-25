#include <iostream>
#include <vector>
#include "Employee.h"

using namespace std;

vector<Employee> employeeDB;

void saveEmployeeToDB(const Employee& employee) {
    employeeDB.push_back(employee);
    cout << "\nEmployee details have been successfully saved to the database!\n";
}

void displayAllEmployees() {
    if (employeeDB.empty()) {
        cout << "\nNo employees found in the database.\n";
        return;
    }

    cout << "\nAll Employees in Database:\n";
    for (size_t i = 0; i < employeeDB.size(); ++i) {
        cout << "\nEmployee " << (i + 1) << ":\n";
        employeeDB[i].displayDetails();
    }
}

int main() {
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                Employee employee;
                employee.inputDetails();
                saveEmployeeToDB(employee);
                break;
            }
            case 2:
                displayAllEmployees();
                break;
            case 3:
                cout << "Exiting program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}