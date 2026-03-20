#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int CCW(pair<long long, long long> point1, pair<long long, long long> point2, pair<long long, long long> point3) // Counter Clock Wise
{
	int result;

	if ((point2.first - point1.first) * (point3.second - point1.second) - (point2.second - point1.second) * (point3.first - point1.first) > 0)
	{
		return 1;
	}
	else if ((point2.first - point1.first) * (point3.second - point1.second) - (point2.second - point1.second) * (point3.first - point1.first) < 0)
	{
		return -1;
	}

	return 0;
}

int main()
{
	vector<pair<long long, long long>> points;
	int x, y;

	for (int i = 0; i < 4; i++)
	{
		cin >> x >> y;

		points.push_back({ x, y });
	}

	cout << CCW(points[0], points[1], points[2]);
}