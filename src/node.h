#include "location.c"
#include "utils.c"

typedef struct{
    location loc;
    float weight;
} node;

bool compare_nodes(node a, node b){
    return a.weight - b.weight;
}

void set_node_weight(node n, location start, location end){
    int deltaEnd = abs( n.loc.row - end.row ) + abs( n.loc.col - end.col );
    int deltaStart = abs( n.loc.row - start.row ) + abs( n.loc.col - start.col );
    n.weight = deltaEnd + deltaStart;
}

