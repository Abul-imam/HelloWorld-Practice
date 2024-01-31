/*********************
Name: Abul Imam
Assignment: 2
Purpose of the file: This program stores all 
the functions that main.cpp needs to run.
**********************/

#include "functions.h"

int strlength(const char *str){
	/*********************************************
	This function accepts a pointer to a constant string/
	character. Then it iterates through the characters using
	a while loop where the variable 'length' is used as a counter.
	The while loop stops when it encounters the null terminator '\0'.
	Finally it returns the number of characters in the string (length).

	@param str : pointer to a constant character (C-style string).
	
	@return length : length of the string passed into this function.
	*********************************************/
	
	int length = 0;
	
	while (str[length] != '\0'){
		length++;			
	}

	return length;
}

