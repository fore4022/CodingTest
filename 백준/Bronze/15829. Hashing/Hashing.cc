#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	string str;
	long long result = 0, m = 1;
	int n;

	cin >> n >> str;

	for (char c : str)
	{
		result = (result + (c - 'a' + 1) * m) % 1234567891;
		m = (m * 31) % 1234567891;
	}

	cout << result;
}