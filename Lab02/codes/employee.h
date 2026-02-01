#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    float salary;
    float taxPercentage;

public:
    void get_data();
    float Salary_after_tax() const;
    void update_tax_percentage(float newTax);
    void display() const;
};

#endif
