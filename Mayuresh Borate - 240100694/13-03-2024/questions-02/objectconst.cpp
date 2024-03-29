#include <iostream>

class Employee {
private:
    static int count; // Static data member to count the number of objects
    int id;

public:
    Employee() {
        count++; // Increment count when a new object is created
        id = count; // Assign unique ID to each object
    }

    static int getCount() {
        return count; // Static member function to return the count
    }

    int getId() const {
        return id; // Member function to return the ID of the object
    }
};

// Initialize static member count
int Employee::count = 0;

int main() {
    // Creating objects of the Employee class
    Employee emp1;
    Employee emp2;
    Employee emp3;

    // Getting the count of objects
    std::cout << "Number of Employee objects: " << Employee::getCount() << std::endl;

    // Accessing IDs of the objects
    std::cout << "ID of emp1: " << emp1.getId() << std::endl;
    std::cout << "ID of emp2: " << emp2.getId() << std::endl;
    std::cout << "ID of emp3: " << emp3.getId() << std::endl;

    // Constant object and constant member function
    const Employee constEmp;
    std::cout << "ID of constEmp: " << constEmp.getId() << std::endl; // Accessing constant member function

    return 0;
}
