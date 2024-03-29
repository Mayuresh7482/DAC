#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter the size of an Array : ";
	cin>>size;
	
	int arr[size];
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0; i<size;i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout<<"Sorted Array : ";
	
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl<<"Minimum : "<<arr[0]<<endl;
	cout<<"2nd Minimum : "<<arr[1]<<endl;
	cout<<"Maximum : "<<arr[size-1]<<endl;
	cout<<"2nd Maximum : "<<arr[size-2]<<endl;

	return 0;
}