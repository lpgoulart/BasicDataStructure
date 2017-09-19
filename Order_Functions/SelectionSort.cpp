//
//  Created by Leonardo Goulart
//

#include "Sort.hpp"

void sort ( int v[], int size ){
	selectionSort ( v, size );
}

void selectionSort ( int v[], int size ) {
	int minor;
	for ( int i = 0; i < size; i++ ) {
		minor = i;
		for ( int j = i + 1; j < size; j++ ){
			if ( v[ j ] < v[ minor ] ) {
				minor = j;
			}
		}
		if ( i != minor ){
			swap ( v[ i ], v[ minor ] );
		}
	} 
}