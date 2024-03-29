#include<iostream>
using namespace std;
int main()
{   
    int stick = 21;
    int user ,comp ;
    int turn = 0;
    while(stick>=0)
    {
        cout<<"Its Your turn!!!"<<endl;
        cout<<"Enter Number of stick from (1 , 2 , 3 and 4 ) : ";
        cin>> user;
        turn++;
        comp = 5 - user ;
        cout<<"You Enter : "<<user<<endl;
        cout<<"Computer Enter : "<<comp<<endl;
        stick = stick - (user + comp);
    }

    if(turn%2!=0)
    {
        cout<<"Computer Won!!!"<<endl;
    }
    else
    {
        cout<<"You won!!!"<<endl;
    }
    return 0;
}