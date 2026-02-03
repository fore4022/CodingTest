#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> vec;
	int n, temp, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;

		vec.push_back(temp);
	}

	temp = 0;

	sort(vec.begin(), vec.end());

	for (int i = 0; i < n; i++)
	{
		temp += vec[i];
		cnt += temp;
	}

	cout << cnt;
}