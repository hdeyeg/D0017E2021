#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void substring();
int findstring();


void prog9(){

printf("Program 9.1\n");
 char source[0], result[0];
    int start, count;
    char s[1000];
    printf("Type sentence:");
    scanf("%[^\n]%*c", s);
    printf("Type the index to start at: ");
    scanf("%i",&start);
    printf("Type how many indexes to go: ");
    scanf("%i",&count);


    substring(s, start, count, result); 
    printf("The sentence becomes: %s\n\n", result);

    
/////////////////////////////////////////////////////////////////////////////////////////////////////
printf("Program 9.2\n");

    char *sentence ="a chatterbox";
    char *word ="hat";

printf("The index of the substring %s in the sentence %s is : %i\n",word,sentence,findstring(sentence,word));
printf("\n\n");
}