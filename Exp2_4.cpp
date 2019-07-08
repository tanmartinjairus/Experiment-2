#include <iostream>
using namespace std;

int main()
{

	int Num;
	cout << "Counting...\n";

	for (Num = 1; Num <= 9; Num++)
	{
		cout << Num << ", ";
	}

	for (Num = 10; Num <= 30; Num += 2)
	{
		cout << Num << ", ";
	}

	system("pause");
	return 0;
}