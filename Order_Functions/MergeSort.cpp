//
//  Created by Leonardo Goulart
//

#include "Sort.hpp"

void sort ( int v[], int size ) {
    mergeSort ( v, 0, size );

}

void mergeSort ( int v[], int begin, int size ) {
    if ( begin < size ) {
        int half = ( begin + size )/2;
        mergeSort ( v, begin, half );
        mergeSort ( v, half + 1, size );
        interleave ( v, begin, half + 1, size );
    }
}
void interleave ( int v[], int begin, int half, int END ) {
    int end = half - 1;
    int i = begin;
    int j = half;
    int k = 0;
    int aux [END - begin];

    while ( i <= end && j <= END ) {
        if ( v[i] <= v[j] ) {
            aux[k] = v[i];
            i += 1;
        }
        else {
            aux[k] = v[j];
            j += 1;
        } 
        k += 1;
    }
    while ( i <= end ) {
        aux[k] = v[i];
        i += 1;
        k += 1;
    }

    while ( j <= END ) {
        aux[k] = v[j];
        j += 1;
        k += 1;
    }

    for ( i = begin, j = 0; i <= END; i++, j++ ) {
        v[i] = aux[j]; 
    }
}