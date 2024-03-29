#include<iostream>
using namespace std;

int main()
{
    int year=8000;
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"Entered year is Leap year"<<endl;
    }
    else{
        cout<<"Entered year is not Leap year"<<endl;
    }
    return 0;
}