#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"\n enter the number";
	cin>>number;
	int count=0;
	for(int i=1;i<=number/2;i++){
		if(number%i==0)count+=i;
	}
	cout<< endl;
	if(count==number)cout<<"Entered number is perfect number\n";
	else cout<<"The number is not a perfect number\n";
	return 0 ; 
}
