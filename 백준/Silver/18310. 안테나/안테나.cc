#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> vec;
	int n, o;
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;
		
		vec.push_back(o);
	}

	sort(vec.begin(), vec.end());

	cout << vec[max(n / 2 - (n % 2 == 1 ? 0 : 1), 0)];
}