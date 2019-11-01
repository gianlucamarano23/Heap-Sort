//
//  Heap.cpp
//  Heap-Sort
//
//  Created by GianLuka23 on 28/10/2019.
//  Copyright © 2019 MacBook. All rights reserved.
//

#include "Heap.hpp"


void Heap::heapify(std::vector<int>& input, int n, int index)
{
   // Find largest among root, left child and right child
   int largest = index;
   int left = 2*index + 1;
   int right = 2*index + 2;
   if (left < n && input.at(left) > input.at(largest))
     largest = left;
   if (right < n && input.at(right) > input.at(largest))
     largest = right;
   // Swap and continue heapifying if root is not largest
   if (largest != index)
   {
     std::swap(input.at(index), input.at(largest));
     heapify(input, n, largest);
   }
}

void Heap::buildMaxHeap(std::vector<int>& input){
    // Build max heap
    int len = static_cast<int>(input.size());
    for (int i = len / 2 - 1; i >= 0; i--)
      heapify(input, len, i);
}


// main function to do heap sort
void Heap::heapSort(std::vector<int>& input)
{
    int len = static_cast<int>(input.size());
    buildMaxHeap(input);
   // Heap sort
   for (int i=len-1; i>=0; i--)
   {
     std::swap(input.at(0), input.at(i));
     // Heapify root element to get highest element at root again
     heapify(input, i, 0);
   }
}


void Heap::print(std::vector<int>& input)
{
    auto print = [](int& elem) { std::cout<<elem<<" "; };

    std::for_each(input.begin(), input.end(), print);
    std::cout<<std::endl;
}
