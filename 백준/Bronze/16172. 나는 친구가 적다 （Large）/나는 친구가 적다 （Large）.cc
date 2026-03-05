#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<char> vec;
	string str, word;

	cin >> str >> word;

	for (char c : str)
	{
		if (!(c >= '0' && c <= '9'))
		{
			vec.push_back(c);
		}
	}

	str = "";

	for (char c : vec)
	{
		str += c;
	}

	if (str.find(word) == string::npos)
	{
		cout << "0";
	}
	else
	{
		cout << "1";
	}
}