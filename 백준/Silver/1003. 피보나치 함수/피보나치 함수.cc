#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int arr1[41] = {1, 0};
int arr2[41] = {0, 1};

int main()
{
    vector<pair<int, int>> results;
	int t, n;

    cin >> t;

    for (int i = 2; i <= 40; i++)
    {
        if (i - 1 != 1)
        {
            arr1[i] += arr1[i - 1];
        }

        if (i - 2 != 1)
        {
            arr1[i] += arr1[i - 2];
        }
    }

    for (int i = 2; i <= 40; i++)
    {
        if (i - 1 != 0)
        {
            arr2[i] += arr2[i - 1];
        }

        if (i - 2 != 0)
        {
            arr2[i] += arr2[i - 2];
        }
    }

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        results.push_back({ arr1[n], arr2[n]});
    }

    for (pair<int, int> r : results)
    {
        cout << r.first << " " << r.second << '\n';
    }
}