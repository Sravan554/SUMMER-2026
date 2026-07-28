#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph{
  int v;
  list<int> *l;

  public:
  Graph(int v){
    this->v = v;
    l = new list<int>[v];
  }

  void add(int u,int v){
    l[u].push_back(v);
    l[v].push_back(u);
  }

  void print(){
    for(int i = 0 ; i<v;i++){
      cout << i << " : ";
      for(int n : l[i]){
        cout << n << " ";
      }
      cout << endl;
    }
  }

  void bfs(){
    queue <int> q;
    vector<bool> vis(v,false);
    q.push(0);
    vis[0] = true;

    while(q.size() > 0){
      int u = q.front();
      q.pop();
      cout<< u << " ";
      for(int v: l[u]){
        if(!vis[v]){
          vis[v] = true;
          q.push(v);
        }
      }
    }
    cout << endl;
  }

  void dfs(int u, vector<bool> &vis){
    cout << u << " ";
    vis[u] = true;

    for(int v : l[u]){
      if(!vis[v]){
        dfs(v,vis);
      }
    }
  }

  void dfsh(){
    int u = 0;
    vector<bool> vis(5,false);
    dfs(u,vis);
  }

};

int main(){
  Graph g(5);

  g.add(0,1);
  g.add(1,2);
  g.add(1,3);
  g.add(2,3);
  g.add(2,4);

  g.bfs();

  g.dfsh();
  cout<< endl;
  return 0;
}

