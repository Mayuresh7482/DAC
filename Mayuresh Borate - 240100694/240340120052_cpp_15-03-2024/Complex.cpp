#include"Complex.h"
using namespace std;

Complex::Complex(int i,int j)
{
		this->i=i;
		this->j=j;
}
void Complex::Accept()
{
	cout<<"\n Enter I : "<<endl;
	cin>>i;
	
	cout<<"\n Enter j : "<<endl;
	cin>>j;
}
void Complex::Display()
{
	if(j < 0)
               cout << "Output Complex number: "<< i << i << "i"<<endl;
           else
               cout << "Output Complex number: " << j << "+" << j << "i"<<endl;

}

Complex Complex::operator + ( Complex c2)
{
	Complex c3;
	c3.i=i+c2.i;
	c3.j=j+c2.j;
	return c3;
}

