#ifndef NODE_H
#define NODE_H
#include "location.h"

typedef struct{
    location loc;
    int weight;
} node;

typedef struct nodelist {
    int value;
    struct nodelist* next;
} nodelist;


bool compare_nodes(node a, node b);
node set_node_weight(node n, location start, location end);
nodelist* insert_before(nodelist* nl, node n);
nodelist* insert_after(nodelist* nl, node n);

#endif
