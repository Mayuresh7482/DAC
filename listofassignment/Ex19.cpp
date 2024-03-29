#include<iostream>
using namespace std;
int PrintFab(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    {
        return (num-1) + PrintFab(num-2);
    }
}

int main()
{   
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    for(int i=0;i<=num;i++)
    {
        int ans = PrintFab(i);
        cout<<ans<<" ";
    }
    return 0;
}