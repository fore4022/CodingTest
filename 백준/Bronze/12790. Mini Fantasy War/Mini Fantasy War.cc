#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> result;
	int n, hp, mp, dmg, def, a, b, c, d;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> hp >> mp >> dmg >> def >> a >> b >> c >> d;

		hp += a;
		mp += b;
		dmg += c;
		def += d;

		if (hp <= 0)
		{
			hp = 1;
		}

		if (mp <= 0)
		{
			mp = 1;
		}

		if (dmg <= 0)
		{
			dmg = 0;
		}

		result.push_back(hp + mp * 5 + dmg * 2 + def * 2);
	}

	for (int i : result)
	{
		cout << i << '\n';
	}
}