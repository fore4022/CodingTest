#include<iostream>

using namespace std;

int main()
{
	int o;
	bool isF = false;

	for (int i = 0; i < 8; i++)
	{
		cin >> o;

		if (o == 9 && !isF)
		{
			isF = true;
		}
	}

	if (isF)
	{
		cout << "F";
	}
	else
	{
		cout << "S";
	}
}