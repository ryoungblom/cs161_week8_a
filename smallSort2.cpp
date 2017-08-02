/**********************************
 ** Program Filename: smallsort.cpp
 ** Author: reuben youngblom
 ** Date: November 16th 2016
 ** Description: This program takes the addresses of three ints and passes them to a function. The function dereferences and sorts them using conditionals, and since the function has access to the address, the main function spits back out the ints in a sorted order.  This is essentially my earlier smallSort program.
 ** Input: Will take three addresses
 ** Output: should sort them into ascending order and be able to kick back the values if requested
 **********************************/

#include <iostream>
using namespace std;

void smallSort2 ();

void smallSort2 (int *small, int *mid, int *big)

    {
        int hold; //creates a holding variable, so program can swap variables (pointers) without losing any to overwriting
        
        if (*small >= *mid)  //first conditional: sorts dereferenced int #1 and int #2 into ascending order, IF they're in the wrong order
        {
            hold = *small;  //moves #1 to holding variable
            *small = *mid;  //assigns int #2 to int #1 variable
            *mid = hold;  //assigns holding variable (which holds original #1 value) to #2, effectively swapping the values of dereferenced ints #1 and #2.
        }
        
        if (*mid >= *big) //this does the same thing as above conditional, but with dereferenced ints #2 and #3
        {
            hold = *mid; //stores value #2
            *mid = *big;  //assigns #3 to #2
            *big = hold;  //completes the swap
        }
        
        if (*small >= *mid)  //this does the same thing as the above two, but now re-checks the first variable against the new middle variable, since they haven't been directly compared yet.
        {
            hold = *small;  //stores #1
            *small = *mid;  //starts to swap
            *mid = hold;  //completes the swap
        }

    
    
    
    }

/*

int main()   //used for testing
{
    int a = 9999;
    int b = -99;
    int c = -76342;
    smallSort2(&a, &b, &c);
    cout << a << ", " << b << ", " << c << endl;
    return 0;
}
 
 */
