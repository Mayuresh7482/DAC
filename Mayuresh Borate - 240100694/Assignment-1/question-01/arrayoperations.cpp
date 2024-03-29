#include<iostream>
using namespace std;

void sort(int *a,int n){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					swap(a[i],a[j]);
				}
			}
		}
	}

void input(int *a,int n){
	for(int i=0;i<n;i++){
		int element;
		cin>>element;
		a[i]=element;
	}
}

void print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<< " " ;
	}
}
int main(){
	cout<<"Enter number of elements:"<<endl;
	int n;
	cin>>n;
	int arr[n];
	        cout<<"Enter the element:"<<endl;
	input(arr,n);
	cout<<"before sorting "<<endl;

	print(arr,n);
	cout<<endl;
	sort(arr,n);
	cout<<"after sorting "<<endl;
	print(arr,n);
	return 0;
}
