#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string id;   // Person ID
    string name; // Person's Name

public:
    // Constructor
    Person() : id(""), name("") {}

    // Parameterized Constructor
    Person(const string& id, const string& name) : id(id), name(name) {}

    // Getters
    string getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    // Setters
    void setId(const string& newId) {
        id = newId;
    }

    void setName(const string& newName) {
        name = newName;
    }

    // Method to print person details
    void printPersonInfo() const {
        cout << "Employee ID: " << id << "\nName: " << name << endl;
    }
};

#endif // PERSON_H
