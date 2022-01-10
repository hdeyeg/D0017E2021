#include <stdio.h>
#include <stdlib.h>

void c5() {
  printf("Program 5.1\n");
    int x;
    int y;
      printf("Write two whole numbers to determine if the first is evenly divisible by the second: ");
      scanf("%i%i",&x, &y);
          if (!(x % y)) /* if (x % y == 0) */ {
            printf("%i is divisable with %i",x,y);
           } else { 
              printf("%i is not divisable by %i",x,y);
        }
    printf("\n\n");

  printf("Program 5.2\n");
    float z;
    float c;
    float sum;
      printf("Write two integers to divide the first with the second with an accuracy of three decimal-places: ");
      scanf("%f%f",&z,&c);
    sum = (z / c);
      
      if (z == 0) {
      printf("The sum is %.3f",sum);
      } else if (c == 0) {
      printf("Don't use 0 thx, im just a dumb computer and cannot handle the infinite");
      } else {
      printf("The sum is %.3f",sum);
      }
    printf("\n\n");
    
  
  printf("Program 5.3\n\n");{
      int number, right_digit; //−8645
  
        printf ("Enter your number to reverse it.\n");
        scanf ("%i", &number);
        if ( number < 0 ){ 
          number = number * -1;
          do {

            right_digit = number % 10;
            printf ("%i", right_digit);
            number = number / 10;
          }
         while ( number != 0 );
          printf("-");
        
        } else {
          do {
            right_digit = number % 10;
            printf ("%i", right_digit);
            number = number / 10;
          }
          while ( number != 0 );
          }
  printf ("\n");
}
}