#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int arr[8002] = {};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> vec, temp;
	double average = 0;
	int n, m, cnt = 0, max = -4001, min = 4001, median = 0, mode = 0;

	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> m;

		vec.push_back(m);
		average += m;
		arr[m + 4000]++;

		if (arr[m + 4000] > cnt)
		{
			cnt = arr[m + 4000];
		}

		if (max < m)
		{
			max = m;
		}

		if (min > m)
		{
			min = m;
		}
	}

	for (int i = 0; i <= 8000; i++)
	{
		if (arr[i] == cnt)
		{
			temp.push_back(i - 4000);
		}
	}

	sort(vec.begin(), vec.end());
	sort(temp.begin(), temp.end());

	if (temp.size() != 1)
	{
		mode = temp[1];
	}
	else
	{
		mode = temp[0];
	}

	median = vec[(n + 1) / 2 - 1];
	average = (average / n);

	cout << (int)round(average) << '\n';
	cout << median << '\n';
	cout << mode << '\n';
	cout << max - min;
}