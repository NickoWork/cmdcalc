#include <stdio.h>
#include <stdlib.h>
#include "include/computing.h" 
                                                                                   
int main(int argc, char *argv[])                    
{
    
    char *array_char;               // init array
    array_char = argv[1];          // copy string --> array_char    


    delete_space(array_char);  // array without space
	/*Print function*/
//	printf("\n%s = ",array_char);
    check_brackets(array_char);
	/*Print function*/
//	printf("\n%s = ",array_char);
    
    int i=0;                             // i for while
    while ((*(array_char+i)) != '\0'){  // change element
	i++;                           
    	printf("+");                  // print apperance
    }

    printf("\n%s = ",array_char);             // print example without space 
    printf("%g\n", calculation(array_char)); // calculation
    return 0;
}

