#include<iostream>
#include<string>
using namespace std;
class Employee
{
	private:
		string name;
		int age;
		double salary;
	public:
		Employee (string n,int a,double s){
		name=n;
		age=a;
		salary=s;
		cout<<"employee const : "<<n<<endl;

}
Employee(){
	 cout<<"defualt"<<endl;
}

void displayInfo(){
	cout<<"Name:"<<name<<endl;
	cout<<"Age:"<<age<<endl;
	cout<<"Salary:"<<salary<<endl;
}
};
int main(){
	int numEmployees;
	cout<<"Enter the number of employee:";
	cin>>numEmployees;

	Employee *employees=new  Employee[numEmployees];
		for(int i=0;i<numEmployees;++i)
		{
			string name;
			int age;
			double salary;
			cout<<"Enter name of the employee"<<i+1<<":";
			cin>>name;
			cout<<"Enter age of employee"<<i+1<<":";
			cin>>age;
			cout<<"Enter the salary of the employee"<<i+1<<":";
			cin>>salary;
			employees[i]=Employee(name,age,salary);
		}
	for(int i=0;i<numEmployees;++i){
		cout<<"Employee"<<i+1<<":"<<endl;
		employees[i].displayInfo();
		cout<<endl;
	}
		delete[] employees;
	return 0;
}


