#include <iostream>
#include <vector>
using namespace std;
/*

Complejidad DFS: O(V + E)
O(Nodos + Aristas)

*/

vector<vector<int>> lista;
vector<bool> vis;
void DFS (int nodo_estamos){
    
    vis[nodo_estamos] = true;
    for(int j = 0; j < lista[nodo_estamos].size(); j++){
        
        int nodo_sig = lista[nodo_estamos][j];
        if(!vis[nodo_sig]){ //Si no hemos visitamos el siguiente, lo visitamos
            
            cout << nodo_sig+1 << endl;
            DFS(nodo_sig);
            
        }
        
    }
    
}

int main() {
    
    int N, M; cin>>N>>M;
    
    lista.resize(N);
    vis.resize(N, false);
    
    /*
    6 6
    1 2
    2 4
    4 3
    1 3
    3 5
    3 6
    */
    for(int i = 0; i < N; i++){
        int u, v; cin>>u>>v;
        lista[u-1].push_back(v-1);
        lista[v-1].push_back(u-1);
    }
    
    cout << 0+1 << endl;
    DFS(0);
    /*
        
         
    
    */
    
    
    //cout<<"Hello World";

    return 0;
}