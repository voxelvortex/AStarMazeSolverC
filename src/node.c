#include "node.h"
#include <stdio.h>
#include <stdlib.h>

bool compare_nodes(node a, node b){
    return a.weight > b.weight;
}

node set_node_weight(node n, location start, location end){
    int start_delta = abs( n.loc.row - start.row ) + abs( n.loc.col - start.col );
    int end_delta = abs( n.loc.row - end.row ) + abs( n.loc.col - end.col );

    n.weight = end_delta + start_delta;
    return n;
}

