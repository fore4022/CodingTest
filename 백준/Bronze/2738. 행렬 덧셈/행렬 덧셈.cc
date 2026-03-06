#include<iostream>

using namespace std;

int main()
{
	int arr[100][100] = {};
	int n, m, o;

	cin >> n >> m;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				cin >> o;

				arr[j][k] += o;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j];

			if (j != m - 1)
			{
				cout << " ";
			}
		}

		cout << '\n';
	}
}