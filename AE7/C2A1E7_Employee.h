//Brice Augustyn (U07944417) baugustyn1000@gmail.com
//C/C++ Programming II 
//Section 160706 Ray Mitchell
//1/18/22
//C2A1E7_Employee.h
//used GDB https://www.onlinegdb.com/#
// This file contains the definition of class employee with private and public members

#ifndef C2A1E7_EMPLOYEE_H
#define C2A1E7_EMPLOYEE_H

class Employee{
   
   private:
        char *name;
        int age;
        float raise;
        double salary;
   
   public:
   
   void Set (const char *str);
   void Set(int a=25){          //default function value is only allowed in C++ not C
       age=a;
   };
   void Set(const float &b ){   //In C, the corresponding parameter in the called function must be declared as a pointer type. C++ only In C++, the corresponding parameter can be declared as any reference type, not just a pointer type.
       raise=b;
   };
   void Set(const double *c){
       salary=*c;               //make sure to derefence the pointer *c
   };
   
   char * Get(char **str3){
   *str3 = name;
   return *str3;
   };
                                 /* Simple Function returning pointer
                                    int* fun()
                                    {
                                    int A = 10;
                                    return (&A);
                                    }
                                    */
    int Get(int &d){            // make sure to read the assignment line by line lol
    d=age;
    return age;
    };

    float &Get(float &e){       // return a reference to raise (is an address that point to raise)
    e=raise;
    return e;
    };
   
   
   inline double Get(double *f)
   {
   //
    }
};

#endif





