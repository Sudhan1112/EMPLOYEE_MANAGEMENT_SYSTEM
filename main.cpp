#include <iostream>
#include <vector>
using namespace std;

class Employee {
public:
    string id;
    string name;
    string department;
    double baseSalary;
    double bonus;
    double taxRate;
    double performanceBonus;
    double healthInsurance;
    int vacationDays;

    // Static variable to track total net salary paid
    static double totalNetSalaryPaid;
    static int employeeCount;

    Employee(string empId, string empName, string empDept, double salary, double bonusAmt, 
             double tax, double perfBonus, double healthIns, int vacDays) {
        id = empId;
        name = empName;
        department = empDept;
        baseSalary = salary;
        bonus = bonusAmt;
        taxRate = tax;
        performanceBonus = perfBonus;
        healthInsurance = healthIns;
        vacationDays = vacDays;
        employeeCount++;
    }

    double calculateNetSalary() {
        double grossSalary = baseSalary + bonus + performanceBonus;
        double taxAmount = grossSalary * (taxRate / 100);
        double netSalary = grossSalary - taxAmount - healthInsurance;

        // Update the total net salary paid
        totalNetSalaryPaid += netSalary;

        return netSalary;
    }

    void displayDetails() {
        double netSalary = calculateNetSalary();
        cout << "\nEmployee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Health Insurance: " << healthInsurance << endl;
        cout << "Vacation Days: " << vacationDays << endl;
        cout << "Compensation Details:" << endl;
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Tax Rate: " << taxRate << "%" << endl;
        cout << "Performance Bonus: " << performanceBonus << endl;
        cout << "Net Salary: " << netSalary << endl;
    }

    // Static function to display total number of employees and total net salary paid
    static void displaySummary() {
        cout << "\nTotal Number of Employees: " << employeeCount << endl;
        cout << "Total Net Salary Paid: " << totalNetSalaryPaid << endl;
    }
};

// Initialize static variables
double Employee::totalNetSalaryPaid = 0;
int Employee::employeeCount = 0;

int main() {
    vector<Employee> employees; // Vector to store Employee objects
    int numEmployees;

    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; ++i) {
        string id, name, department;
        double baseSalary, bonus, taxRate, performanceBonus, healthInsurance;
        int vacationDays;

        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "Employee ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Department: ";
        cin >> department;
        cout << "Base Salary: ";
        cin >> baseSalary;
        cout << "Bonus: ";
        cin >> bonus;
        cout << "Tax Rate (%): ";
        cin >> taxRate;
        cout << "Performance Bonus: ";
        cin >> performanceBonus;
        cout << "Health Insurance: ";
        cin >> healthInsurance;
        cout << "Vacation Days: ";
        cin >> vacationDays;

        // Add employee to the vector
        employees.push_back(Employee(id, name, department, baseSalary, bonus, taxRate, performanceBonus, healthInsurance, vacationDays));
    }

    // Display details for each employee
    for (size_t i = 0; i < employees.size(); ++i) {
        employees[i].displayDetails();
    }

    // Display overall summary
    Employee::displaySummary();

    return 0;
}
