#include<iostream>
using namespace std;

int FindSum(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return n + FindSum(n-1);
	}

}

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;

	int ans = FindSum(num);
	cout<<"Sum of "<<num<<" natural numbers is : "<<ans;
       	
	return 0;
}
