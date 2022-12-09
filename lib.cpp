using namespace std;
#include <iostream>
#include "lib.h"
float max(float array[], int dim){
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
