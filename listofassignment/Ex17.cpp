#include<iostream>
using namespace std;
int main()
{   
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int index =0,numb = num;
    for(int i=num;i>=1;i--)  //i = 5
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        
        for(int j=0;j<index;j++)  //j = 5   j<2*num-(i)
        {
            cout<<" ";
        }
        if(index == 0) index = 1;   //e
        else index += 2;  //357
        for(int k=numb-1;k>=1;k--)
        {
            cout<<k;
        }
        numb--;  //3
        if(i == num) numb++; //4
    
        cout<<endl;


    }
    return 0;
}