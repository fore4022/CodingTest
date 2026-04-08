#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	long long n;

	cin >> n;

	n = pow(n, 2);

	if (n <= 100000000)
	{
		cout << "Accepted";
	}
	else
	{
		cout << "Time limit exceeded";
	}
}