/****************************************************************************/
//
//  main.cpp
//  Project: heap Sort
//
//  Created by GianLuka23 on 18/10/2019.
//  Copyright © 2019 MacBook. All rights reserved.
//  insert here description and complexity analysis of heap sort algorithm
//
/****************************************************************************/
/// @file    main.cpp
/// @author  Gianluca Marano
/// @date    20.10.2019
///
// C++ main.cpp implementation
/****************************************************************************/


#include "../include/Heap.hpp"


void Heap::heapify(std::vector<int>& input, int dim, int index)
{
   // Find largest among root, left child and right child
   int largest = index;
   int left = 2*index + 1;
   int right = 2*index + 2;
   if (left < dim && input.at(left) > input.at(largest))
     largest = left;
   if (right < dim && input.at(right) > input.at(largest))
     largest = right;
   // Swap and continue heapifying if root is not largest
   if (largest != index)
   {
     std::swap(input.at(index), input.at(largest));
     heapify(input, dim, largest);
   }
}

void Heap::buildMaxHeap(std::vector<int>& input){
    // Build max heap
    int dim = static_cast<int>(input.size());
    for (int index = dim / 2 - 1; index >= 0; index--)
      heapify(input, dim, index);
}


// main function to do heap sort
void Heap::heapSort(std::vector<int>& input)
{
    int dim = static_cast<int>(input.size());
    buildMaxHeap(input);
   // Heap sort
   for (int index=dim-1; index>=0; index--)
   {
     std::swap(input.at(0), input.at(index));
     // Heapify root element to get highest element at root again
     heapify(input, index, 0);
   }
}


void Heap::print(std::vector<int>& input)
{
    auto print = [](int& elem) { std::cout<<elem<<" "; };

    std::for_each(input.begin(), input.end(), print);
    int *ptr = 0;
    *ptr = 7;
    std::cout<<std::endl;
}
