#include <stdio.h>
//#include <math.h> // (For math functions)
#if 0
int main(void) {
    printf("Program 2.1\n");
      printf ("1. In C, lowercase letters are significant.\n");
      printf ("2. main() is where program execution begins\n");
      printf ("3. Opening and closing braces enclose program statements in a routine.\n");
      printf ("4. All programs statements must be terminated by a semicolon.\n\n");

  printf("\n\n");
  printf("Program 2.2\n");
  int sum;

  sum = 87-15;

  printf("87 - 15 is %i.",sum);
  return 0;
}
#endif

#if 0
int main(void) 
{
  printf("Program 3.1\n\n");
  int x; 
  
  printf("To solve for y. Write your desired value for x: ");
  scanf("%i",&x);

  printf("The answer is x = %i", ((3*(x*x*x)) - (5*(x*x)) + 6));
  
  
 
  printf("\n\n");
  printf("Program 3.2\n\n");
  int a=256;
  int b=7;
  int c=12258;
  int d=23;
  int e=996;
  int f=4;
  
  int Next_multiple1;
  int Next_multiple2;
  int Next_multiple3;

  Next_multiple1 = a + b - a % b;
  Next_multiple2 = c + d - c % d;
  Next_multiple3 = e + f - e % f;

  printf("Largest even multiple of values %i and %i is %i\n\n",a,b,Next_multiple1);
  printf("Largest even multiple of values %i and %i is %i\n\n",c,d,Next_multiple2);
  printf("Largest even multiple of values %i and %i is %i\n\n",e,f,Next_multiple3);
  
  return 0;
}
#endif

#if 1
int main(void) 
{
printf("Program 4.1\n");

int n, n2;
printf ("Table of n and n2\n\n");
printf ("  n     n2\n");
printf("------------\n");
n2 = 0;
  for ( n = 1; n <= 10; n++) {
    n2 = n*n;
    //n2 = pow(n,2); //(Requires "#include <math.h>"" at the top.)
      printf (" %2i    %3i\n", n, n2);
    }

printf("\n\n");
printf("Program 4.2\n");
  
  int p, number, triangularNumber, counter, times;
      printf("How many triangular numbers do you want?: ");
      scanf("%i", &times);

    for ( counter = 1; counter <= times; counter++ ) {
        printf ("What triangular number do you want? ");
        scanf ("%i", &number);
    
        triangularNumber = 0;
        
        for ( p = 1; p <= number; p++ )
            triangularNumber += p;
        
        printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    }

}
#endif
