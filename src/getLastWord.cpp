/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int w_start = 0,iter;
	if (str == NULL);
	for (iter = 0; str[iter] != NULL; iter++){
		if (str[iter] == ' ')	w_start = iter + 1;
	}
	char * sub = (char *)malloc(sizeof(char)*(iter-w_start + 1));
	for (iter=w_start; str[iter]!='\0'; iter++){
		if (str[iter] != '\0'){
			sub[iter - w_start] = str[iter];
		}
	}
	sub[iter - w_start] = '\0';
	return sub;

}
