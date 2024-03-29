#include"Complex.h"
using namespace std;
int main()
{
	Complex c1, c2, result;

    cout<<"Enter first complex number:\n";
    c1.Accept();

    cout<<"Enter second complex number:\n";
    c2.Accept();

    // In case of operator overloading of binary operators in C++ programming, 
    // the object on right hand side of operator is always assumed as argument by compiler.
    result = c1 + c2;
    
    result.Display();
	return 0;
}
