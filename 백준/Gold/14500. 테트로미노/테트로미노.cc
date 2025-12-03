#include<iostream>

using namespace std;

int arr[500][500];

int main()
{
	int n, m, cnt, max = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m - 3; j++)
		{
			cnt = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i][j + 3];

			if (cnt > max)
			{
				max = cnt;
			}
		}
	}

	for (int i = 0; i < n - 3; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cnt = arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 3][j];
			
			if (cnt > max)
			{
				max = cnt;
			}
		}
	}

	for (int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < m - 1; j ++)
		{
			cnt = arr[i][j] + arr[i + 1][j] + arr[i][j + 1] + arr[i + 1][j + 1];

			if (cnt > max)
			{
				max = cnt;
			}
		}
	}

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			cnt = arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 2][j + 1];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i][j + 1] + arr[i + 1][j + 1] + arr[i + 2][j + 1] + arr[i + 2][j];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i][j + 1] + arr[i + 1][j + 1] + arr[i + 2][j + 1] + arr[i][j];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i][j + 1];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i][j] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 2][j + 1];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i][j + 1] + arr[i + 1][j + 1] + arr[i + 1][j] + arr[i + 2][j];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 1][j + 1];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i][j + 1] + arr[i + 1][j + 1] + arr[i + 2][j + 1] + arr[i + 1][j];

			if (cnt > max)
			{
				max = cnt;
			}
		}
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			cnt = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 2];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 1][j + 2] + arr[i][j + 2];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 1][j + 2] + arr[i][j];

			if (cnt > max)
			{
				max = cnt;
			}
			
			cnt = arr[i][j] + arr[i][j + 1] + arr[i + 1][j + 1] + arr[i + 1][j + 2];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i + 1][j] + arr[i + 1][j + 1] + arr[i][j + 1] + arr[i][j + 2];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 1][j + 2] + arr[i][j + 1];

			if (cnt > max)
			{
				max = cnt;
			}

			cnt = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1];

			if (cnt > max)
			{
				max = cnt;
			}
		}
	}

	std::cout << max;
}