# Employee Management System

## Overview
This Employee Management System is a C++ console application that demonstrates SOLID principles and Object-Oriented Programming concepts. It provides a simple interface to manage employee records with features like adding employees and viewing employee details.

## Design Principles Implementation

### SOLID Principles
1. **Single Responsibility Principle (SRP)**
   - Each class has a single responsibility
   - `Employee` class handles employee data and operations
   - `Constants` namespace manages enumerations
   - Main program handles user interaction

2. **Open/Closed Principle (OCP)**
   - System is open for extension through the `IEmployee` interface
   - New employee types can be added without modifying existing code

3. **Liskov Substitution Principle (LSP)**
   - `Employee` class properly implements the `IEmployee` interface
   - Any derived classes can be substituted for the base interface

4. **Interface Segregation Principle (ISP)**
   - `IEmployee` interface contains only essential methods
   - No class is forced to implement unnecessary methods

5. **Dependency Inversion Principle (DIP)**
   - High-level modules depend on abstractions (`IEmployee`)
   - Low-level modules implement these abstractions

### OOP Pillars
1. **Encapsulation**
   - Private data members in `Employee` class
   - Public interface methods for data access
   - Protected access where needed

2. **Inheritance**
   - `Employee` class inherits from `IEmployee` interface
   - Proper use of virtual functions

3. **Polymorphism**
   - Virtual functions in `IEmployee` interface
   - Runtime polymorphism through interface implementation

4. **Abstraction**
   - Abstract interface `IEmployee`
   - Clear separation of interface and implementation

## Code Structure

```
employee-management/
│
├── include/
│   ├── Constants.h       # Enums for Department and EmployeeLevel
│   ├── IEmployee.h       # Interface for Employee class
│   └── Employee.h        # Employee class implementation
│
└── src/
    └── main.cpp          # Main program implementation
```

## Features
- Add new employees with details
- Display all employee records
- Department management (HR, IT, Finance, Sales)
- Employee level tracking (Junior, Mid, Senior, Lead)
- Input validation
- Clean console-based user interface

## Usage Guide

### Adding an Employee
1. Select option 1 from the main menu
2. Enter employee name
3. Select department from available options
4. Select employee level from available options

### Viewing Employees
1. Select option 2 from the main menu
2. View list of all employees with their details

### Sample Output
```
Menu:
1. Add Employee
2. Display All Employees
3. Exit
Enter your choice: 1

Enter Employee Name: John Doe

Choose Department:
1. HR
2. IT
3. Finance
4. Sales
Enter the department number: 2

Choose Level:
1. Junior
2. Mid
3. Senior
4. Lead
Enter the level number: 3

Employee details have been successfully saved to the database!
```

## Project Extension Guidelines
## Contributing
1. Fork the repository
2. Create your feature branch
3. Commit your changes
4. Push to the branch
5. Create a Pull Request

## Future Enhancements
- Database integration
- Employee search functionality
- Salary management
- Department-wise reporting
- Employee performance tracking
- GUI implementation

## License
This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments
- Modern C++ best practices
- SOLID design principles
- Object-oriented programming concepts
