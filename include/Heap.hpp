/****************************************************************************/
//
//  main.cpp
//  Project: heap Sort
//
//  Created by GianLuka23 on 18/10/2019.
//  Copyright © 2019 MacBook. All rights reserved.
//  insert here description and complexity analysis of heap sort algorithm
//
<<<<<<< HEAD
/****************************************************************************/
/// @file    main.cpp
/// @author  Gianluca Marano
/// @date    20.10.2019
///
// C++ main.cpp implementation
/****************************************************************************/
=======
//prova new branch

>>>>>>> 20362d17847373c089cd136b24b6cb943981a5e4
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
    void heapify(std::vector<int>& input, int dim, int index);
    void buildMaxHeap(std::vector<int>& input);

};

#endif /* Heap_hpp */
