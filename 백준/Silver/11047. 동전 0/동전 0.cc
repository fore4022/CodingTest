#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec;
	int n, k, temp, cnt = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;

		vec.push_back(temp);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		temp = k / vec[i];
		k -= vec[i] * temp;
		cnt += temp;
	}

	cout << cnt;
}