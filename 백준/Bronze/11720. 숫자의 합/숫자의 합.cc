#include<iostream>

using namespace std;

int main()
{
	string str;
	int n, result = 0;

	cin >> n >> str;

	for (int i = 0; i < n; i++)
	{
		result += str[i] - '0';
	}

	cout << result;
}