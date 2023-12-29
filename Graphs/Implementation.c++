#include<bits/stdc++.h>
using namespace std;


template<typename T> // for genric graph

class Graph{
     public:
      map<T,list<T>>adjlist;
     //map<T,list<pair<T,T>>>adjlist;

     void addEdge(T u,T v,T direction)
     {
          //0-directed graph
          //1-undirected graph


          // for u->v 
        //  adjlist[u].push_back(make_pair(v,weight));
          adjlist[u].push_back(v);

           
          if (direction==0)
          {
         // adjlist[u].push_back(make_pair(v,weight));
             
               adjlist[v].push_back(u);
          }
     }

void printAdj(){
     for (auto i:adjlist){
          cout<<i.first<<"->";
          for (auto j: i.second)
          {
               cout<<j<<" "; 
          }cout<<'\n';
     }
}

};


int main(){


Graph <int>g;


g.addEdge(0,1,0);
g.addEdge(1,2,0);
g.addEdge(1,3,0);
g.addEdge(2,3,0);
g.addEdge(3,4,0);
g.addEdge(2,4,0);

cout<<"Printing the adj list"<<'\n';
g.printAdj();


	return 0;

}