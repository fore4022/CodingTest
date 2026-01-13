#include<iostream>

using namespace std;

int main()
{
	int size[6] = {};
	int cnt = 0, participant, t, p;

	cin >> participant;
	
	for (int i = 0; i < 6; i++)
	{
		cin >> size[i];
	}

	cin >> t >> p;

	for (int i = 0; i < 6; i++)
	{
		cnt += size[i] / t + (size[i] % t != 0 ? 1 : 0);
	}

	cout << cnt << '\n';

	cout << participant / p << " " << participant % p;
}