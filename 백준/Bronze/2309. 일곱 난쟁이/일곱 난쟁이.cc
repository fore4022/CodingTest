#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[9], result[7];
	int cnt = 0, temp;
	bool solved = false;

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			for (int k = 0; k < 9; k++)
			{
				if (k != i && k != j)
				{
					cnt += arr[k];
				}
			}

			if (cnt == 100)
			{
				int l = 0;

				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
					{
						result[l] = arr[k];
						l++;
					}
				}

				solved = true;

				break;
			}
			else
			{
				cnt = 0;
			}
		}

		if (solved)
		{
			break;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 7; j++)
		{
			if (result[i] > result[j])
			{
				temp = result[j];
				result[j] = result[i];
				result[i] = temp;
			}
		}
	}

	for (int i = 0; i < 7; i++)
	{
		cout << result[i] << '\n';
	}
}