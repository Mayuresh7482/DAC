#include<iostream>
using namespace std;
int main(){
	int a,b,swap;
	cout<<"\n Enter the two number : " << endl ;
	cin>> a>>b;
	cout<<"\n before swapping a= "<<a<<",b="<<b<<endl;
	swap=a;
	a=b;
	b=swap;
	cout<<"\n After the swapping a= "<<a<<",b= "<<b<<endl;
	return 0;
}
	
