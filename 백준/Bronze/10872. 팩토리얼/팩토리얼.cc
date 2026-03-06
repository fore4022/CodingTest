#include<iostream>

using namespace std;

int fibo(int number)
{
	if (number == 0)
	{
		return 1;
	}

	return number * fibo(number - 1);
}

int main()
{
	int n;

	cin >> n;

	cout << fibo(n);
}