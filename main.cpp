#include <iostream>
#include "iterativeFunctions.h"

int main()
{
    int A[] = {2, 5, 8, 3, 6, 4, 1};
    int length_A = sizeof(A)/sizeof(A[0]);
    
    create(A, length_A);
    display(first);
    std::cout<<"\n";
    
    reverse(first);
    display(first);
    std::cout<<"\n";
   
    deleteNode(first, 2);
    deleteNode(first, 8);
    display(first);
    
}
