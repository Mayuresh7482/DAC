#include<iostream>
using namespace std;
int binary(int);
int main()
{
	int num;
	cout<<"Enter the Number : "<<endl;
	cin>>num;
	int ans = binary(num);
	cout<<ans;

	return 0;

}
int binary(int num)
{
	if(num==0)
		return 0;
	else
		return (num%2)+(10*binary(num/2));
}
