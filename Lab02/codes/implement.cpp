#include <iostream>
#include <limits>
#include "Employee.h"
using namespace std;

void Employee::get_data() {
    cout << "Enter employee name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);

    cout << "Enter monthly salary: ";
    cin >> salary;

    cout << "Enter tax percentage: ";
    cin >> taxPercentage;
}

float Employee::Salary_after_tax() const {
    float tax = salary * taxPercentage / 100;
    return salary - tax;
}

void Employee::update_tax_percentage(float newTax) {
    taxPercentage = newTax;
    cout << "Updated tax percentage: " << taxPercentage << "%\n";
    cout << "Salary after updated tax: " << Salary_after_tax() << endl;
}

void Employee::display() const {
    cout << "Employee: " << name << endl;
    cout << "Salary: " << salary << endl;
    cout << "Tax Percentage: " << taxPercentage << "%" << endl;
    cout << "Salary after tax: " << Salary_after_tax() << endl;
    cout << "---------------------------\n";
}

