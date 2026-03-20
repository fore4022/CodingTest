#include<iostream>
#include<vector>
#include<utility>

using namespace std;

bool Overlap(int point1A, int point1B, int point2A, int point2B)
{
	if (point1A > point1B)
	{
		swap(point1A, point1B); // 항상 작은 값에서 큰 값이 되도록 해준다.(point1A = -1, point1B = 0)으로 입력될 수도 있지만 (point1A = 0, point1B = -1)로 입력될 수 있다.
	}

	if (point2A > point2B)
	{
		swap(point2A, point2B);
	}

	return max(point1A, point2A) <= min(point1B, point2B);
}

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
		if ((CCW(points[0], points[1], points[2]) * CCW(points[0], points[1], points[3])) == 0 && (CCW(points[3], points[2], points[0]) * CCW(points[3], points[2], points[1])) == 0)
		{
			if (Overlap(points[0].first, points[1].first, points[2].first, points[3].first) && Overlap(points[0].second, points[1].second, points[2].second, points[3].second))
			{
				cout << "1";
			}
			else
			{
				cout << "0";
			}
		}
		else
		{
			cout << "1";
		}
	}
	else
	{
		cout << "0";
	}
}