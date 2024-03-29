#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	string fullname;
	cout<<"\nEnter your in=\n";
	cin>>name;
	cout<<"\nname is "<<endl<<name;
	cin.get();
	cout<<"\nEnter your full name=\n";
	getline(cin,fullname);
	cout<<"\nfull name is"<<endl<<fullname;
	return 0;
}
