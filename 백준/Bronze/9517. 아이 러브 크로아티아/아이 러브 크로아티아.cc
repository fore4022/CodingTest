#include<iostream>

using namespace std;

int main()
{
	char c;
	int n, m, o, cnt = 0;

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> o >> c;

		cnt += o;

		if (cnt < 210)
		{
			if (c == 'T')
			{
				n++;

				if (n == 9)
				{
					n = 1;
				}
			}
		}
	}

	cout << n;
}