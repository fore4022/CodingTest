#include<iostream>
#include<limits>

using namespace std;

int main()
{
	long long n;

	cin >> n;

	if (n <= numeric_limits<short>::max() && n >= numeric_limits<short>::min())
	{
		cout << "short";
	}
	else if (n <= numeric_limits<int>::max() && n >= numeric_limits<int>::min())
	{
		cout << "int";
	}
	else
	{
		cout << "long long";
	}
}