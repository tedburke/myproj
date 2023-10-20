//
// This is a C program
// Written by Ted Burke
// Last updated 29-Sept-2023
//

#include <stdio.h>
#include "funcs.h"

int main()
{
    // Call functions
    hello();
    for (int m=0 ; m<10 ; ++m)
    for (int n=0 ; n<10 ; ++n) printf("%d%c", n, n==9 ? '\n' : ' ');
    goodbye();

    // Exit normally
    return 0;
}

