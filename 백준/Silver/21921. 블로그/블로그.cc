#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec;
	int n, m, o, cnt = 0, sum = 0, maxSum = 0, result = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		vec.push_back(o);

		cnt++;
		sum += o;

		if (cnt > m)
		{
			cnt--;
			sum -= vec[max(i - m, 0)];
		}

		if (cnt == m)
		{
			if (sum > maxSum)
			{
				maxSum = sum;
				result = 1;
			}
			else if (sum == maxSum)
			{
				result++;
			}
		}
	}

	if (maxSum == 0)
	{
		cout << "SAD";
	}
	else
	{
		cout << maxSum << '\n' << result;
	}
}