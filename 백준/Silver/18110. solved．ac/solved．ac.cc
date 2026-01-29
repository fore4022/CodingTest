#include<iostream>
#include<cmath>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
	deque<int> deque;
	double n, trimCount, cnt = 0;
	int temp;

	cin >> n;

	if (n == 0)
	{
		cout << "0";

		return 0;
	}

	trimCount = round(n * 0.15);

	for (int i = 0; i < n; i++)
	{
		cin >> temp;

		deque.push_back(temp);
	}

	sort(deque.begin(), deque.end());

	for (int i = 0; i < trimCount; i++)
	{
		deque.pop_front();
		deque.pop_back();
	}

	while (deque.size() != 0)
	{
		cnt += deque.front();

		deque.pop_front();
	}

	cout << round(cnt / (n - trimCount * 2));
}