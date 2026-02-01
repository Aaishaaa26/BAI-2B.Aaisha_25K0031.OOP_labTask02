#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 3;
    Employee employees[NUM_EMPLOYEES];

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        employees[i].get_data();
    }

    cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        employees[i].display();
    }

    float newTax;
    cout << "\nEnter new tax percentage to update for all employees: ";
    cin >> newTax;

    cout << "\n--- Updated Salaries ---\n";
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        employees[i].update_tax_percentage(newTax);
    }

    return 0;
}

