#include<iostream>
using namespace std;
int circle(int);
int rect(int,int);
int square(int);

int main()
{
	int r;
	cout<<"Enter the radius of Circle : "<<endl;
	cin>>r;
	int areaC = circle(r);
	//int area1 = circle(area1);
	cout<<"Area of circle : "<<areaC;

	int w, h;
	cout<<"Enter the height and weidth of rect : "<<endl;
	cin>>w>>h;
	int areaR = rect(w, h);

	//int area2 = rect(area2)
	cout<<"Area of rectangle : "<<areaR;


	int side;
	cout<<"Enter the side of square : "<<endl;
	cin>>side;
	int squareA = square(side);
	//int area3 = square(area3);
	cout<<"Area of square : "<<squareA;
	return 0;
}

int circle(int r)
{
	int area1;

	area1 = 3.14 * r * r;
	return area1;
}
int rect(int w, int h)
{
	int area2;
	area2 = w * h ;
	return area2;
}
int square(int side)
{
	int area3 = side * side ;

	return area3;
}
