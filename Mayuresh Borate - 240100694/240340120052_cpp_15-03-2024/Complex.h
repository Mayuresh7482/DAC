#include<iostream>
using namespace std;
class Complex
{
	private
		:
		int i;
		int j;
	public:
		Complex(int i=0,int j=0);
		void Accept();
		void Display();
		int GetvalueI();
		void setvalueI(int);
		Complex operator + ( Complex c2);
		

};
