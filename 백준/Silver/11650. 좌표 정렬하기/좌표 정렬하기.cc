#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Point
{
	int x, y;

	Point(int X, int Y) : x(X), y(Y) {}
};

int comp(Point point1, Point point2)
{
	if (point1.x != point2.x)
	{
		return point1.x < point2.x;
	}

	return point1.y < point2.y;
}

int main()
{
	vector<Point> points;
	int n, x, y;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		points.push_back(Point(x, y));
	}

	sort(points.begin(), points.end(), comp);

	for (Point point : points)
	{
		cout << point.x << " " << point.y << '\n';
	}
}