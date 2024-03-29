#include<iostream>
using namespace std;

int FindAvg(int arr[], int size)
{
	int sum = 0;
	for(int i=0;i<size; i++)
	{
		sum = sum + arr[i];
	}
	int avg =  sum / size;
	
	return avg;
}

int main()
{
	int size;
	cout<<"Enter the size : ";
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	int avg = FindAvg(arr, size);

	cout<<"Average of Array is : "<<avg;
	
	return 0;
}