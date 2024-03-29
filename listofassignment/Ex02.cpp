#include<iostream>
using namespace std;
int main()
{   
    int math,bio,chem,phy,eng,avg;
    double avg1,avg2,sum;
    cout<<"Enter mark of math : ";
    cin>>math;
    cout<<"Enter mark of bio : ";
    cin>>bio;
    cout<<"Enter mark of chem : ";
    cin>>chem;
    cout<<"Enter mark of phy : ";
    cin>>phy;
    cout<<"Enter mark of eng : ";
    cin>>eng;
    sum = math + bio + chem + phy + eng;
    cout<<"Implicit type Conversion"<<endl;
    avg1 = sum/5.0;
    cout<<avg1<<endl;

    cout<<"Explicit type Conversion"<<endl;

    avg2 = double(sum/5.0);
    cout<<avg2;


    return 0;
}