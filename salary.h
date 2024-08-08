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
    Salary(double base, double bonus, double tax);

    // Method to calculate net salary
    double calculateNetSalary() const;

    // Method to print salary details
    void printSalaryDetails() const;
};

#endif // SALARY_H
