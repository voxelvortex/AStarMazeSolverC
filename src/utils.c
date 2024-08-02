#include "utils.h"

int abs(int i){
    int bits = sizeof(i)*8;
    return (i ^ (i >> (bits-1))) - (i >> (bits-1));
}
