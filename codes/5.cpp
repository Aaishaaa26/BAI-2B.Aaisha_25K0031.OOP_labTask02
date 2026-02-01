#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    float salary;
    float taxPercentage;

public:

    void get_data(){
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter monthly salary: ";
        cin >> salary;

        cout << "Enter tax percentage: ";
        cin >> taxPercentage;
    }

    float Salary_after_tax(){
        float tax = salary * 2 / 100;
        return salary - tax;
    }

    void update_tax_percentage(float newTax){
        taxPercentage = newTax;

        float tax = salary * taxPercentage / 100;
        float newSalary = salary - tax;

        cout << "Updated tax percentage: " << taxPercentage << "%\n";
        cout << "Salary after updated tax: " << newSalary << endl;
    }
};

int main(){
    Employee emp;

    emp.get_data();

    cout << "\nSalary after 2% tax: "
         << emp.Salary_after_tax() << endl;

    float newTax;
    cout << "\nEnter new tax percentage: ";
    cin >> newTax;

    emp.update_tax_percentage(newTax);

    return 0;
}

