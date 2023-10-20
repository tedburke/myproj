//
// This is a C program
// Written by Ted Burke
// Last updated Fri 20 Oct 13:15:29 IST 2023
//

#include <stdio.h>
#include "funcs.h"

int main()
{
    int m, n;

    hello(); // Print greeting

    for (m=0 ; m<10 ; ++m)
    {
        for (n=0 ; n<10 ; ++n)
        {
            printf("%d%c", n, n==9 ? '\n' : ' ');
        }
    }

    goodbye(); // Print farewell

    return 0;
}

