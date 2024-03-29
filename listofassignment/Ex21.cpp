#include<iostream>
using namespace std;
void areaCircum(float *r)
{   
    float pi = 3.142;
    cout<<"Area of Circle is "<<pi* *r * *r<<endl;
    cout<<"Circumference of Circle is "<<2*pi* *r<<endl;
    cout<<"----------------------------------------------"<<endl;
}
void areaPeri(float *l,float *b)
{
    cout<<"Area of rectangle is "<< *l * *b<<endl;
    cout<<"Perimeter of rectangle is "<<2 * (*l + *b)<<endl;
    cout<<"----------------------------------------------"<<endl;
}

int main()
{   
    int choice;
    float radius,length,breadth;
    do
    {
        cout<<"----------------------------------------------"<<endl;
        cout<<"1 for Circle"<<endl;
        cout<<"2 for Rectangle"<<endl;
        cout<<"3 for Exit"<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"Enter You Choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter radius of circle : ";
            cin>>radius;
            areaCircum(&radius);
            break;

        case 2:
            cout<<"Enter length of rectangle : ";
            cin>>length;
            cout<<"Enter breadth of rectangle : ";    
            cin>>breadth; 
            areaPeri(&length,&breadth);
            break;

        case 3:
            exit(0);
            break;
        
        default:
            cout<<"Enter Proper Choice"<<endl;
            break;
        }



    } while (choice!=3);
    
    return 0;
}