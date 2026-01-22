#include<iostream>

using namespace std;

int main()
{
	int a, b, v, temp, result;

	cin >> a >> b >> v;

	temp = v - a;

	result = temp / (a - b);
	result += (temp % (a - b) != 0 ? 1 : 0);
	result++;

	cout << result;
}