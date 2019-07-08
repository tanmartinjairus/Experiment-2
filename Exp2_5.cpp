#include <iostream>
using namespace std;
int main()
{
	int Fib, Num0, Num1 = 0, Num2 = 1, Num3;
	cout << "Fibonacci Numbers:\n";

	for (Fib = 0; Fib <= 1; Fib++)
	{
		cout << Fib << ", ";
	}

	for (Num0 = 0; Num0 <= 19; ++Num0)
	{
		Num3 = Num1 + Num2;
		Num1 = Num2;
		Num2 = Num3;
		cout << Num3 << ", ";
	}

	system("pause");
	return 0;
}