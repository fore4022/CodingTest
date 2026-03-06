#include<iostream>

using namespace std;

int main()
{
	int arr[202] = { 0 };
	int n, m, o;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		arr[o + 100]++;
	}

	cin >> m;

	cout << arr[m + 100];
}