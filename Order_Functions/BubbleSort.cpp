//
//  Created by Leonardo Goulart
//

#include "Sort.hpp"

void sort( int v[], int size ) {
	bubbleSort ( v, size );
}

void bubbleSort ( int v[], int size ) {
	for ( int i = 0; i < size; i ++ ) {
		for ( int j = i; j < size; j++ ) {
			if ( v[i] > v[j] ) {
				swap ( v[i], v[j] );
			}
		}
	}
}