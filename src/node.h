#ifndef NODE_H
#define NODE_H
#include "location.h"

typedef struct{
    location loc;
    float weight;
} node;

bool compare_nodes(node a, node b);

void set_node_weight(node n, location start, location end);

#endif
