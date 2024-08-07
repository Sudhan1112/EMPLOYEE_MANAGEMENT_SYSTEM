
---

# Employee Management and Salary Calculation

## Overview

This project is a simple C++ application that manages employee information and calculates their salaries. The program allows the user to enter details for multiple employees, including their ID, name, department, base salary, bonus, and tax rate. It then calculates the net salary for each employee after deducting tax and adding bonuses. The program uses classes and vectors to store and manage the data efficiently.

## How to Run

1. **Clone the Repository:**
   ```sh
   git clone https://github.com/your-username/EmployeeManagement.git
   cd EmployeeManagement
   ```

2. **Compile the Code:**
   ```sh
   g++ main.cpp -o EmployeeManagement
   ```

3. **Run the Executable:**
   ```sh
   ./EmployeeManagement
   ```

## Usage

- The program will prompt you to enter the number of employees.
- For each employee, you will be prompted to enter the following details:
  - Employee ID
  - Name
  - Department
  - Base Salary
  - Bonus
  - Tax Rate (%)
- After entering the details for all employees, the program will display each employee's information along with their calculated net salary.

## Example Output

```plaintext
Enter the number of employees: 2

Enter details for employee 1:
Employee ID: E001
Name: John Doe
Department: HR
Base Salary: 50000
Bonus: 5000
Tax Rate (%): 10

Enter details for employee 2:
Employee ID: E002
Name: Jane Smith
Department: IT
Base Salary: 60000
Bonus: 6000
Tax Rate (%): 12

Employee 1 Information:
Employee ID: E001
Name: John Doe
Department: HR
Salary Details:
Base Salary: 50000
Bonus: 5000
Tax Rate: 10%
Net Salary: 45000

Employee 2 Information:
Employee ID: E002
Name: Jane Smith
Department: IT
Salary Details:
Base Salary: 60000
Bonus: 6000
Tax Rate: 12%
Net Salary: 52800
```

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

---