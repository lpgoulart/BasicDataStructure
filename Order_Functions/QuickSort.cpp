//
//  Created by Leonardo Goulart
//

#include "Sort.hpp"

void sort ( int v[], int size ) {
	quickSort ( v, 0, size );
}

void quickSort ( int v[], int begin, int end ) {
	if ( begin < end ) {
		int index = partition ( v, begin, end );
		quickSort ( v, begin, index - 1 );
		quickSort ( v, index + 1, end );
	}
}
int partition ( int v[], int begin, int end ) {
	int index = v[end];
	int i = begin;
	int j = end - 1;

	while ( j >= i ) {
		while ( v[i] < index && j >= i ) {
			i += 1;
		}
		while ( v[j] > index && j >= i ) {
			j -= 1;
		}
		if ( j >= i ) {
			swap ( v[i], v[j] );
		}
	}
	swap ( v[i], v[end] );
	return i;
}