//
//  main.cpp
//  Heap-Sort
//
//  Created by GianLuka23 on 28/10/2019.
//  Copyright © 2019 MacBook. All rights reserved.
//

//
//  main.cpp
//  Test
//
//  Created by GianLuka23 on 18/10/2019.
//  Copyright © 2019 MacBook. All rights reserved.
//
  
#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>


void heapify(std::vector<int>& input, int n, int i)
{
   // Find largest among root, left child and right child
   int largest = i;
   int l = 2*i + 1;
   int r = 2*i + 2;
   if (l < n && input.at(l) > input.at(largest))
     largest = l;
   if (r < n && input.at(r) > input.at(largest))
     largest = r;
   // Swap and continue heapifying if root is not largest
   if (largest != i)
   {
     std::swap(input.at(i), input.at(largest));
     heapify(input, n, largest);
   }
}
// main function to do heap sort
void heapSort(std::vector<int>& input)
{
    int len = static_cast<int>(input.size());
   // Build max heap
   for (int i = len / 2 - 1; i >= 0; i--)
     heapify(input, len, i);
   // Heap sort
   for (int i=len-1; i>=0; i--)
   {
     std::swap(input.at(0), input.at(i));
     // Heapify root element to get highest element at root again
     heapify(input, i, 0);
   }
}
void print(std::vector<int>& input)
{
    auto print = [](int& elem) { std::cout<<elem<<" "; };

    std::for_each(input.begin(), input.end(), print);
    std::cout<<std::endl;
}

int main()
{
    
    std::vector<int> vect{1,12,9,5,6,10};
    print(vect);
    heapSort(vect);
    std::cout << "Number sequence after sorting ::\n";
    print(vect);
    return 0;
    
}


