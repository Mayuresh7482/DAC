#include<iostream>
using namespace std;

int factSeries(int);

int main()
{
	int n;
	cout<<"Enter the range for factorial series : ";
	cin>>n;
	
	factSeries(n);
	
	for( int i = 1 ; i<=n; i++)
	{
		int ans = factSeries(i);
		cout<<ans<<" ";
	}
	
	return 0;
}

int factSeries(int n)
{
	if (n==1)
		return 1;
	else
		return n * factSeries(n - 1);
}
