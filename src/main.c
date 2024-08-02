#include "location.h"
#include "node.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(){
    location start = {00,5,0};
    location end   = {10,0,0};
    location loca  = {0,10,0};
    location locb  = {5,5,0};

    node a = {loca,0};
    node b = {locb,0};

    a = set_node_weight(a, start, end);
    b = set_node_weight(b, start, end);

    printf("a:%d - b:%d\n", a.weight,b.weight);


    //printf("Hello\n");

    return 0;
}
