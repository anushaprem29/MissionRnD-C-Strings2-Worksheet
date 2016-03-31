/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/


//Using Kmp Algorithm

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int iter = 1, len = 0, count = 0,save;
	int *lps = (int *)malloc(sizeof(int) * 100);
	lps[0] = 0;
	while (word[iter] != '\0'){
		if (word[iter] == word[len]){
			lps[iter++] = ++len;
		}
		else{
			if (len != 0){
				len = lps[len - 1];
			}
			else{
				lps[iter++] = 0;
			}
		}
	}
	len = 0;
	save = iter;
	iter = 0;
	while( str[iter] != '\0'){
		if (word[len] == str[iter]){
			len++;
			iter++;
		}
		if (len == save){
			count++;
			len = lps[len - 1];
		}
		else if (str[iter] != '\0' && word[len] != str[iter]){
			if (len != 0)
				len = lps[len - 1];
			else
				iter++;
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

