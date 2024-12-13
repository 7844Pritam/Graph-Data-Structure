//  #include <iostream>
// #include <vector>
// #include <queue>
// #include <unordered_map>

// using namespace std;

// // class Graph {
// // public:
// //     unordered_map<int, vector<int>> adjList; 

// //     void addEdge(int u, int v) {
// //         adjList[u].push_back(v);
// //         adjList[v].push_back(u);
// //     }

//     void bfs(int start) {
//         unordered_map<int, bool> visited;
//         queue<int> q; 

//         visited[start] = true;
//         q.push(start);

//         while (!q.empty()) {
//             int node = q.front();
//             q.pop();

//             cout << node << " ";

//             for (int neighbor : adjList[node]) {
//                 if (!visited[neighbor]) {
//                     visited[neighbor] = true;
//                     q.push(neighbor);
//                 }
//             }
//         }
//         cout << endl;
//     }
// // };





// int main() {
//     Graph g;
    
//     g.addEdge(1, 2);
//     g.addEdge(1, 3);
//     g.addEdge(2, 4);
//     g.addEdge(2, 5);
//     g.addEdge(3, 6);

//     cout << "BFS traversal starting from node 1: ";
//     g.bfs(1);  // Perform BFS starting from node 1

//     return 0;
// }
