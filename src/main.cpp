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
#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
#include "../include/Heap.hpp"

int main()
{

    /** @brief Replaces index with all possible elements. The condition "end-i+1 >= r-index" makes sure that, by including one element at a time, we guarantee to perform all the combinations with the remaining elements at remaining positions
       */
    Heap heap;
    //std::vector<int> vect{1,12,9,5,6,10,56,98,23,43,14,65,90};
    std::vector<int> vect{10,7,3};

    heap.print(vect);
    heap.heapSort(vect);
    std::cout << "Number sequence after sorting ::"<<std::endl;
    heap.print(vect);
    return 0;

}
