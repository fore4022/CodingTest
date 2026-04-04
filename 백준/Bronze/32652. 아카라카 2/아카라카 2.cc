#include<iostream>

using namespace std;

int main()
{
	string akaraka = "AKARAKA";
	int n;

	cin >> n;

	for (int i = 1; i < n; i++)
	{
		akaraka += "RAKA";
	}

	cout << akaraka;
}