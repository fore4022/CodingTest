#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int, int[3]> map;
	int n, m, a, g, s, b, result = 1;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> g >> s >> b;

		map[a][0] = g;
		map[a][1] = s;
		map[a][2] = b;
	}

	for (auto it : map)
	{
		if (it.first != m)
		{
			if (it.second[0] > map[m][0])
			{
				result++;
			}
			else if (it.second[0] == map[m][0])
			{
				if (it.second[1] > map[m][1])
				{
					result++;
				}
				else if (it.second[1] == map[m][1])
				{
					if (it.second[2] > map[m][2])
					{
						result++;
					}
				}
			}
		}
	}

	cout << result;
}