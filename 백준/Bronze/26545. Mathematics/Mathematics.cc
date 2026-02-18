#include<iostream>

using namespace std;

int main()
{
	long long result = 0;
	int n, o;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		result += o;
	}

	cout << result;
}