#include<iostream>

using namespace std;

int main()
{
	int o, cnt = 0, tar = 10, a = 1, b = 0;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		b++;
		
		if (b == tar)
		{
			a++;
			tar *= 10;
		}

		cnt += a;
	}

	cout << cnt;
}