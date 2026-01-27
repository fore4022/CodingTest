#include<iostream>
#include<vector>

using namespace std;

int arr[20000001] = {};

int main()
{
	vector<int> cnts;
	int n, m, a;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		arr[a + 10000000]++;
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a;

		cnts.push_back(arr[a + 10000000]);
	}

	for (int i : cnts)
	{
		cout << i << " ";
	}
}