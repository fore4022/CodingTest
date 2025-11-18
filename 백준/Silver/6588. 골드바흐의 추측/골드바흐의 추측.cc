#include<iostream>
#include<cstring>

using namespace std;

int inputs[100000];
bool primeNumbers[1000001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 0, m = 1;

	memset(primeNumbers, true, sizeof(primeNumbers));

	for (int i = 2; i <= 1000000; i++)
	{
		for (int j = i + i; j <= 1000000; j += i)
		{
			primeNumbers[j] = false;
		}
	}

	primeNumbers[2] = false;

	for(int i = 0; i < 100000; i++)
	{
		cin >> m;

		if (m == 0)
		{
			break;
		}
		else
		{
			inputs[cnt] = m;
			cnt++;
		}
	}

	for (int i = 0; i < cnt; i++)
	{
		if (inputs[i] % 2 != 0)
		{
			cout << "Goldbach's conjecture is wrong." << '\n';
		}
		else
		{
			for (int j = 3; j <= inputs[i] / 2; j += 2)
			{
				if (primeNumbers[j] && primeNumbers[inputs[i] - j])
				{
					cout << inputs[i] << " = " << j << " + " << inputs[i] - j << '\n';

					break;
				}
			}
		}
	}
}