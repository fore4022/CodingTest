#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	unsigned long long cnt = 0;
	int a;

	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		for (int j = i; j <= a; j+= i)
		{
			cnt += i;
		}
	}

	std::cout << cnt;
}