#include <iostream>
using namespace std;
int main()
{
	char choice;
	int num1, num2, result;
	do
	{

		cout << "\n Enter + for addition";
		cout << "\n Enter - for subtraction";
		cout << "\n Enter * FOR multiplication";
		cout << "\n Enter / for division";
		cout << "\n Enter E for Exit\n";
		cin >> choice;
		switch (choice)
		{
		case '+':
			cout << "\n Enter the first number";
			cin >> num1;
			cout << "\n Enter the second  number";
			cin >> num2;
			result = num1 + num2;
			cout << "\n result for addition= " << result << endl;
			break;
		case '-':

			cout << "\n Enter the first number";
			cin >> num1;
			cout << "\n Enter the second  number";
			cin >> num2;
			result = num1 - num2;
			cout << "\n result for subtraction= " << result << endl;
			break;

		case '*':
			cout << "\n Enter the first number";
			cin >> num1;
			cout << "\n Enter the second  number";
			cin >> num2;
			result = num1 * num2;
			cout << "\n result for multiplication = " << result << endl;
			break;

		case '/':
			cout << "\n Enter the first number";
			cin >> num1;
			cout << "\n Enter the second  number";
			cin >> num2;
			if (num2 != 0)
			{
				result = num1 / num2;
				cout << "\n result for division= " << result << endl;
			}
			else
			{
				cout << "error division by zero" << endl;
			}
			break;
		case 'E':
			cout << "exiting the calculator" << endl;
		default:
			cout << "invalid input";
		}
	} while (choice != 'E');
	return 0;
}
