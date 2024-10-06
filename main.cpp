#include <iostream>
#include "Employee.h"
#include "Salary.h"
#include "BonusSalary.h"

using namespace std;

int main() {
    // Variables to store dynamic inputs
    string empID1, empID2, empName1, empName2, empDept1, empDept2;
    double baseSalary1, baseSalary2, bonus2, taxRate1, taxRate2;
    double healthInsurance;
    int vacationDays;

    // Get details for first employee
    cout << "Enter Employee 1 ID: ";
    cin >> empID1;
    cout << "Enter Employee 1 Name: ";
    cin >> empName1;
    cout << "Enter Employee 1 Department: ";
    cin >> empDept1;
    cout << "Enter Employee 1 Base Salary: ";
    cin >> baseSalary1;
    cout << "Enter Employee 1 Tax Rate: ";
    cin >> taxRate1;

    // Get details for second employee (with bonus salary)
    cout << "\nEnter Employee 2 ID: ";
    cin >> empID2;
    cout << "Enter Employee 2 Name: ";
    cin >> empName2;
    cout << "Enter Employee 2 Department: ";
    cin >> empDept2;
    cout << "Enter Employee 2 Base Salary: ";
    cin >> baseSalary2;
    cout << "Enter Employee 2 Bonus: ";
    cin >> bonus2;
    cout << "Enter Employee 2 Tax Rate: ";
    cin >> taxRate2;

    // Get benefit details (health insurance and vacation days)
    cout << "\nEnter Health Insurance Amount: ";
    cin >> healthInsurance;
    cout << "Enter Vacation Days: ";
    cin >> vacationDays;

    // Create dynamic Compensation objects (abstract class pointer to derived objects)
    Compensation* salaryComp = new Salary(baseSalary1, taxRate1); // Base salary with tax for Employee 1
    Compensation* bonusComp = new BonusSalary(baseSalary2, bonus2, taxRate2); // Base salary, bonus, and tax for Employee 2

    // Create Benefit object (same for both employees here)
    Benefit benefit1(healthInsurance, vacationDays);

    // Create Employee objects using polymorphic Compensation types (abstract class usage)
    Employee emp1(empID1, empName1, empDept1, salaryComp, benefit1);
    Employee emp2(empID2, empName2, empDept2, bonusComp, benefit1);

    // Display details using polymorphism and abstract class
    cout << "\nEmployee 1 Details:\n";
    emp1.displayDetails();
    cout << "Net Salary: " << emp1.getNetSalary() << endl;

    cout << "\nEmployee 2 Details:\n";
    emp2.displayDetails();
    cout << "Net Salary: " << emp2.getNetSalary() << endl;

    // Clean up (abstract class pointers need to be deleted properly)
    delete salaryComp;
    delete bonusComp;

    return 0;
}
