#include <iostream>
using namespace std;

class Employee {
    string name;
    int age;
    double salary;

public:
    // Default constructor
    Employee() {
        name = " ";
        age = 0;
        salary = 0.0;
    }

    // Parameterized constructor
    Employee(string n, int a, double s) {
        name = n;
        age = a;
        salary = s;
    }

    // Overloaded constructor
    Employee(int a, double s) {
        name = " Unknown ";
        age = a;
        salary = s;
    }

    // Copy constructor
    Employee(const Employee& e) {
        name = e.name;
        age = e.age;
        salary = e.salary;
    }

    // Getters
    string getName() {
        return name;
    }

    int getAge() {
        return age;
        
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    // Default constructor
    Employee e1;

    // Parameterized constructor
    Employee e2("chetan", 56, 150000);

    // Overloaded constructor
    Employee e3(25, 160000);

    // Copy constructor
    Employee e4(e2);

    // Print employee details
    cout << "Employee 1 Name: " << e1.getName()<<endl<<"Age : "<<e1.getAge()<<endl<<"SALARY : "<<e1.getSalary()<<endl;
    cout << "Employee 2 Name: " << e2.getName()<<endl<<"Age : "<<e2.getAge()<<endl<<"SALARY : "<<e2.getSalary()<< endl;
    cout << "Employee 3 Name: " << e3.getName()<<endl<<"Age : "<<e3.getAge()<<endl<<"SALARY : "<<e3.getSalary()<< endl;
    cout << "Employee 4 Name: " << e4.getName()<<endl<<"Age : "<<e4.getAge()<<endl<<"SALARY : "<<e4.getSalary()<<  endl;
    
    return 0;
}
