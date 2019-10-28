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

class Pippo{
private:
    int num;
    std::string str;
public:
    Pippo(int val, std::string inpt): num(val), str(inpt){};
    std::string getStr(){
        return  str;
    };
};
    

void heapify(int arr[], int n, int i)
{
   // Find largest among root, left child and right child
   int largest = i;
   int l = 2*i + 1;
   int r = 2*i + 2;
   if (l < n && arr[l] > arr[largest])
     largest = l;
   if (r < n && arr[r] > arr[largest])
     largest = r;
   // Swap and continue heapifying if root is not largest
   if (largest != i)
   {
     std::swap(arr[i], arr[largest]);
     heapify(arr, n, largest);
   }
}
// main function to do heap sort
void heapSort(int arr[], int n)
{
   // Build max heap
   for (int i = n / 2 - 1; i >= 0; i--)
     heapify(arr, n, i);
   // Heap sort
   for (int i=n-1; i>=0; i--)
   {
     std::swap(arr[0], arr[i]);
     
     // Heapify root element to get highest element at root again
     heapify(arr, i, 0);
   }
}
void printArray(int arr[], int n)
{
   for (int i=0; i<n; ++i)
     std::cout << arr[i] << " ";
   std::cout << "\n";
}



int main()
{
    std::shared_ptr<Pippo> ptr1 = std::make_shared<Pippo>(3, "pippo");
    std::cout<<ptr1.use_count()<<std::endl;
    std::shared_ptr<Pippo> ptr2 = ptr1;
    std::cout<<ptr2.use_count()<<std::endl;
    ptr1.reset();
    std::cout<<ptr2.use_count()<<std::endl;
    
    std::cout<<"============================"<<std::endl;
    
    int arr[] = {1,12,9,5,6,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, n);
    std::cout << "Sorted array is \n";
    printArray(arr, n);


    return 0;
    
}
