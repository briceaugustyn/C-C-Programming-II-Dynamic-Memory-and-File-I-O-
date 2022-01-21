//Brice Augustyn (U07944417) baugustyn1000@gmail.com
//C/C++ Programming II 
//Section 160706 Ray Mitchell
//1/18/22
//C2A1E2_main.c
//used GDB https://www.onlinegdb.com/#
//This file the definition of a main and must display the a count of the number command and each arguments


#include <stdio.h>

int main( int argc, char * argv [] ) {
    printf( "argc = %d\n", argc );
    for( int i = 0; i < argc; ++i ) {
        printf( "argv[ %d ] = %s\n", i, argv[ i ] );
    }
    return(0);
}

