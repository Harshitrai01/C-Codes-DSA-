#include<bits/stdc++.h>
using namespace std;

// Array of Vectors - Vector will be stored as each element of array.
void addEdge(vector<int> adj[],int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);

}

void printGraph(vector<int> adj[], int V){
    for(int i=0;i<V;i++){
        cout<<i<<" ";
        for(auto x:adj[i]){  // Each element of array is a vector.
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int V=4;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);

    printGraph(adj,V);
    return 0;

}