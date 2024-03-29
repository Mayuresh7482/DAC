#include <iostream>
using namespace std;

int main() {
    double basicSalary, HRA, DA, PF, grossSalary, netSalary;
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;//15000

    HRA = 0.15 * basicSalary;//2250
    DA = 0.30 * basicSalary;//4500
    PF = 0.125 * (basicSalary + HRA + DA);//2718.75
    grossSalary = basicSalary + HRA + DA;//21750
    netSalary = grossSalary - PF;//19031.25

    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
