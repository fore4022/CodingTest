#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

vector<int> vec, nums, mixture, result, temp;
map<vector<int>, bool> mp;
int limitDepth;

void dfs(int node, int depth = 1)
{
    mixture.push_back(nums[node - 1]);
    result.push_back(node);

    if (depth == limitDepth)
    {
        if (!mp[mixture])
        {
            for (int i : result)
            {
                cout << nums[i - 1] << " ";
            }

            cout << '\n';

            mp[mixture] = true;
        }
    }
    else
    {
        temp = mixture;

        for (int i = 1; i <= vec.size() - 1; i++)
        {
            temp.push_back(nums[i - 1]);

            if(!mp[temp])
            {
                dfs(vec[i], depth + 1);

                mp[temp] = true;
            }

            temp.pop_back();
        }
    }

    mixture.pop_back();
    result.pop_back();
}

int main()
{
    set<int> s;
    int n, m, o;

    cin >> n >> m;

    limitDepth = m;

    vec.resize(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> o;

        vec[i] = i;

        s.insert(o);
        nums.push_back(o);
    }

    sort(nums.begin(), nums.end());

    for (int i = 1; i <= n; i++)
    {
        dfs(i);
    }
}