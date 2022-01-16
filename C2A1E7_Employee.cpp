//************************************** FILE C2A1E7_Employee.cpp *************************************** 
//  BRICE AUGUSTYN
//
//
//
#include "C2A1E7_Employee.h"
#include <cstring>
#include <cstdlib>

void Employee::Set(const char *a){        //In C++, scope resolution operator is ::. It is used for following purposes //To access a global variable when there is a local variable with same name:
        
        size_t length = strlen(a) + 1;
        name = new char[length];
        memcpy(name, a, length);
        //int *pointer;
        //int length=strlen(a); 
        //pointer = malloc(length);  //void *malloc(size_t size);
        
        /*
        // memcpy example 
#include <stdio.h>
#include <string.h>

struct {
  char name[40];
  int age;
} person, person_copy;

int main ()
{
  char myname[] = "Pierre de Fermat";

  // using memcpy to copy string: 
  memcpy ( person.name, myname, strlen(myname)+1 );
  person.age = 46;

  // using memcpy to copy structure: 
  memcpy ( &person_copy, &person, sizeof(person) );

  printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age );

  return 0;
}
 Edit & Run

        */
        
        
        
};

         
        
        
        
        
         


//The function will dynamically allocate exactly the amount of memory necessary 
//to hold that string (including its null terminator), 
//set member name to point to that memory, 
//and copy the string into that memory.


/*The malloc() function takes a single parameter, 
which is the size of the requested memory area in bytes. 
It returns a pointer to the allocated memory. 
If the allocation fails, it returns NULL. 
The prototype for the standard library function is like this:

          void *malloc(size_t size);

*/



//#include <cstring>

//#include "C2A1E7_Employee.h"

// Set the Employee's name to the string in <str>
// by creating a "deep" copy of it.

/*
void Employee::Set(const char *str)
{
size_t length = strlen(str) + 1;
name = new char[length];
memcpy(name, str, length);
}*/
