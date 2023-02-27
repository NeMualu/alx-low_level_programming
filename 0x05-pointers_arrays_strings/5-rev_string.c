#include "main.h"

#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */
void rev_string(char *s){
	    
    int i, len, temp;
    len = strlen(str1);


    for (i = 0; i < len/2; i++)
    {
    
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }  
}
