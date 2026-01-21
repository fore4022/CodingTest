#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int arr[10] = {};
	int a, b, c;

	cin >> a >> b >> c;

	str = to_string(a * b * c);

	for (char c : str)
	{
		arr[c - '0']++;
	}

	for (int i : arr)
	{
		cout << i << '\n';
	}
}