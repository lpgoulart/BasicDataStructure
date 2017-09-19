//
//  Created by Leonardo Goulart
//

#include "Sort.hpp"

void sort( int v[], int size ) {
	insertionSort ( v, size );
}

void insertionSort ( int v[], int size ) {
	int _new;
	int j;
	for ( int i = 1; i < size; i++ ) {
		_new = v[i];
		j = i - 1;
		while ( j >= 0 && _new < v[j] ) {
			v[j+1] = v[j];
			j -= 1;
		}
		v[j+1] = _new;
	}
}