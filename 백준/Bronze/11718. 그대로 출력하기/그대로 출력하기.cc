#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> vec;
	string str;

	while (!getline(cin, str).eof())
	{
		vec.push_back(str);
	}

	for (string s : vec)
	{
		cout << s << '\n';
	}
}