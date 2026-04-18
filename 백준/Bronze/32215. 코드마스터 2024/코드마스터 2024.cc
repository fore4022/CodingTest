	#include<iostream>

	using namespace std;

	int main()
	{
		int n, m, k;

		cin >> n >> m >> k;

		if (n == k)
		{
			cout << k * m;
		}
		else
		{
			cout << (k + 1) * m;
		}
	}