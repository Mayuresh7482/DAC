#include<iostream>
using namespace std;
void char_Line(char ch,int size)
{
    for(int i=1;i<=size;i++)
    {
        cout<<ch;;
    }
    cout<<endl;
}
int main()
{   
    char ch='-';
    int size=50;;

    char_Line(ch,size);
    cout<<"  Data Type\t \t \t Size in Bytes"<<endl;
    char_Line(ch,size);
    cout<<"  Integer  \t \t \t "<<sizeof(int)<<endl;
    char_Line(ch,size);
    cout<<"  Character\t \t \t "<<sizeof(char)<<endl;
    char_Line(ch,size);
    cout<<"  Float\t \t \t  \t "<<sizeof(float)<<endl;
    char_Line(ch,size);


    return 0;
}