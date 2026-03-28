#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<string, int> m;
	string str;

	cin >> str;

	for (int i = 1; i <= str.length(); i++)
	{
		for (int j = 0; j < str.length() - i + 1; j++)
		{
			m[str.substr(j, i)]++;
		}
	}

	cout << m.size();
}