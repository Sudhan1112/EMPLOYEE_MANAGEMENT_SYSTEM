# Salary Management System

## Overview
The **Salary Management System** is designed to automate the management of employee salaries, including calculation of earnings, deductions, and bonuses. Built using **Object-Oriented Programming (OOP)** principles, the system ensures flexibility and ease of maintenance, making payroll management efficient.

## Current Features
- **Employee Management**: Add, update, and manage employee details such as name, ID, and department.
- **Basic Salary Calculation**: Compute employee salary based on base pay, overtime, and deductions.
- **Bonus and Incentive Management**: Automatically apply bonuses and incentives.
- **Leave and Overtime Handling**: Calculate the impact of leaves and overtime hours on final salary.
- **Tax Deduction**: Deduct taxes from salary based on the applicable tax rate.
  
## Technologies Used
- **Programming Language**: C++ (with a focus on OOP concepts)
- **OOP Concepts Implemented**: Encapsulation, Inheritance, Polymorphism, Abstraction
- **Data Storage**: File handling (for storing employee and salary details)

## Class Structure (Current Progress)
1. **Employee Class**: Stores employee information like name, ID, and department.
2. **Salary Class**: Calculates salaries by taking base salary, overtime, and bonuses into account.
3. **Bonus Class**: Manages bonuses and incentives for employees.
4. **Leave and Overtime Class**: Adjusts salaries based on leave days and overtime hours.
5. **Tax Class**: Calculates and applies tax deductions to the salary.

## How to Use
1. **Add Employee**: Input employee details such as name, ID, and department.
2. **Calculate Salary**: Provide base salary and overtime hours to calculate the total salary.
3. **Apply Bonus**: Add performance bonuses and incentives.
4. **Generate Salary Slip**: Generate and view the final salary slip, including deductions and bonuses.

## Future Enhancements
- Expand **bonus and incentive rules** based on company policies.
- Add **detailed reporting** for salary breakdowns.
- Incorporate a **graphical user interface (GUI)** for easier interaction.
- Implement **database support** for better data persistence and management.

## How to Run
1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/salary-management-system.git
    ```
2. Navigate to the project directory:
    ```bash
    cd salary-management-system
    ```
3. Compile the project:
    ```bash
    g++ main.cpp -o salary-management
    ```
4. Run the application:
    ```bash
    ./salary-management
    ```

