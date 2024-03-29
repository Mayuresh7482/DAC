#include<iostream>
using namespace std;
int main()
{   
    int length , breadth;
    cout<<"Enter Length of Rectangle :";
    cin>>length;
    cout<<"Enter Breadth of Rectangle :";
    cin>>breadth;

    for(int i=1;i<=breadth;i++)
    {
        for(int j=1;j<=length;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}