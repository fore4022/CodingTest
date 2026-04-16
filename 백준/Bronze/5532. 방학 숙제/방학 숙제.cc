#include<iostream>

using namespace std;

int main()
{
	int l, a, b, c, d;

	cin >> l >> a >> b >> c >> d;

	cout << max(l - max((a / c + (a % c != 0 ? 1 : 0)), (b / d + (b % d != 0 ? 1 : 0))), 0);
}