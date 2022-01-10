//INCASE THE SEPERATION OF THE CODE DOESNT WORK//


/*#include <stdio.h>
#if 0
int main(void) {
  printf("Program 5.1\n");
    int x;
    int y;
      printf("Write two whole numbers to determine if the first is evenly divisible by the second: ");
      scanf("%i%i",&x, &y);
          if (!(x % y))  if (x % y == 0) {
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
  
        printf ("Enter your number.\n");
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

  return 0;
}
}

#endif

#if 0
int main(void) { 
  printf("Program 6.1\n\n"); 

  int values[10];
  int index;

for ( index = 0; index < 10; ++index ) {
  values[0] = 0;
  values[1] = 0;
  values[2] = 0;
  values[3] = 0;
  values[4] = 0;
  values[5] = 0;
  values[6] = 0;
  values[7] = 0;
  values[8] = 0;
  values[9] = 0;
}
for ( index = 0; index < 10; ++index ) {
  values[0] = 197;
  values[2] = -100;
  values[5] = 350;
  values[3] = values[0] + values[5];
  values[9] =
  values[5] / 10;
  --values[2];
}
  for ( index = 0; index < 10; ++index )
    printf ("values[%i] = %i\n", index, values[index]);
  
  printf("\n\n");
  
  printf ("Program 6.2\n\n");
  float array [10] = {0,1,2,3,4,5,6,7,8,9};
  int sum;
  int tot;
  float avg;
    
    for ( tot = 0; tot < 10; ++tot ) {
      sum = sum + array[tot];
    }
    
    avg = (float)sum / tot;
    printf("The average is %.3f",avg);

  return 0;
}
#endif

#if 0
int main(void){

printf ("Program 7.1\n\n");


void prime(int n){
printf ("Program 7.2\n\n");
int i, c = 0;
printf("Write a integer to check if its a prime or not: ");
scanf("%i",&n);
for (i = 1; i <= n; i++) {
      if (n % i == 0) {
        c = 1;
      }
  }
if (c == 1){
  printf("1");
} else {
  printf("0");
}
}

printf ("Program 7.3\n\n");
return 0;
}
#endif
*/