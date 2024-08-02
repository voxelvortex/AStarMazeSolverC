#ifndef LOCATION_H
#define LOCATION_H

#include <stdbool.h>

typedef struct{
    int row;
    int col;
    bool wall;
} location;

bool location_are_equal(location a, location b);

#endif
