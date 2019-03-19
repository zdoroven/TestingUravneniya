#include <stdio.h>
#include "myfunc.h"

int main()
{
    double a = 0.0, b = 0.0, c = 0.0;
    name otvet;

    otvet = myfunc(a, b, c);
    if (otvet.flag == 0){
        printf("Корней нет\n");
    }
    if (otvet.flag == 1){
        printf("Один корень: %lf\n", otvet.x1);
    }
    if (otvet.flag == 2){
        printf("Первый корень: %lf\nВторой корень: %lf\n", otvet.x1, otvet.x2);
    }
    if (otvet.flag == 3) {
        printf("Корней бесконечно много\n");
    }
    return 0;
}
