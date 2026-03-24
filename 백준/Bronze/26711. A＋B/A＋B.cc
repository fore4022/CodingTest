#include<iostream>

using namespace std;

int A[100002], B[100002], result[100002];

int main()
{
	string a, b;
	int l_Length, s_Length, temp = 1;
	bool isPrint = false;

	cin >> a >> b;

	l_Length = max(a.length(), b.length());
	s_Length = min(a.length(), b.length());
	
	for (char c : a)
	{
		A[a.length() - temp] = c - '0';
		temp++;
	}

	temp = 1;

	for (char c : b)
	{
		B[b.length() - temp] = c - '0';
		temp++;
	}

	temp = 0;

	for (int i = 0; i < l_Length + 1; i++)
	{
		temp = A[i] + B[i] + temp;
		result[10001 - i] = temp % 10;
		temp /= 10;
	}

	for (int i = 0; i < 10002; i++)
	{
		if (!isPrint && result[i] != 0)
		{
			isPrint = true;
		}

		if (isPrint)
		{
			cout << result[i];
		}
	}
}