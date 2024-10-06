#ifndef BONUSSALARY_H
#define BONUSSALARY_H

#include <iostream>
#include "Salary.h"

using namespace std;

class BonusSalary : public Salary { // Multilevel Inheritance
private:
    double performanceBonus;

public:
    // Constructors
    BonusSalary() : Salary(), performanceBonus(0.0) {}
    BonusSalary(double baseSalary, double bonusAmount, double taxRatePercentage, double perfBonus)
        : Salary(baseSalary, bonusAmount, taxRatePercentage), performanceBonus(perfBonus) {
        totalSalaryPaid += calculateNetSalary();
    }

    // Destructor
    ~BonusSalary() {
        totalSalaryPaid -= calculateNetSalary();
    }

    // Setter
    void setPerformanceBonus(double perfBonus) {
        performanceBonus = perfBonus;
    }

    // Getter
    double getPerformanceBonus() const {
        return performanceBonus;
    }

    // Override printCompensation
    void printCompensation() const override {
        Salary::printCompensation();
        cout << "Performance Bonus: " << performanceBonus << endl;
    }

    // Override calculateNetSalary
    double calculateNetSalary() const override {
        double taxDeduction = baseSalary * taxRate / 100;
        double netSalary = baseSalary - taxDeduction + bonus + performanceBonus;
        return netSalary;
    }

    // Override calculateTotalCompensation
    double calculateTotalCompensation() const override {
        return calculateNetSalary();
    }
};

#endif // BONUSSALARY_H

