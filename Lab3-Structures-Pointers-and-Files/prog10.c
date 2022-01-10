#include <stdio.h>
#include <string.h>

struct entry{
    int  value;
    struct entry *next;
};


void insertEntry ( struct entry *newEntry, struct entry *EntryNo ){

(*newEntry).next = (*EntryNo).next;
(*EntryNo).next = newEntry;

}

void prog10(){
int compareStrings();



printf("Program 10.1\n");
struct entry n1, n2, n3, n4, newEntry;

struct entry *listPointer = &n1;
n1.value = 20;
n1.next = &n2;
n2.value = 40;
n2.next = &n3;
n3.value = 60;
n3.next = &n4;
n4.value = 80;
n4.next = (struct entry *) '\0';

newEntry.value = 70;

printf("List before adding:\n");
while ( listPointer != (struct entry*) '\0'){
    printf("%i\n", listPointer->value );
    listPointer = listPointer->next;
}
listPointer = &n1; 

insertEntry ( &newEntry, &n3 );

printf("List after adding:\n");
while ( listPointer != (struct entry*) '\0' ){
    printf("%i\n", listPointer->value );
    listPointer = listPointer->next;
}
printf("\n");


////////////////////////////////////////////////////////////////////////////////
printf("Program 10.2\n");



printf("%i", compareStrings("tokyo", "kyoto"));
printf("\n\n");
}
