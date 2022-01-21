//Brice Augustyn (U07944417) baugustyn1000@gmail.com
//C/C++ Programming II 
//Section 160706 Ray Mitchell
//1/18/22
//C2A1E6_AppendFile.cpp
//used GDB https://www.onlinegdb.com/#
// This file contains the definition of a function name AppendFile and must append the content of the //file specified by inFile onto the the file specified by outFile


#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;


const int BUFSIZE =256;

void ErrorAndDie(const char *myString){
    cerr<<"\"" << myString <<"\": File access error \n";
    exit(EXIT_FAILURE);
}

int AppendFile(const char *inFile, const char *outFile){
    char buf[BUFSIZE];

    ifstream source(inFile);
    if((!source.is_open()))
        ErrorAndDie(inFile);
        
    //open file for append update
    fstream destination(outFile, ios_base::in|ios_base::out |ios_base::app);
    if(!destination.is_open())
        ErrorAndDie(outFile);
        
    while(source.getline(buf, sizeof(buf)))
        if(!(destination << buf << '\n'))
            ErrorAndDie (outFile);
            
    if(!source.eof())
        ErrorAndDie(outFile);
    source.close();
    destination << 5  << ' ' <<2.68<<" Hello World " << 'n';
    //destination.seekg(0);  // can't use seekg()
    
    //Read first record in destination file and display it
    
    destination.close();
    return (0);
    
}
    


//AppendFile must append the content of the file specififed by inFile


            //1 Work correctly for both text and binary files
            //2 Open each file only once
            //3 not use functions rdbuf, peek, seekp, seekkg, tellp, tellg, fseek, ftell, fsetpos or fgetpos
            //4 not attempt to read the entire contents of any file into the program at once since ont the general case a file can contain more bytes than the largest possible array can hold
            //5 Close all open files and return 0 after appending completes

