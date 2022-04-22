
//Problema: https://codeforces.com/problemset/problem/1020/B
/**/

#include <bits/stdc++.h>
using namespace std;

vector < vector<int> > lista;
vector <bool> vis;

int dfs(int nodo){
    
    vis[nodo] = true;
    int res;
    for(int i = 0; i < lista[nodo].size(); i++){
        
        int nodo_a_visitar = lista[nodo][i];
        if(!vis[nodo_a_visitar]){
            
            res = dfs(nodo_a_visitar);
            
        } else {
            
            return nodo_a_visitar;
            
        }
        
    }
    
    return res;
    
}

int main() {
    
    int n; cin>>n;
    
    lista.resize(n);
    vis.resize(n);
    
    for(int i = 0; i < n; i++){
        
        int u, v; u = i;
        cin>>v;
        
        lista[u].push_back(v-1);
        
    }
    
    /*
    cout << "Impresion del grafo: " << n << endl;
    for(int i = 0; i < n; i++){
        
        //cout << "Entra al for" << endl;
        cout << i+1 << ": ";
        
        for(int j = 0; j < lista[i].size(); j++){
            cout << lista[i][j]+1 << " ";
        }
        cout << endl;
    }
    */
    
    for(int i = 0; i < n; i++){
        vis.assign(n, false);
        cout << dfs(i)+1 << " ";
    }
    

    return 0;
}



/*
El visto en clase


//Problema: https://codeforces.com/contest/1020/problem/B

#include <bits/stdc++.h>
using namespace std;

vector < vector<int> > lista;
vector <bool> vis;

int DFS (int nodo_a_procesar){
    
    vis[nodo_a_procesar] = true;
    int res;
    for(int i = 0; i < lista[nodo_a_procesar].size(); i++){
        
        int nodo_siguiente = lista[nodo_a_procesar][i];
        if(!vis[nodo_siguiente]){ //Si no esta visitado, lo visito
            
            return DFS(nodo_siguiente);
            
        } else { // Si esta visitado, quiere decir que ya encontre a quien me voy a torcer xD
            res = nodo_siguiente;
        }
    }
    
    return res;
}

int main() {
    
    int N; cin>>N;
    lista.resize(N);
    vis.resize(N, false);
    
    for(int i = 0; i < N; i++){
        int u, v;
        u = i;
        cin>>v;
        lista[u].push_back(v-1); 
        // u = i;
        // v;
        //Nada mas me estan dando el v :O
    }
    
    //cout << "Impresion del grafo" << endl;
    //for(int i = 0; i < N; i++){
    //    cout << i+1 << ": ";
    //    for(int j = 0; j < lista[i].size(); j++){
    //        cout << lista[i][j]+1 << " ";
    //    }
    //    cout << endl;
    //}
    
    
    for(int a = 0; a < N; a++){
        cout << DFS(a)+1 << " ";
        vis.assign(N, false);
    }
    
    
    return 0;
}


*/