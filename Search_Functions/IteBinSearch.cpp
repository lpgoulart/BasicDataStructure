//
//  Created by Leonardo Goulart
//

#include "Search.hpp"

int search(int vector[], int size, int key)
{
	int begin = 0;
	int end = size - 1;
	int index;
	while ( begin <= end ) {
		index = ( begin + end ) / 2;

		if ( key < vector [ index ] ) {
			end = index - 1;
		}
		else if ( key > vector [ index ] ) {
			begin = index + 1;
		}
		else return index;
	}    
	return NOT_FOUND;
}
