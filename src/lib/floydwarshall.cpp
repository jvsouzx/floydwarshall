#include"floydwarshall.hpp"

void floydWarshall(int graph[][numV]){
    int matrix[numV][numV], i, j, k;

    for( i= 0; i < numV; i++)
        for(j = 0; j < numV; j++)
            matrix[i][j] = graph[i][j];
    
    for (k = 0; k < numV; k++) {
        for (i = 0; i < numV; i++) {
            for (j = 0; j < numV; j++) {
                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }
    printMatrix(matrix);
}

int recursiveFloydWarshall(int i, int j, int k, int matrix[][numV]){
    if (k < 0){
        return matrix[i][j];
    } else {
        return min(recursiveFloydWarshall(i, j, k - 1, matrix), recursiveFloydWarshall(i, k, k - 1, matrix) + recursiveFloydWarshall(k, j, k - 1, matrix));
    }
}

void solveRFW(int graph[][numV]){
    int i, j, matrix[numV][numV];

    for( i= 0; i < numV; i++)
        for(j = 0; j < numV; j++)
            matrix[i][j] = 0;

    for(i = 0; i < numV; i++){
        for(j = 0; j < numV; j++){
            matrix[i][j] = recursiveFloydWarshall(i, j, numV - 1, graph);
        }
    }
    printMatrix(matrix);      
}

void printMatrix(int matrix[][numV]) {
    for (int i = 0; i < numV; i++) {
        for (int j = 0; j < numV; j++) {
            if (matrix[i][j] == INF)
                printf("%4s", "INF");
            else
                printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

