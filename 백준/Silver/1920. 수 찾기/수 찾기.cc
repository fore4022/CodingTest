#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binary_search(vector<long long>& arr, int targetNum, int low, int high)
{
	if (low > high)
	{
		return 0;
	}

	int mid = (low + high) / 2;

	if (arr[mid] == targetNum)
	{
		return 1;
	}
	else if (arr[mid] > targetNum)
	{
		return binary_search(arr, targetNum, low, mid - 1);
	}
	else if (arr[mid] < targetNum)
	{
		return binary_search(arr, targetNum, mid + 1, high);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long temp;
	int n, m;
	
	cin >> n;

	vector<long long> nums(n);

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	sort(nums.begin(), nums.end());

	cin >> m;

	vector<int> result(m);

	for (int i = 0; i < m; i++)
	{
		cin >> temp;

		result[i] = binary_search(nums, temp, 0, nums.size() - 1);
	}

	for (int i = 0; i < m; i++)
	{
		cout << result[i] << '\n';
	}
}