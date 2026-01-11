#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string str;
	int arr[26] = {};

	std::fill(arr, arr + 26, -1);

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (arr[str.at(i) - 'a'] == -1)
		{
			arr[str.at(i) - 'a'] = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
}