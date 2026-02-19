//#include<iostream>
//#include<map>
//#include<queue>
//
//using namespace std;
//
//int main()
//{
//	queue<int> queue;
//	map<int, int> objects;
//	int n, k, w, v, result = -1, temp = 0;
//
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> w >> v;
//
//		if (w <= k)
//		{
//			objects.insert({ w, v });
//		}
//	}
//
//	for (auto it : objects)
//	{
//		if (temp + it.first < temp)
//		{
//
//		}
//	}
//}

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<bool> results;
	int a, b, c;

	while (cin >> a)
	{
		if (a == 0)
		{
			break;
		}

		cin >> b >> c;

		a *= 2;

		results.push_back(a * a >= b * b + c * c);
	}

	for (int i = 0; i < results.size(); i++)
	{
		cout << "Pizza " << i + 1;

		if (results[i])
		{
			cout << " fits on the table.";
		}
		else
		{
			cout << " does not fit on the table.";
		}

		cout << '\n';
	}
}