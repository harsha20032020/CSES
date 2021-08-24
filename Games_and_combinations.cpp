#include <iostream>
#include <list>
using namespace std;
long int ctr=0;
const int mod = 1e9 + 7;
class Graph {
    int V; 
    list<int>* adj;

    void printAllPathsUtil(int, int, bool[], int[], int&);
 
public:
    Graph(int V); // Constructor
    void addEdge(int u, int v);
    void printAllPaths(int s, int d);
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v); 
}

void Graph::printAllPaths(int s, int d)
{

    bool* visited = new bool[V];

    int* path = new int[V];
    int path_index = 0;

    for (int i = 0; i < V; i++)
        visited[i] = false;

    printAllPathsUtil(s, d, visited, path, path_index);
}

void Graph::printAllPathsUtil(int u, int d, bool visited[],
                              int path[], int& path_index)
{

    visited[u] = true;
    path[path_index] = u;
    path_index++;

    if (u == d) {
        ctr++;

    }
    else 
    {
        list<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
            if (!visited[*i])
                printAllPathsUtil(*i, d, visited, path, path_index);
    }

    path_index--;
    visited[u] = false;
}

int main()
{

    int n,k;
    cin >> n>>k;
    Graph g(n);
    for (int i = 0; i < k; ++i)
    {
        int u,v;
        cin >> u >> v;
        g.addEdge(u-1, v-1);
    } 
    int s = 0, d = n-1;

    g.printAllPaths(s, d);
    cout<<ctr%mod<<endl;
    return 0;
}