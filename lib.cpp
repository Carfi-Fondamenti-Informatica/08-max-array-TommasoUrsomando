#include "lib.h"
float max(float array[], int dim){
    float n;
    int i=0;
    while (i< dim){

        if(array[0]>=array[i]){
            i++;
        }
        else {
            array[0] = array[i];
            i++;
        }
    }
