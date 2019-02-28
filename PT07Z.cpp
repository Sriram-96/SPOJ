#include<iostream> 
#include <list> 
using namespace std; 
class Graph 
{ 
    int V; 
    list<int> *adj;    
public: 
    Graph(int V);
    void addEdge(int v, int w);  
    int BFS1(int s);   
    int BFS2(int s);   
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
} 
  
int Graph::BFS1(int s) 
{ 
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
    list<int> queue; 
    visited[s] = true; 
    queue.push_back(s); 
    list<int>::iterator i; 
    while(!queue.empty()) 
    { 
        s = queue.front(); 
//        cout << s << " "; 
        queue.pop_front(); 
        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    } 
    return s;
} 

int Graph::BFS2(int s) 
{ 
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
    list<int> queue,queue_distance; 
    visited[s] = true; 
    queue.push_back(s); 
    queue_distance.push_back(0);
    list<int>::iterator i; 
    int dist;
    while(!queue.empty()) 
    { 
        s = queue.front(); 
        dist = queue_distance.front();
//        cout << s << " "; 
        queue.pop_front(); 
        queue_distance.pop_front();
        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
                queue_distance.push_back(dist+1);
            } 
        } 
    }
	return dist; 
}
  
int main() 
{ 
	int n,i,x,y,max=0,temp;
	cin>>n;
    Graph g(n); 
    for(i=0;i<n-1;i++)
    {
    	cin>>x>>y;
    	g.addEdge(x-1,y-1);
    	g.addEdge(y-1,x-1);
	}
//	for(i=0;i<n;i++)
//	{
//		temp=g.BFS(i);
////		cout<<i<<"-"<<temp<<endl;
//		if(temp>max)
//			max=temp;
//	}
//    cout<<max-1;
	int last_node=g.BFS1(0);
	cout<<g.BFS2(last_node);
    return 0; 
} 
