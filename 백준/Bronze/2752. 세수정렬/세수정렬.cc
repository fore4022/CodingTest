#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int> s;
	int o;

	for (int i = 0; i < 3; i++)
	{
		cin >> o;

		s.insert(o);
	}

	for (int i : s)
	{
		cout << i << " ";
	}
}