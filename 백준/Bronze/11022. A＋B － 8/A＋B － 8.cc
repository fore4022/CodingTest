#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> results;
	int n, a, b;
	
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;

		results.push_back("Case #" + to_string(i) + ": " + to_string(a) + " + " + to_string(b) + " = " + to_string(a + b));
	}

	for (string s : results)
	{
		cout << s << '\n';
	}
}