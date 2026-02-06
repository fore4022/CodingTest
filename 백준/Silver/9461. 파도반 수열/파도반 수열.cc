#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<long long> vec = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9}, nums;
	int n, o, max = -1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		if (max == -1)
		{
			max = o;
		}
		else if(max < o)
		{
			max = o;
		}
		
		nums.push_back(o);
	}

	for (int i = 10; i <= max; i++)
	{
		vec.push_back(vec.back() + vec[vec.size() - 5]);
	}

	for (int i : nums)
	{
		cout << vec[i] << '\n';
	}
}