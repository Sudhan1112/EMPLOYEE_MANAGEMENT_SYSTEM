#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include "Constants.h"
#include "IEmployee.h"

using namespace std;

class Employee : public IEmployee {
private:
    string name;
    Constants::Department department;
    Constants::EmployeeLevel level;

public:
    Employee() : name(""), department(Constants::Department::HR), level(Constants::EmployeeLevel::JUNIOR) {}

    string getName() const override { return name; }
    void setName(const string& name) override { this->name = name; }
    Constants::Department getDepartment() const override { return department; }
    void setDepartment(Constants::Department dept) override { department = dept; }
    Constants::EmployeeLevel getLevel() const override { return level; }
    void setLevel(Constants::EmployeeLevel level) override { this->level = level; }

    void inputDetails() {
        cout << "Enter Employee Name: ";
        getline(cin, name);
        department = inputDepartment();
        level = inputLevel();
    }

    void displayDetails() const override {
        cout << "\nEmployee Details:\n";
        cout << "Name: " << name << "\n";
        cout << "Department: " << getDepartmentName() << "\n";
        cout << "Level: " << getLevelName() << "\n";
    }

private:
    Constants::Department inputDepartment() {
        while (true) {
            cout << "\nChoose Department:\n"
                 << "1. HR\n"
                 << "2. IT\n"
                 << "3. Finance\n"
                 << "4. Sales\n"
                 << "Enter the department number: ";
            int choice;
            cin >> choice;
            cin.ignore();
            switch (choice) {
                case 1: return Constants::Department::HR;
                case 2: return Constants::Department::IT;
                case 3: return Constants::Department::FINANCE;
                case 4: return Constants::Department::SALES;
                default:
                    cout << "Invalid department. Please try again.\n";
            }
        }
    }

    Constants::EmployeeLevel inputLevel() {
        while (true) {
            cout << "\nChoose Level:\n"
                 << "1. Junior\n"
                 << "2. Mid\n"
                 << "3. Senior\n"
                 << "4. Lead\n"
                 << "Enter the level number: ";
            int choice;
            cin >> choice;
            cin.ignore();
            switch (choice) {
                case 1: return Constants::EmployeeLevel::JUNIOR;
                case 2: return Constants::EmployeeLevel::MID;
                case 3: return Constants::EmployeeLevel::SENIOR;
                case 4: return Constants::EmployeeLevel::LEAD;
                default:
                    cout << "Invalid level. Please try again.\n";
            }
        }
    }

    string getDepartmentName() const {
        switch (department) {
            case Constants::Department::HR: return "HR";
            case Constants::Department::IT: return "IT";
            case Constants::Department::FINANCE: return "Finance";
            case Constants::Department::SALES: return "Sales";
            default: return "Unknown";
        }
    }

    string getLevelName() const {
        switch (level) {
            case Constants::EmployeeLevel::JUNIOR: return "Junior";
            case Constants::EmployeeLevel::MID: return "Mid";
            case Constants::EmployeeLevel::SENIOR: return "Senior";
            case Constants::EmployeeLevel::LEAD: return "Lead";
            default: return "Unknown";
        }
    }
};

#endif