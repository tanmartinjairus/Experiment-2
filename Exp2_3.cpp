#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int X;
	double Y, V;
	const double Z = 2.5;

	cout << "Enter the value for x: ";
	cin >> X;

	switch (X)
	{
	case 1:
		cout << "Enter the value for y: ";
		cin >> Y;

		if (Y < 5 && Y>1)
		{
			V = X * Y * Z;
			cout << setw(10);
			cout << "The value of v is " << V;
		}

		else if (Y >= 5)
		{
			V = X + Y / Z;
			cout << setw(10);
			cout << "The value of v is " << V;
		}

		else
		{
			V = X + Y + Z;
			cout << setw(10);
			cout << "The value of v is " << V;
		}
		break;

	case 2:
		cout << "Enter the value for y: ";
		cin >> Y;

		if (Y <= 5)
		{
			V = abs((X - Y) / Z);
			cout << setw(10);
			cout << "The value of v is " << V;
		}

		else if (Y > 5)
		{
			V = X - sqrt(Y - Z);
			cout << setw(10);
			cout << "The value of v is " << V;
		}

		else
		{
			V = X + Y + Z;
			cout << setw(10);
			cout << "The value of v is " << V;
		}
		break;

	default:
	{
		cout << "Enter the value for y: ";
		cin >> Y;

		V = X + Y + Z;
		cout << setw(10);
		cout << "The value of v is " << V;
	}

	system("pause");
	return 0;
	}
}