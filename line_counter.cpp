#include <iostream>
#include <fstream>
#include <stdio.h>


using namespace std;
/*
Here's a simple help free challenge to get you started: 
write a program that takes a file as an argument and counts 
the total number of lines. Lines are defined as ending with 
a newline character. Program usage should be */


int main(int argc, char *argv[])
{
    if( argc != 2)
    {
        
        cout << "there weren't enough arguments/ too many arguments" << endl;
        return 0;
    }
    int count = 0;
    FILE * file;
    file = fopen(argv[1], "r");
    if ( file == NULL)      //if the file doesn't open for any reason
    {
        cout << "couldn't open file rip" << endl;
        return 1;
    }
    char c = fgetc(file);
    while ( c != EOF)       //will look at every character and comapre it with \n
    {
        if( c == '\n')
        {
            count++;
        }
        c = fgetc(file);
    }
    fclose(file);           //dont forget to close the file 
    cout << "there were    " << count << "    line(s) in this file " << endl;
    return 0;
}

