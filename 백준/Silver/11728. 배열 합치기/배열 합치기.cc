#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec1, vec2;
    int a, b, n, pointer1 = 0, pointer2 = 0;

    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        cin >> n;

        vec1.push_back(n);
    }

    for (int i = 0; i < b; i++)
    {
        cin >> n;

        vec2.push_back(n);
    }

    for (int i = 0; i < a + b; i++)
    {
        if (pointer1 == a)
        {
            cout << vec2[pointer2] << " ";

            pointer2++;

            continue;
        }

        if (pointer2 == b)
        {
            cout << vec1[pointer1] << " ";

            pointer1++;

            continue;
        }

        if (vec1[pointer1] <= vec2[pointer2])
        {
            cout << vec1[pointer1];

            pointer1++;
        }
        else
        {
            cout << vec2[pointer2];

            pointer2++;
        }

        cout << " ";
    }
}