#include "Employee.h"
#include "Salary.h"
#include "BonusSalary.h"

int main() {
    // Create dynamic Compensation objects (Polymorphism in action)
    Compensation* salaryComp = new Salary(4000, 10); // Base salary with tax
    Compensation* bonusComp = new BonusSalary(4000, 600, 10); // Base salary, bonus, and tax

    // Create Benefit object
    Benefit benefit1(400, 20);

    // Create Employee objects using polymorphic Compensation types
    Employee emp1("001", "Sudhan", "HR", salaryComp, benefit1);
    Employee emp2("002", "Prasanth", "IT", bonusComp, benefit1);

    // Polymorphism: Display compensation details based on dynamic object type
    emp1.displayDetails();
    cout << "Net Salary: " << emp1.getNetSalary() << endl;

    emp2.displayDetails();
    cout << "Net Salary: " << emp2.getNetSalary() << endl;

    // Clean up
    delete salaryComp;
    delete bonusComp;

    return 0;
}
