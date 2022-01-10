# Lab 3: Structures, Pointers and Files

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

## Book exercises from Chapter 9
9.1) Write a function called substring() to extract a portion of a character string. The function should be called as follows:

`substring (source, start, count, result);`

where `source` is the character string from which you are extracting the `substring`, start is an index number into source indicating the first character of the `substring, count` is the number of characters to be extracted from the `source` string, and `result` is an array of characters that is to contain the extracted substring. For example, the call 

`substring ("character", 4, 3, result);`

extracts the substring "act" (three characters starting with character number 4) from the string "character" and places the result in result.

Be certain the function inserts a null character at the end of the substring in the result array. Also, have the function check that the requested number of characters does, in fact, exist in the string. If this is not the case, have the function end the substring when it reaches the end of the source string. So, for example, a call such as

`substring ("two words", 4, 20, result);`

should just place the string “words” inside the result array, even though 20 characters were requested by the call.

9.2) Write a function called `findString()` to determine if one character string exists inside another string. The first argument to the function should be the character string that is to be searched and the second argument is the string you are interested in finding. If the function finds the specified string, have it return the location in the source string where the string was found. If the function does not find the string, have it return −1. So, for example, the call 

`index = findString ("a chatterbox", "hat");`

searches the string "a chatterbox" for the string "hat". Because "hat" does exist inside the source string, the function returns 3 to indicate the starting position inside the source string where "hat" was found.

## Book exercises from Chapter 10
10.1) Write a function called `insertEntry()` to insert a new entry into a linked list. Have the procedure take as arguments a pointer to the list entry to be inserted (of type struct entry            as defined in the book chapter), and a pointer to an element in the list after which the new entry is to be inserted.

10.2) Rewrite the `compareStrings()` function from below to use character pointers instead of arrays.
```c
int compareStrings (const char s1[], const char s2[])
{
  int i = 0, answer;
  
  while ( s1[i] == s2[i] && s1[i] != '\0'&& s2[i] != '\0')
    ++i;
  if ( s1[i] < s2[i] )
    answer = -1; /* s1 < s2 */
  else if ( s1[i] == s2[i] )
    answer = 0; /* s1 == s2 */
  else
    answer = 1; /* s1 > s2 */
  
  return answer;
}
```

## Book exercises from Chapter 14 and 15
14.1) Define a macro MIN that gives the minimum of two values. Then write a program to test the macro definition

15.1) Write a program to copy one file to another, replacing all lowercase characters with their uppercase equivalents.

15.2) Write a program that merges lines alternately from two files and writes the results to `stdout`. If one file has fewer lines than the other, the remaining lines from the larger file should simply be copied to `stdout`