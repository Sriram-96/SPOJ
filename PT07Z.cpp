// C++ program to print DFS traversal from 
// a given vertex in a  given graph 
#include<iostream> 
#include<list> 
using namespace std; 
  
// Graph class represents a directed graph 
// using adjacency list representation 
class Graph 
{ 
    int V;    // No. of vertices 
  
    // Pointer to an array containing 
    // adjacency lists 
    list<int> *adj; 
  
    // A recursive function used by DFS 
    int DFSUtil(int v, bool visited[]); 
public: 
    Graph(int V);   // Constructor 
  
    // function to add an edge to graph 
    void addEdge(int v, int w); 
  
    // DFS traversal of the vertices 
    // reachable from v 
    int DFS(int v); 
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); // Add w to v’s list. 
} 
  
int Graph::DFSUtil(int v, bool visited[]) 
{ 
    // Mark the current node as visited and 
    // print it 
    visited[v] = true; 
//    cout << 1+v << " "; 
  
    // Recur for all the vertices adjacent 
    // to this vertex 
    list<int>::iterator i; 
    int max=0,temp;
    for (i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (!visited[*i]) 
        {
        	temp=DFSUtil(*i, visited);
        	if(temp>max)
        		max=temp;
		}
    if(i==adj[v].begin())
    	return 1;
    return max+1;
} 
  
// DFS traversal of the vertices reachable from v. 
// It uses recursive DFSUtil() 
int Graph::DFS(int v) 
{ 
    // Mark all the vertices as not visited 
    bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 
  
    // Call the recursive helper function 
    // to print DFS traversal 
//    DFSUtil(v, visited); 
	return DFSUtil(v, visited); 
} 
  
int main() 
{ 
	int n,i,x,y,max=0,temp;
	cin>>n;
    // Create a graph given in the above diagram 
    Graph g(n); 
    for(i=0;i<n-1;i++)
    {
    	cin>>x>>y;
    	g.addEdge(x-1,y-1);
    	g.addEdge(y-1,x-1);
	}
	for(i=0;i<n;i++)
	{
		temp=g.DFS(i);
//		cout<<i<<"-"<<temp<<endl;
		if(temp>max)
			max=temp;
	}
    cout<<max-1;
//	g.DFS(1);
    return 0; 
} 
