#include <stdio.h>
#include <string.h>
#include "mystring.h"
#include "structhelper.h"
#include <stdlib.h>
#include <time.h>

/** ctest.c
 * Program to demonstrate character arrays and
 * dynamically-allocated memory.
 * @author Mike Ciaraldi
 */

const int MAX_CHARS = 20; // Maximum number of characters in array

int main()
{
    srand (time(NULL));
    char a1[MAX_CHARS + 1]; // Character array--initially empty
    char a2[] = "Hello"; // Character array--unsized but initialized
    char a3[MAX_CHARS + 1]; // Character array--we will underfill it
    char* p1 = "Hello"; // Pointer to constant string
    char* p2;           // Will be a pointer to dynamically-allocated string
    int copy_limit;     // Maximum characters to copy.

    strcpy(a3, "Hello, also"); // Initialize uinderfilled character array

    /* Print the pointers.
       Note: this example uses the %p format descriptor so it prints
       the values of the pointers themselves, not the targets.
    */
    printf("Pointers: a1 = %p, a2 = %p, a3 = %p\n", a1, a2, a3);
    printf("          p1 = %p p2 = %p\n", p1, p2);

    strcpy(a1, "Hi"); // Initialize character array

    printf("a1 = %s\n", a1);
    printf("a2 = %s\n", a2);
    printf("a3 = %s\n", a3);

    // Concatenate two character arrays, then print.
    strcat(a1, a2);
    printf("a1 = %s\n", a1);

    // Concatenate two character arrays safely, then print.
    copy_limit = MAX_CHARS - strlen(a1); // How much space is left?
    if (copy_limit > 0) strncat(a1, a2, copy_limit);
    printf("a1 = %s\n", a1);

    // Concatenate two character arrays safely, then print.
    copy_limit = MAX_CHARS - strlen(a1); // How much space is left?
    if (copy_limit > 0) strncat(a1, a3, copy_limit);
    printf("a1 = %s\n", a1);

    // Duplicate a string, using my function, then print
    printf("Before dup, pointer a2 = %p, contents = %s\n", a2, a2);
    p2 = mystrdup(a2);
    printf("Pointer p2 = %p, contents = %s\n", p2, p2);

    //Test mystrcat and mystrncat
    printf("\nTesting mystrcat and mystrncat\n");
    char a4[MAX_CHARS + 1];
    mystrcpy(a4, "Testing mystrcpy");
    copy_limit = MAX_CHARS - mystrlen(a4); // How much space is left?
    if (copy_limit > 0) mystrncat(a4, a3, copy_limit);
    printf("a4 = %s\n\n", a4);

    //Test mystrncpy and mystrndup
    printf("Testing mystrncpy and mystrndup\n");
    char a5[MAX_CHARS + 1];
    mystrncpy(a5, "This is a long string that won't fit", MAX_CHARS);
    printf("a5 (too long to fit) = %s\n", a5);
    mystrncpy(a5, "This is a long", MAX_CHARS);
    printf("a5 = %s\n", a5);
    char* p3 = mystrndup(a5, 4);
    printf("p3 (copy of a5, truncated to 4 chars) = %s\n", p3);

    //Test struct creation and printing methods
    printf("\nTesting student creation and printing methods.\n");
    Student* s1 = make_student("Jesse Pinkman", 2, 3.5);
    Student* s2 = make_student("Saul Goodman", 4, 4.0);
    Student* s3 = make_student("Walter White", 5, 2.0);
    Student* s4 = make_random_student();

    printf("Printing premade students\n");
    print_student(s1);
    print_student(s2);
    print_student(s3);

    printf("Printing random students\n");
    print_student(s4);

    Student** s5 = make_random_student_n(10);
    printf("Printing random student array\n");
    print_student_n(s5, 10);

    Student** s6 = student_arr_dup(s5, 10);
    printf("Printing duplicate student array\n");
    print_student_n(s6, 10);

    return 0;
}

