#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;

	cin >> str;
	
	if (!str.compare("1)(") || !str.compare(")(1") || !str.compare("1()") || !str.compare("()1"))
	{
		cout << "1";
	}
	else if (!str.compare(")1("))
	{
		cout << "2";
	}
	else
	{
		cout << "0";
	}
}