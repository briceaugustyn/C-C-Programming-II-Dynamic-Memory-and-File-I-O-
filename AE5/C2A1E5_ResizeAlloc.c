
//Brice Augustyn (U07944417) baugustyn1000@gmail.com
//C/C++ Programming II 
//Section 160706 Ray Mitchell
//1/18/22
//C2A1E5_ResizeAll.c
//used GDB https://www.onlinegdb.com/#
// This file contains the functions ResizeAlloc that allocate ab entirely new block of memory containing new size  bytes
// Functions not completed yet

#include<stdio.h>

void *ResizeAlloc( void *pOld, size_t newSize, size_t oldSize){
    size_t *ptr;
                        // If newSize is zero
if (newSize==0)
                        //return a null pointer
return NULL;
                        // else
else
                        //Dynamlically allocate a new block containing newSize uninitialize bytes
maloc
                        //If the allocations fails

                        // return a null pointer 

                        // Else if pOld is a null pointer

                        // return a  pointer to the new block

                        // Else

                        // if newSize is greater than oldsize 

                        // copy oldsize bytes from pOld to the new block

                        // Else 

                        // copy newSize bytes from pOld to the new block

                        //Free pOld

                        //Return a pointer to the new block

    return ptr;
}