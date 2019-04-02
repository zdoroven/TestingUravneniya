#include "myfunc.h"
#include <math.h>

name myfunc(double a, double b, double c) {
    name roots;
    double d = b * b - 4 * a * c;
    if (d < 0.0){
        roots.flag = 0;
        return roots;
    }
    if (d == 0.0) {
        roots.flag = 1;
    }
    roots.x1 = (b * (-1) - sqrt(d))/ (2 * a);

    roots.x2 = (b - sqrt(d))/ (2 * a);
    if (a == 0.0 && b == 0.0 && c == 0.0){
        roots.flag = 3;
    } else if (d > 0.0){
        roots.flag = 2;
    }
    if (a == 0.0 ){
        if(b != 0.0 || c != 0.0){
            roots.flag = 1;
        }
    }
    return roots;
