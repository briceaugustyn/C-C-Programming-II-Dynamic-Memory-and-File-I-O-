//Brice Augustyn (U07944417) baugustyn1000@gmail.com
//C/C++ Programming II 
//Section 160706 Ray Mitchell
//1/18/22
//C2A1E4_StrToUpper.c
//used GDB https://www.onlinegdb.com/#
// This file contains the definition of a function that will copy a string from one source to a 
//destination and convert lowercase characters to uppercase



#include <stdio.h>
#include <ctype.h>

size_t StrToUpper(char *str2, const char *str1){
    int i=0;
    while (str1[i]!='\0'){
        str2[i]=toupper(str1[i]);
        printf("%c",str2[i]);
        i++;
    }
    str2[i]='\0';
    return (size_t) i;
}