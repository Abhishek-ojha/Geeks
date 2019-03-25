#include<bits/stdc++.h>
using namespace std;

class Graph
{
  int V; //Vertices
  list<int> *adj; // pointer to an array of adjacency lists of each vertex
  
  public:
  Graph(int V);
  void addEdge(int v, int w);
  void BFS(int s);
  
  
};

Graph::Graph(int V)
{
  this->V=V;
  adj=new list<int>[V};
}

void Graph::addEdge(int v, int w)
 {
    adj[v].push_back(w);
 }
                    
 void Graph::BFS(int s)
{
  bool *visit=new bool[V];
  int i;
  for(i=0;i<V;i++)
       visit[i]=false;
  visit[s]=true;
  list<int> queue;
  queue.push_back(s);
  while(!queue.empty())
  {
    s=queue.front();
    cout<<s<<" : ";
    for(auto it=adj[s].begin();it!=adj[s].end();it++)
    {
      if(!visit[*it])// if the vertex hasn't been explored yet
      {
        visit[*it]=true;
        queue.push_back(*it);
      }
    }
  }
}
                    
int main()
{
  Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  cout<<" BFS traversal of the graph starting from "<<endl;
  g.BFS(3);
}
