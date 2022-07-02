#include"floydwarshall.hpp"

int main() {
    int graph[numV][numV] = {{  0, -2,INF,INF},
                             {INF,  0,INF,  2},
                             {  4,  7,  0,INF},
                             {INF,INF, -2,  0}};

    cout << "Floyd-Warshall Iterativo: " << endl;
    cout << endl;
    floydWarshall(graph);
    cout << endl;
    cout << "Floyd-Warshall Recursivo: " << endl;
    cout << endl;
    solveRFW(graph);
    cout << endl;
}