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
#include "Heap.hpp"

int main()
{
    Heap heap;
    std::vector<int> vect{1,12,9,5,6,10};
    heap.print(vect);
    heap.heapSort(vect);
    std::cout << "Number sequence after sorting ::"<<std::endl;
    heap.print(vect);
    return 0;
    
}


