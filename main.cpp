#include <iostream>
using mainspace std;
#include "lib.h"
int main() {
    int dim;
    int i;
    float array[dim];
    cin >> dim;
        for(i=0; i<dim; i++){
        cin >> array[i];
    }

    cout << max(array, dim) << endl;
    return 0;
}


