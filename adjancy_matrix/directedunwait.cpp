#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // directed unwaited graph
    int vertices, edges;

    cout << "Enter number of vertices: ";
    cin >> vertices;
    cout << "Enter number of edges: ";
    cin >> edges;

    vector<vector<bool>> adjMatrix(vertices, vector<bool>(vertices, 0));

    cout << "Enter the edges (u v) where 0 <= u, v < " << vertices << " :" << endl;
    for (int i = 0; i < edges; ++i)
    {
        int u, v;
        cin >> u >> v;

        adjMatrix[u][v] = 1;
    }

    cout << "\nAdjacency Matrix:" << endl;
    for (int i = 0; i < vertices; ++i)
    {
        for (int j = 0; j < vertices; ++j)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
