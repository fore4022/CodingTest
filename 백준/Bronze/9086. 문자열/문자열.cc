#include<iostream>

using namespace std;

int main()
{
	string strs[10];
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> strs[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << strs[i].front() << strs[i].back() << '\n';
	}
}