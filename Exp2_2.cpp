#include <iostream>
using namespace std;

int main()
{

	int Gallon;
	double Bal, Con, Amo;
	cout << "Water bill\nInput the number of gallons consumed:";
	cin >> Gallon;

	cout << "How much is the unpaid balance?";
	cin >> Amo;

	if (Amo <= 0)
	{
		Con = (Gallon * 1.1) + 35;
		cout << "Your water bill is P" << Con << ".";
	}

	else
	{
		Con = (Gallon * 1.1) + 35;
		Bal = Con + 20;
		cout << "Your water bill is P" << Bal << ".";
	}

	system("pause");
	return 0;
}