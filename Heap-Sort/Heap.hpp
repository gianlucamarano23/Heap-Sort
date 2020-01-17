//
//  Heap.hpp
//  Heap-Sort
//
//  Created by GianLuka23 on 28/10/2019.
//  Copyright © 2019 MacBook. All rights reserved.
//
//prova new branch

#ifndef Heap_hpp
#define Heap_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>

class Heap{
    
public:
    
    void heapSort(std::vector<int>&);
    void print(std::vector<int>& input);

    
private:
    void heapify(std::vector<int>& input, int n, int i);
    void buildMaxHeap(std::vector<int>& input);


};

#endif /* Heap_hpp */
