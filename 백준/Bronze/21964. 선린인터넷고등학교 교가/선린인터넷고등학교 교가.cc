#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int n;

	cin >> n >> str;

	cout << str.substr(str.size() - 5, 5);
}