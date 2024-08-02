#include "location.h"

bool location_are_equal(location a, location b){
    return (a.row == b.row) && (a.col == b.col);
}
