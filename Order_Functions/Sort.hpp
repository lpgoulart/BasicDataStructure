//
//  Sort.h
//  Aula-Ordenacao
//
//  Created by Eiji Adachi Medeiros Barbosa on 09/03/17.
//  Copyright © 2017 Eiji Adachi Medeiros Barbosa. All rights reserved.
//

#ifndef Sort_hpp
#define Sort_hpp

void sort(int[], int);

void selectionSort ( int [], int);
void insertionSort ( int [], int );
void bubbleSort ( int [], int );

void mergeSort ( int [], int, int );
void interleave ( int [], int, int, int );

void quickSort ( int [], int, int );
int partition ( int [], int, int );

void quickSortRep ( int [], int, int );
int partitionRep ( int [], int, int );


inline void swap(int& x, int& y)
{
    int aux = x;
    x = y;
    y = aux;
}

#endif /* Sort_hpp */
