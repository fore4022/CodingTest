#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(int a, int b)
{
	return a > b;
}

int main()
{
	vector<char> vec;
	string str;

	cin >> str;

	for (char c : str)
	{
		vec.push_back(c);
	}

	sort(vec.begin(), vec.end(), comp);

	for (char c : vec)
	{
		cout << c;
	}
}