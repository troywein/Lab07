/** lab07.c
* ===========================================================
* Name: first last
* Section: 
* Project: Lab07
* Purpose: Verify install of CS210 software.
* Documentation:  N/A
* ===========================================================
*/
#include <stdio.h>
#include "myFuncts.h"   // function prototypes we create declared
                        // in this file

int main() {
    printf("This short program validates install of CS210 software\n");
    printf("and correct setup and configuration of VSC with GitHub\n");
    printf("Classroom.\n");


    // the following lines verify that we can access cube function in
    // defined in myFuncts.c and declared in myFuncts.h
    printf("The cube of 50 is %ld", cubeIt(50));

    // TODO 1.0
    // Call cubeIt() after getting a value from the user with scanf()

}