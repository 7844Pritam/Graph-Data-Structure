#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> bfs(int start, vector<int> AdjList[], int vertex)
{
    vector<bool> visited(vertex, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    vector<int> ans;

    while (!q.empty()) 
    {
        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (int j = 0; j < AdjList[node].size(); j++) 
        {
            int adjNode = AdjList[node][j];
            if (!visited[adjNode]) 
            {
                visited[adjNode] = true;
                q.push(adjNode);
            }
        }
    }

    return ans;
}

int main()
{
    int vertex, edges;
    cin >> vertex >> edges;

    vector<int> AdjList[vertex];

    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }

    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < AdjList[i].size(); j++)
        {
            cout << AdjList[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> bfsResult = bfs(1, AdjList, vertex);

    cout << "BFS starting from node 1: ";
    for (int node : bfsResult)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
