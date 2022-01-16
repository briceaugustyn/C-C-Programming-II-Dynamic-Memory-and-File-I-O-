//**************************************** FILE C2A1E7_Employee.h ****************************************
//
// BRICE AUGUSTYN Assignment C2AA7
//

//Include guard

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
   
   //char *Get(char **outVar) const {return *outVar = name;}
   
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






//#ifndef C2A1E7_EMPLOYEE_H
//#define C2A1E7_EMPLOYEE_H


// Definition of data type "class Employee"

/*
class Employee
{
public:
    void Set(const char *str);
    void Set(int value = 25) {age = value;}
    void Set(const float &value) {raise = value;}
    void Set(const double *pValue) {salary = *pValue;}
    char *Get(char **outVar) const {return *outVar = name;}
    int Get(int &outVar) const {return outVar = age;}
    
    float &Get(float &outVar) const {return outVar = raise;}
    inline double Get(double *outVar) const;

private:
    char *name;
    int age;
    float raise;
    double salary;
};

//
//
// pointed to by its parameter.
double Employee::Get(double *outVar) const
{
return *outVar = salary;
}

*/

//#endif

