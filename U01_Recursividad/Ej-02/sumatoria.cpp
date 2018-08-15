#include "sumatoria.h"


int sumatoria(int *arr, unsigned int size) {
    int r=0;
    if (size==0)
        return arr[0];
    return  r = arr[size] + sumatoria(arr,size-1);


    return 0;
}