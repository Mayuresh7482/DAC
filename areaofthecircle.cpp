#include<iostream>
using namespace std;
int main() {
	int side,radius;
	float area;
	cout<<"\n enter the side of the square :";
	cin>>side;
	radius =side/2;
	area= 3.14*radius*radius;
	cout<<"\n area of the circle ="<<area<<endl;
	return 0;
}
