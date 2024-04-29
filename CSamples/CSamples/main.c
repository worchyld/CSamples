//
//  main.c
//  CSamples
//
//  Created by Amarjit on 29/04/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("This sentence will work!\n");
    printf("And it is awesome!\n");
    
    // multi-line
    printf("Hello World!\nI am learning C.\nAnd it is awesome!\n");
    printf("first\tsecond\\backslash\n");
    
    // variables
    int myNum = 15;             // Integer
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character
    
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    
    int myOtherNum = 23;

    // Assign myOtherNum (23) to myNum
    myNum = myOtherNum;
    
    printf("%d\n", myNum);
    
    return 0;
}
