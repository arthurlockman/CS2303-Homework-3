# CS2303-Homework-3
Homework 3 for WPI CS2303.

##Compiling
To compile, simply change into the directory of the project and type:

    make

To remove previously built objects, in the project directory run:

    make clean

To make the doxygen folder in public_html, simply run the following command:

    make docs

##Programs

This assignment required the creation of one program which lived inside ctest.c.

###ctest.c

To run ctest, simply compile the project and run the following in the project directory. A sample of output is also included below.

    user@computer:~/cs2303assig3$ ./ctest
    Pointers: a1 = 0x7fff5aff3b80, a2 = 0x7fff5aff3b16, a3 = 0x7fff5aff3b60
              p1 = 0x104c0dc80 p2 = 0x10
    a1 = Hi
    a2 = Hello
    a3 = Hello, also
    a1 = HiHello
    a1 = HiHelloHello
    a1 = HiHelloHelloHello, a
    Before dup, pointer a2 = 0x7fff5aff3b16, contents = Hello
    Pointer p2 = 0x7ff1fac00080, contents = Hello
    
    Testing mystrcat and mystrncat
    a4 = Testing mystrcpyHell
    
    Testing mystrncpy and mystrndup
    a5 (too long to fit) = This is a long strinÿ
    a5 = This is a long
    p3 (copy of a5, truncated to 4 chars) = This
    
    Testing student creation and printing methods.
    Printing premade students
    Student Jesse Pinkman:
            Grade: 2
            GPA: 3.500000
    Student Saul Goodman:
            Grade: 4
            GPA: 4.000000
    Student Walter White:
            Grade: 5
            GPA: 2.000000
    Printing random students
    Student NDIBXZSRGD:
            Grade: 6
            GPA: 3.000000
    Printing random student array
    Student UOUASMOPBC:
            Grade: 7
            GPA: 4.000000
    Student AYWLRAYHIQ:
            Grade: 9
            GPA: 3.000000
    Student PAOFKNZFWB:
            Grade: 6
            GPA: 4.000000
    Student KZMZRCRMEE:
            Grade: 11
            GPA: 2.000000
    Student HIZMISABLV:
            Grade: 1
            GPA: 3.000000
    Student TNUGDDYXEC:
            Grade: 4
            GPA: 3.000000
    Student DCHVXQYSIF:
            Grade: 11
            GPA: 4.000000
    Student FYKEHQXEPO:
            Grade: 1
            GPA: 3.000000
    Student OBZPXTTMLH:
            Grade: 5
            GPA: 2.000000
    Student XIJFRRNQXA:
            Grade: 9
            GPA: 1.000000
    Printing duplicate student array
    Student UOUASMOPBC:
            Grade: 7
            GPA: 4.000000
    Student AYWLRAYHIQ:
            Grade: 9
            GPA: 3.000000
    Student PAOFKNZFWB:
            Grade: 6
            GPA: 4.000000
    Student KZMZRCRMEE:
            Grade: 11
            GPA: 2.000000
    Student HIZMISABLV:
            Grade: 1
            GPA: 3.000000
    Student TNUGDDYXEC:
            Grade: 4
            GPA: 3.000000
    Student DCHVXQYSIF:
            Grade: 11
            GPA: 4.000000
    Student FYKEHQXEPO:
            Grade: 1
            GPA: 3.000000
    Student OBZPXTTMLH:
            Grade: 5
            GPA: 2.000000
    Student XIJFRRNQXA:
            Grade: 9
            GPA: 1.000000
    Printing deep copied student array.
    Student UOUASMOPBC:
            Grade: 7
            GPA: 4.000000
    Student AYWLRAYHIQ:
            Grade: 9
            GPA: 3.000000
    Student PAOFKNZFWB:
            Grade: 6
            GPA: 4.000000
    Student KZMZRCRMEE:
            Grade: 11
            GPA: 2.000000
    Student HIZMISABLV:
            Grade: 1
            GPA: 3.000000
    Student TNUGDDYXEC:
            Grade: 4
            GPA: 3.000000
    Student DCHVXQYSIF:
            Grade: 11
            GPA: 4.000000
    Student FYKEHQXEPO:
            Grade: 1
            GPA: 3.000000
    Student OBZPXTTMLH:
            Grade: 5
            GPA: 2.000000
    Student XIJFRRNQXA:
            Grade: 9
            GPA: 1.000000
    
    Printing emptied pointer in s6[0] and s6[8]: 0x0, 0x0

This program provides a complete test of all functions created for this assignment. To learn more about the functions in the project, go to http://users.wpi.edu/~ajlockman/cs2303assig3/ and read the function documentation for this homework assignment. 
