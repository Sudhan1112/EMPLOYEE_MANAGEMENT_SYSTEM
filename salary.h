#ifndef SALARY_H
#define SALARY_H

using namespace std;

class Salary {
private:
    double base; // Base Salary
    double bonus; // Bonus
    double tax;   // Tax Rate

public:
    // Constructor
    Salary(double base, double bonus, double tax) : base(base), bonus(bonus), tax(tax) {};

    // Method to calculate net salary
    double calculateNetSalary() const {
        double taxDeduction = base * tax / 100;
        double netSalary = base - taxDeduction + bonus;
        return netSalary;
    }

    // Method to print salary details
    void printSalaryDetails() const {
        cout << "Base Salary: " << base << "\nBonus: " << bonus
             << "\nTax Rate: " << tax << "%" << endl;
    }
};

#endif // SALARY_H
