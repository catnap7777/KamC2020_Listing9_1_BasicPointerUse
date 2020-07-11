
// from Listing 9.1 Basic Pointer Use; p.191
// *********************************************************************
// *****
// *****  NEED TO UNDERSTAND THE BASICS OF POINTERS BEFORE CONTINUING
// *****  ON IN THE BOOK OR WITH EXERCISES
// *****
// *********************************************************************
//
//confusion would seem to arise from the how these variables and pointers are
//declared/initialed versus how they are reference... *** see pg. 191 pink box
//for more explanation/summary on how to think about this.
//
// BASICALLLY... (MEMORIZE #1 AND #2 BELOW..)
//  1. *ptr and var1 both refer to the CONTENTS of var1 (that is,
//  whatever VALUE the program has stored there)
//  2. ptr and &var1 refer to the address of var1 (NOT the CONTENTS/VALUE)


#include <stdio.h>

//declare and initialize int variable
int var1 = 200;

//declare pointer for int -- the * in front of the pointer name
//    indicates that this IS a pointer
int *ptr;  //<-- CONFUSING BECAUSE OF HOW A POINTER IS DECLARED
           //     '*' INDICATES TO COMPILER THAT THIS IS A POINTER.
           //     HOWEVER, '*ptr' WHEN USED REFERS TO THE ACTUAL
           //     CONTENTS/VALUE POINTED TO BY PTR

int main(void)
{
    //initialize pointer to point to variable -- the & indicates that ptr
    //   will hold the ADDRESS of(to) the variable var1
    ptr=&var1;

    //*** Access var1 directly and indirectly

    //1. Display the CONTENTS of var1 two ways

    printf("\nDirect access, var1=%d", var1);    //gives the value of var1 directly
                                                 // - in other words, uses the var1 name

    printf("\nIndirect access, var1=%d",*ptr);   //gives the VALUE of whatever is
                                                 //pointed to by ptr; in this case,
                                                 //since ptr was previously assigned
                                                 //the ADDRESS of &var1, it will get
                                                 //whatever is at this address, in this case
                                                 //var1

    //2. Display the ADDRESS of var1 two ways

    printf("\n\nThe address of var1 = %p", &var1);
    printf("\nThe address of var1 = %p\n", ptr);

    return 0;
}



