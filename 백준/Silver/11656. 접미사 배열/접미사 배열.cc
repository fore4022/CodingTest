#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<string, bool> map;
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		map.insert({ str.substr(i, str.length()), false });
	}

	for (auto it : map)
	{
		cout << it.first << '\n';
	}
}