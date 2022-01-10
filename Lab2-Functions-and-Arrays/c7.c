#include <stdio.h>

int calculateTriangularNumber ();
int prime();
int arraySum(int arr[], int size);
int c7(void){

printf ("Program 7.1\n\n");
  int n, number, triangularNumber, counter, size;
    printf("How many triangular numbers do you want?\n");
    scanf("%i", &size);
    for ( counter = 1; counter <= size; ++counter ) {
        printf ("What triangular number do you want? ");
        scanf ("%i", &number);
    
        triangularNumber = calculateTriangularNumber(number);
        
        printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    }



printf ("Program 7.2\n\n");
  int pri, check;
    printf("Write a number to check if it's a prime (1 = yes, 0 = no):\n");
    scanf("%i",&pri);
    check = prime(pri);

    if (check == 1){

      printf("1\n");
      
    } else {
    
      printf("0\n");
    }  

printf ("Program 7.3\n\n");

  int sum;
    int arrayToSum[10] ={1,2,3,4,5,6,7,8,9,10};
    sum = arraySum(arrayToSum, 10);

    printf("Sum of array is:\t%i",sum);

return 0;
}