#include<iostream>
using namespace std;
int main()
{   
    char choice;
    float sum,sub,mul,division,num1,num2;
    do
    {
        cout<<"1. + for Addition"<<endl;
        cout<<"2. - for Substraction"<<endl;
        cout<<"3. * Multiplication"<<endl;
        cout<<"4. / Division"<<endl;
        cout<<"5.E for Exit"<<endl;

        cout<<"------------------------------------------------------"<<endl;

        cout<<"Enter your Choice : ";
        cin>>choice;

        switch (choice)
        {
        case '+':
            num1,num2;
            cout<<"Enter first Number :";
            cin>>num1;
            cout<<"Enter Second Number :";
            cin>>num2;

            sum = num1+num2;
            cout<<endl;
            cout<<"Addition of Numbers is :"<<sum<<endl;
            cout<<"------------------------------------------------------"<<endl;
            break;
        case '-':
            num1,num2;
            cout<<"Enter first Number :";
            cin>>num1;
            cout<<"Enter Second Number :";
            cin>>num2;

            sub = num1-num2;
            cout<<endl;
            cout<<"Substraction of Numbers is :"<<sub<<endl;
            cout<<"------------------------------------------------------"<<endl;
            break;
        case '*':
            num1,num2;
            cout<<"Enter first Number :";
            cin>>num1;
            cout<<"Enter Second Number :";
            cin>>num2;

            mul = num1*num2;
            cout<<endl;
            cout<<"Multiplication of Numbers is :"<<mul<<endl;
            cout<<"------------------------------------------------------"<<endl;
            break;
        case '/':
            num1,num2;
            cout<<"Enter first Number :";
            cin>>num1;
            cout<<"Enter Second Number :";
            cin>>num2;

            division = num1/num2;
            cout<<endl;
            cout<<"Division of Numbers is :"<<division<<endl;
            cout<<"------------------------------------------------------"<<endl;

            break;
        
        default:
            cout<<"Enter Proper Choice!!!!!!!"<<endl;
            exit(0);
            break;
        }
    } while (choice!='E'|| choice!='e');
    
    return 0;
}