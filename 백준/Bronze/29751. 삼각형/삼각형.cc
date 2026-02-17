#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	float w, h;

	cin >> w >> h;

	cout << fixed << setprecision(1) << w * h / 2;
}