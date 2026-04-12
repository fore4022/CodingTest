#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

vector<int> vec, nums, result, numCnt, temp;
map<vector<int>, bool> mp;
int limitDepth;

void dfs(int node, int depth = 1)
{
    numCnt[node]++;

    result.push_back(node);

    if (depth == limitDepth)
    {
        if (!mp[numCnt])
        {
            for (int i : result)
            {
                cout << nums[i - 1] << " ";
            }

            cout << '\n';
        }
    }
    else
    {
        temp = numCnt;

        for (int i = 1; i <= vec.size() - 1; i++)
        {
            temp[i]++;

            if (!mp[temp])
            {
                dfs(vec[i], depth + 1);

                mp[temp] = true;
            }

            temp[i]--;
        }
    }

    numCnt[node]--;

    result.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, o;

    cin >> n >> m;

    limitDepth = m;

    vec.resize(n + 1, 0);
    numCnt.resize(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> o;

        nums.push_back(o);

        vec[i] = i;
    }

    sort(nums.begin(), nums.end());

    for (int i = 1; i <= n; i++)
    {
        dfs(i);
    }
}