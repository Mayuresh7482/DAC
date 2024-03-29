#include<iostream>
using namespace std;
int main()
{   
    char ch;
    cout<<"Enter character : ";
    cin>>ch;

    if(ch>='a' && ch<='z')
    {
        ch = ch - 32;
        cout<<ch<<endl;
    }
    else if(ch>='A' && ch<='Z')
    {
        ch = ch + 32;
        cout<<ch<<endl;
    }
    else
    {
        cout<<"Enter character is not a alphabet"<<endl;
    }
    
    return 0;
}