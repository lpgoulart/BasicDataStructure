//
//  Created by Leonardo Goulart
//

#include "Search.hpp"

int Bin_Recursive ( int key, int vector [], int begin, int size ) {
		if ( begin > size ) {
			return NOT_FOUND;
		}

	int index = ( begin + size ) / 2;

		if ( key < vector [ index ] ) {
			return Bin_Recursive ( key, vector, begin, index - 1 );
		}
		else if ( key > vector [ index ] ) {
			return Bin_Recursive ( key, vector, index + 1, size );
		}
		else return index;	
}


int search(int vector[], int size, int key)
{
    Bin_Recursive ( key, vector, 0, size );
}
