#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector< vector<int> > lista;
vector<bool> vis;

void BFS (int nodo_inicio){
    
    queue <int> nodos_a_encolar;
    nodos_a_encolar.push(nodo_inicio);
    vis[nodo_inicio] = true;
    
    while(!nodos_a_encolar.empty()){ //Mientras la cola no este vacia
        
        int nodo_a_procesar = nodos_a_encolar.front();
        nodos_a_encolar.pop();
        
        cout << "f: " << nodo_a_procesar+1 << ": ";
        
        for(int i = 0; i < lista[nodo_a_procesar].size(); i++){
            
            int nodo = lista[nodo_a_procesar][i];
            
            if(!vis[nodo]){ //Si el nodo no esta visitado, lo visitamos
                
                cout << nodo+1 << " ";
                vis[nodo] = true;
                nodos_a_encolar.push(nodo);
            
                
            }
        }
        cout << endl;
        
    }
    
}

int main() {
    
    int nodos, aristas;
    
    /*
    
6 6
1 2
2 4
4 3
3 5
3 6
1 3

11 10
1 2
1 5
1 4
1 3
2 6
3 11
4 9
4 10
6 7 
6 8
    */
    
    
    cin>>nodos>>aristas;
    
    lista.resize(nodos);
    vis.resize(nodos, false);
    
    //cout << nodos << " " << aristas << endl;
    
    for(int i = 0; i < aristas; i++){
        
        int u, v; cin>>u>>v;
        lista[u-1].push_back(v-1);
        lista[v-1].push_back(u-1);
    }
    
    BFS(0);
    
    return 0;
}