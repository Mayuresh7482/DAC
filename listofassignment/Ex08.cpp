#include<iostream>
using namespace std;
int main()
{
    float BasicSalary;
    cout<<"Enter Basic salary :";
    cin>>BasicSalary;
    float TotalSale,Commision;
    cout<<"Enter Total Sale Amount :";
    cin>>TotalSale;
    float NetSalary;
    if(TotalSale>=5000 || TotalSale<=7500)
    {   
        Commision = (TotalSale*3)/100;
        NetSalary =  BasicSalary + Commision;
        cout<<"Net Salary is :"<<NetSalary<<endl;
        cout<<"Commsion Amount is :"<<Commision<<endl;
    }
    else if(TotalSale>=7501 || TotalSale<=10500)
    {   
        Commision = (TotalSale*8)/100;
        NetSalary =  BasicSalary + Commision;
        cout<<"Net Salary is :"<<NetSalary<<endl;
        cout<<"Commsion Amount is :"<<Commision<<endl;
    }
    else if(TotalSale>=10501 || TotalSale<=15000)
    {   
        Commision = (TotalSale*11)/100;
        NetSalary =  BasicSalary + Commision;
        cout<<"Net Salary is :"<<NetSalary<<endl;
        cout<<"Commsion Amount is :"<<Commision<<endl;
    }
    else
    {
        Commision = (TotalSale*15)/100;
        NetSalary =  BasicSalary + Commision;
        cout<<"Net Salary is :"<<NetSalary<<endl;
        cout<<"Commsion Amount is :"<<Commision<<endl;
    }
    
    return 0;
}