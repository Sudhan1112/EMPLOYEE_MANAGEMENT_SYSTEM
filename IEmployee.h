#ifndef IEMPLOYEE_H
#define IEMPLOYEE_H

#include <string>
#include "Constants.h"

using namespace std;

class IEmployee {
public:
    virtual ~IEmployee() = default;
    virtual string getName() const = 0;
    virtual void setName(const string& name) = 0;
    virtual Constants::Department getDepartment() const = 0;
    virtual void setDepartment(Constants::Department dept) = 0;
    virtual Constants::EmployeeLevel getLevel() const = 0;
    virtual void setLevel(Constants::EmployeeLevel level) = 0;
    virtual void displayDetails() const = 0;
};

#endif