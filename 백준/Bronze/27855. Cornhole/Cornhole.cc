#include<iostream>

using namespace std;

int main()
{
	int a1, a2, b1, b2, scoreA, scoreB;

	cin >> a1 >> a2 >> b1 >> b2;

	scoreA = a1 * 3 + a2;
	scoreB = b1 * 3 + b2;

	if (scoreA > scoreB)
	{
		cout << "1 " << scoreA - scoreB;
	}
	else if (scoreB > scoreA)
	{
		cout << "2 " << scoreB - scoreA;
	}
	else
	{
		cout << "NO SCORE";
	}
}