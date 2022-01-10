# Lab 1: Variables, Data Types, Looping

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

## Book exercises from Chapter 2
2.1) Write a program that prints the following text
```C
1. In C, lowercase letters are significant.
2. main() is where program execution begins.
3. Opening and closing braces enclose program statements in a routine.
4. All program statements must be terminated by a semicolon.
```
2.2) Write a program that subtracts the value 15 from 87 and displays the
result, together with an appropriate message, at the terminal.

## Book exercises from Chapter 3
3.1) Write a program to evaluate the polynomial shown here: 3x^3 - 5x^2 + 6

3.2) To round off an integer i to the next largest even multiple of another integer j, the following formula can be used:
`Next_multiple = i + j - i % j`. For example, to round off 256 days to the next largest number of days
evenly divisible by a week, values of i = 256 and j = 7 can be
substituted into the preceding formula as follows:
  ```C
  Next_multiple = 256 + 7 - 256 % 7
                = 256 + 7 - 4
                = 259
  ```
Write a program to find the next largest even multiple for the following
values of i and j:

  | i      | j |
  | ----------- | ----------- |
  | 365      | 7       |
  | 12258      | 23       |
  | 996   | 4        |

## Book exercises from Chapter 4
4.1) Write a program to generate and display a table of n and n2, for integer values of n ranging from 1 to 10. Be certain to print appropriate column headings.

4.2) The below program allows the user to type in only five different numbers. Modify that program so that the user can type in the number of triangular numbers to be calculated
  ```C
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