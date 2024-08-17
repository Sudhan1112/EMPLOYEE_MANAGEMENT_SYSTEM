#ifndef SALARY_H
#define SALARY_H

using namespace std;

class Salary {
private:
    double base; // Base Salary
    double bonus; // Bonus
    double tax;   // Tax Rate
    static double totalSalaryPaid; // Static variable to track total salary paid

public:
    // Constructor
    Salary(double base, double bonus, double tax) : base(base), bonus(bonus), tax(tax) {
        totalSalaryPaid += calculateNetSalary(); // Add net salary to total salary paid
    }

    static double getTotalSalaryPaid() {
        return totalSalaryPaid; // Return the total net salary paid
    }

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

// Define and initialize static member
double Salary::totalSalaryPaid = 0.0;

#endif // SALARY_H
