//
//  Created by Leonardo Goulart
//

#include "Sort.hpp"

void sort ( int v[], int size ) {
	quickSortRep ( v, 0, size );
}

void quickSortRep ( int v[], int begin, int size ) {
	if ( begin < size ) {
		int index = partitionRep ( v, begin, size );
		quickSortRep ( v, begin, index - 1 );
		quickSortRep ( v, index + 1, size );
	}
}

int partitionRep ( int v[], int left, int right ) {

	int pivo = v[right];
	int i = left;
	int k = right - 1;
	int j = right;

	while ( k >= i ) {
		if ( v[k] < pivo ) {
			swap ( v[i], v[k] );
			i++;
		}
		else if ( v[k] > pivo ) {
			swap ( v[j], v[k] );
			j --;
			k --;
		}
		else {
			k --;
		}
	}
	return i;
}