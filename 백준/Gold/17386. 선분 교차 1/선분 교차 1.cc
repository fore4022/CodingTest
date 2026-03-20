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

	if ((CCW(points[0], points[1], points[2]) * CCW(points[0], points[1], points[3])) <= 0 && (CCW(points[3], points[2], points[0]) * CCW(points[3], points[2], points[1])) <= 0) // 이건 주어진 방향의 두 직선이 서로를 교차하는지 확인하는 거지, 선분의 교차를 확인하는거 X + 실제로 교차하지 않을 수 있음.
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
}