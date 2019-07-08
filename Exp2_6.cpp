#include <iostream>
using namespace std;
int main()
{
	int Sum = 0, A = 0;
	int Num = Sum;
	do
	{
		cout << "Enter a whole number: ";
		cin >> Num;
		
		if (Num <= 0)
		{
			cout << "Thank you!";
			break;
		}

		for (; A <= Num; A++)
		{	Sum += A;	}

		cout << "The sum of whole numbers from 1 to " << Num << " is " << Sum << endl;
		Sum = 0;

	} while (Num != 0);

	system("pause");
	return 0;
}