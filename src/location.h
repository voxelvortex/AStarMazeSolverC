#include <stdbool.h>

typedef struct{
    int row;
    int col;
    bool wall;
} location;

bool location_are_equal(location a, location b);
