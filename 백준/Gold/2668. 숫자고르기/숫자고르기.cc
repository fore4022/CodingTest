#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>

using namespace std;

vector<multiset<int>> graph;
set<int> nodes;
vector<bool> visited;
int cnt1, cnt2;

void dfs(int node)
{
    visited[node] = true;
    cnt1 += node;

    nodes.insert(node);

    for (int next : graph[node])
    {
        cnt2 += next;

        if (!visited[next])
        {
            dfs(next);
        }
    }
}

int main()
{
    map<int, bool> map;
    set<int> result;
    vector<int> inserted;
    int n, o, max = 0;
    bool isCompare = true;

    cin >> n;

    graph.resize(n + 1);
    visited.resize(n + 1, 0);
    inserted.resize(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> o;

        inserted[o]++;

        if (i == o)
        {
            result.insert(o);
            map[i] = true;
        }
        else
        {
            map[i] = false;
        }

        graph[i].insert(o);
    }

    for (int i = 1; i <= n; i++)
    {
        if (inserted[i] == 0)
        {
            isCompare = false;

            break;
        }
    }

    if (isCompare)
    {
        cout << map.size() << '\n';

        for (auto it : map)
        {
            cout << it.first << '\n';
        }

        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!map[i])
        {
            cnt1 = cnt2 = 0;
            nodes = set<int>();
            visited = vector<bool>();

            visited.resize(n + 1, 0);

            dfs(i);

            if (cnt1 == cnt2)
            {
                max = cnt2;

                for (int j : nodes)
                {
                    result.insert(j);
                }
            }
        }
    }

    cout << result.size() << '\n';

    for (int i : result)
    {
        cout << i << '\n';
    }
}