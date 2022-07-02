#ifndef FLOYDWARSHALL_HPP
#define FLOYDWARSHALL_HPP

#include<iostream>
using namespace std;

#define numV 4
#define INF 99999

void printMatrix(int matrix[][numV]);
void floydWarshall(int graph[][numV]);
int recursiveFloydWarshall(int i, int j, int k, int matrix[][numV]);
void solveRFW(int graph[][numV]);

#endif