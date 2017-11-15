#include<stdio.h>
#include<stdlib.h>
#include "main.h"

int main() {

    int i, n, output[100];
    Graph g = createGraph();

    addEdge(g, 0, 1);
    addEdge(g, 0, 2);
    addEdge(g, 1, 2);
    addEdge(g, 1, 3);

    n = getAdjacentVertices (g, 1, output);
    if (n==0) printf("No adjacent vertices of node 1\n");
    else {   
       printf("Adjacent vertices of node 1:");
       for (i=0; i<n; i++) printf("%5d", output[i]);
    }

    printf("\n");

    // free(g.matrix);
    dropGraph(g);

    return 0;
}