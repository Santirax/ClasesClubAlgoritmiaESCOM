#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    
    /*
    
    Lista de inicializacion.
    https://en.cppreference.com/w/cpp/language/constructor
    
    int a {10000};
    
    cout << a << endl;
    return 0;
    */
    
    //Ejercicio. Grafo 1.
    
    /*
    
Input:
    N A
    7 8
    2 0
    0 1
    5 0
    1 4
    5 6
    6 4
    3 6
    0 6

Output:
    Imprimir el grafo
    
    */
    
    int N, M; cin>>N>>M;
    
    //Matriz de adyacencia
    /*
    int matrizAdy[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            matrizAdy[i][j] = 0;
        }
    }
    
    for(int i = 0; i < M; i++){
        int u, v; cin>>u>>v;
        matrizAdy[u][v] = 1;
        matrizAdy[v][u] = 1;
    }
    
    cout << "  ";
    for (int i = 0; i < N; i++) cout << i << " ";
    cout << endl;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(j == 0){
                cout << i << " ";
            }
            cout << matrizAdy[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
    return 0; */
    
    
    
    //Lista de adyacencia
    /*
    vector < vector<int> > listaAdy (N);
    // vector <int> lista [N];
    
    //Lectura
    for(int i = 0; i < M; i++){
        int u, v; cin>>u>>v;
        listaAdy[u].push_back(v);
        listaAdy[v].push_back(u);
    }
    
    //Impresion
    for(int i = 0; i < N; i++){
        cout << i << ": ";
        for(int j = 0; j < listaAdy[i].size(); j++){
            
            cout << listaAdy[i][j] << " ";
        }
        
        cout << endl;
    }
    */
    
    
    //Lista de aristas
    
    //Lectura
    vector < pair<int, int> > listaAristas;
    for(int i = 0; i < M; i++){
        int u, v; cin>>u>>v;
        listaAristas.push_back({u, v});
        listaAristas.push_back({v, u});
    }
    
    //Impresion
    for(int i = 0; i < listaAristas.size(); i++){
        cout << listaAristas[i].first << " " << listaAristas[i].second << endl;
    }
    
    return 0;
}
