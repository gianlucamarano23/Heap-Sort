/****************************************************************************/
//
//  main.cpp
//  Project: heap Sort
//
//  Created by GianLuka23 on 18/10/2019.
//  Copyright © 2019 MacBook. All rights reserved.
//  insert here description and complexity analysis of heap sort algorithm
//

#ifndef Heap_hpp
#define Heap_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
#include<algorithm>

class Heap{

public:

    void heapSort(std::vector<int>&);
    void print(std::vector<int>& input);


private:
    void heapify(std::vector<int>& input, int dim, int index);
    void buildMaxHeap(std::vector<int>& input);

};

#endif /* Heap_hpp */
