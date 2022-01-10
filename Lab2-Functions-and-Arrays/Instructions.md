# Lab 2: Functions and Arrays

In this lab you will write programs for the following tasks

## Instructions
- You can create 1 `.c` file per question below (ex: `21.c for question 2.1`) or 1 `.c` file per chapter (ex: `chapter2.c`)or everything in a single `main.c` file. My suggestion is to create 1 file per chapter
- It is possible to group many exercises in the same `.c` file. Use the following code example. Only the code that is under `#if 1` is executed and not under `#if 0`

  ```c++
  #include <stdio.h>

  #if 1
  int main(void) {
      printf("Program 2.1\n");
  }
  #endif

  #if 0
  int main(void) {
      printf("Program 2.2\n");
  }
  #endif

  #if 0
  int main(void) {
      printf("Program 2.3\n");
  }
  #endif
  ```

## Book exercises from Chapter 5
5.1) Write a program that asks the user to type in two integer values at the terminal. Test these two numbers to determine if the first is evenly divisible by the second, and then display an appropriate message at the terminal.

5.2) Write a program that accepts two integer values typed in by the user. Display the result of dividing the first integer by the second, to three decimal-place accuracy. Remember to have the program check for division by zero.

5.3) In the below program you can reverse the digits of an integer typed in from the terminal. However, this program does not function well if you type in a negative number. Find out what happens in such a case and then modify the program so that negative numbers are correctly handled. For example, if the number `−8645` is typed in, the output of the program should be `5468−`
```c
// Program to reverse the digits of a number
#include <stdio.h>
int main ()
{
  int number, right_digit;
  
  printf ("Enter your number.\n");
  scanf ("%i", &number);
  
  do {
    right_digit = number % 10;
    printf ("%i", right_digit);
    number = number / 10;
  } while ( number != 0 );

  printf ("\n");
  
  return 0;
}

```

## Book exercises from Chapter 6
6.1) Modify the below program so that the elements of the array values are initially set to 0. Use a for loop to perform the initialization
```c
#include <stdio.h>
int main (void)
{
  int values[10];
  int index;
  values[0] = 197;
  values[2] = -100;
  values[5] = 350;
  values[3] = values[0] + values[5];
  values[9] =
  values[5] / 10;
  --values[2];
  
  for ( index = 0; index < 10; ++index )
    printf ("values[%i] = %i\n", index,
  
  values[index]);
  
  return 0;
}
```

6.2) Write a program that calculates the average of an array of 10 floatingpoint values

## Book exercises from Chapter 7
7.1) Modify the program 1 below so the value of `triangularNumber` is returned by the function. Then change the program 2 so that it calls the new version of the `calculateTriangularNumber()` function
```c
//Program 1
#include <stdio.h>
void calculateTriangularNumber (int n)
{
  int i, triangularNumber = 0;
  for ( i = 1; i <= n; ++i )
    triangularNumber += i;
  
  printf ("Triangular number %i is %i\n", n, triangularNumber);
}

int main (void)
{
  calculateTriangularNumber (10);
  calculateTriangularNumber (20);
  calculateTriangularNumber (50);
  
  return 0;
}
```
```c
//Program 2
#include <stdio.h>
int main (void)
{
    int n, number, triangularNumber, counter;
    
    for ( counter = 1; counter <= 5; ++counter ) {
        printf ("What triangular number do you want? ");
        scanf ("%i", &number);
    
        triangularNumber = 0;
        
        for ( n = 1; n <= number; ++n )
            triangularNumber += n;
        
        printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    }
  return 0;
}
```

7.2) Write a function `prime()` that returns 1 if its argument is a prime number and returns 0 otherwise

7.3) Write a function called `arraySum()` that takes two arguments: an integer array and the number of elements in the array. Have the function return as its result the sum of the elements in the array