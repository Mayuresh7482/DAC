#include <iostream>
using namespace std;
int fiboS(int);
int main()
{
	int num=13;
	fiboS(num);
	for(int i=0;i<=num;i++)
	{
		cout<<fiboS(i)<<" ";
	}
	cout<<endl;
	return 0;

}
 int fiboS(int num)
{
	if(num==0)
		return 0;
	else if(num==1)
		return 1;
	else
		return (fiboS(num-1)+fiboS(num-2));


}
