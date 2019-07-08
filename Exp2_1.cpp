#include <iostream>
using namespace std;

int main()
{
	int Hour, Total, Pack;

	cout << "Which package did you purchased? (Type the number beside the corresponding package)\n1. Package A (P995/mo)\n2. Package B (P1495/mo)\n3. Package C (P1995/mo)\n";
	cin >> Pack;

	switch (Pack)
	{
	case 1:
		cout << "How many hours did you used this package?\n";
		cin >> Hour;

		if (Hour <= 10)
		{
			cout << "The total amount due is P995.";
		}

		else
		{
			Total = 995 + ((Hour - 10) * 20);
			cout << "The total amount due is P" << Total << ".";
		}

		break;

	case 2:
		cout << "How many hours did you used this package?\n";
		cin >> Hour;

		if (Hour <= 20)
		{
			cout << "The total amount due is P1495.";
		}

		else
		{
			Total = 1495 + ((Hour - 20) * 10);
			cout << "The total amount due is P" << Total << ".";
		}

		break;

	case 3:
		cout << "How many hours did you used this package?\n";
		cin >> Hour;

		cout << "The total amount due is P1995.";

		break;

	default:
		cout << "You must pick a number that corresponds among packages A to C.\n";
	}
	system("pause");
	return 0;
}