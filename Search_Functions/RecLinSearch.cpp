//
//  Created by Leonardo Goulart
//

#include "Search.hpp"

int Seq_Recursive ( int key, int vector [], int size, int index ) {
	if ( size < index ) {
		return NOT_FOUND;
	}
	if ( key == vector [index] ) {
		return index;
	}
	else {
		return Seq_Recursive ( key, vector, size, index + 1 );
	}
}

int search(int vector[], int size, int key)
{
	Seq_Recursive ( key, vector, size, 0 );
}