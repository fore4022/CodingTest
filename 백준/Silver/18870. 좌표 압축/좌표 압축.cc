#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

bool comp(int a, int b)
{
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> m;
	map<int, bool> t;
	vector<int> temp, vec;
	int n, o, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		if (!t[o])
		{
			t[o] = true;
			cnt++;

			temp.push_back(o);
		}
		
		vec.push_back(o);
	}

	sort(temp.begin(), temp.end(), comp);

	for (int i = 0; i < cnt; i++)
	{
		m[temp[i]] = i;
	}

	for (int i : vec)
	{
		cout << m[i] << " ";
	}
}