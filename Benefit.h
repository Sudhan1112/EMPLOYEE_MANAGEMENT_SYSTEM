#ifndef BENEFIT_H
#define BENEFIT_H
#include <iostream>
using namespace std;

class Benefit {
private:
    double healthInsurance;
    int vacationDays;

public:
    // Constructor
    Benefit() : healthInsurance(0.0), vacationDays(0) {}

    // Parameterized Constructor
    Benefit(double insurance, int vacation)
        : healthInsurance(insurance), vacationDays(vacation) {}

    // Setters
    void setHealthInsurance(double insurance) {
        healthInsurance = insurance;
    }

    void setVacationDays(int vacation) {
        vacationDays = vacation;
    }

    // Getters
    double getHealthInsurance() const {
        return healthInsurance;
    }

    int getVacationDays() const {
        return vacationDays;
    }

    // Print Benefit details
    void printBenefitDetails() const {
        cout << "Health Insurance: " << healthInsurance
             << "\nVacation Days: " << vacationDays << endl;
    }
};

#endif // BENEFIT_H
