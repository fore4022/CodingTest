#include<iostream>

using namespace std;

int main()
{
	unsigned long long val = 1;
	int n, cnt;

	while (cin >> n)
	{
		val = cnt = 1;

		while (val % n != 0)
		{
			val = (val * 10 + 1) % n;
			cnt++;
		}

		cout << cnt << endl;
	}
}