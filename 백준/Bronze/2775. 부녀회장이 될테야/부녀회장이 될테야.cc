#include<iostream>
#include<vector>

using namespace std;

int arr[15][15] = {};

int main() 
{
	vector<int> results;
	int n, a, b;

	cin >> n;

	for (int i = 1; i < 15; i++)
	{
		arr[0][i] = i;
	}

	for (int i = 1; i < 15; i++)
	{
		for (int j = 1; j < 15; j++)
		{
			for (int k = 1; k <= j; k++)
			{
				arr[i][j] += arr[i - 1][k];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		results.push_back(arr[a][b]);
	}

	for (int i : results)
	{
		cout << i << '\n';
	}
}