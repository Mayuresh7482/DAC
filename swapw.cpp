#include<iostream>
using namespace std;
int main(){
        int a,b;
        cout<<"\n Enter two number : " << endl ;
        cin>> a>>b;
        cout<<"\n before swapping a= "<<a<<",b="<<b<<endl;
      a=a+b;
      b=a-b;
      a=a-b;
        cout<<"\n After swapping a= "<<a<<",b= "<<b<<endl;
        return 0;
}


