#include<iostream>

using namespace std;

int main()
{
	string str;
	int n, m, IOI, result = 0, cnt1 = 0, cnt2 = 0;

	cin >> n >> m >> str;

	IOI = 2 * n + 1;

	for (int i = 0; i < m; i++)
	{
		if (cnt1 == 0 && str[i] == 'I')
		{
			cnt1 = 1;
		}
		else if (((cnt1 + cnt2) % 2 == 1 && str[i] == 'O') || ((cnt1 + cnt2) % 2 == 0 && str[i] == 'I'))
		{

			if (cnt1 == IOI)
			{
				cnt2++;
			}
			else
			{
				cnt1++;

				if (cnt1 == IOI)
				{
					result++;
				}
			}

			if (cnt2 == 2)
			{
				cnt2 = 0;
				result++;
			}
		}
		else
		{
			cnt1 = str[i] == 'I' ? 1 : 0;
			cnt2 = 0;
		}
	}

	cout << result;
}