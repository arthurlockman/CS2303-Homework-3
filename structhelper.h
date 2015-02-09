#ifndef STRUCTHELPER_H
#define STRUCTHELPER_H
#include <stdint.h>
#include "mystring.h"
#include <stdio.h>

/** 
 * @brief A struct used for holding information about a student.
 */
typedef struct {
    char* name; ///< The student's name.
    int grade; ///< The student's grade.
    float gpa; ///< The student's current GPA.
} Student;

Student* make_student(char* name, int grade, float gpa);
void print_student(Student* s);
Student* make_random_student();
char* make_random_string(size_t length);
char get_random_char();
int get_random_int_range(int min, int max);
Student** make_random_student_n(size_t n);
void print_student_n(Student** s_arr, size_t count);
Student** student_arr_dup(Student** source, size_t count);
void free_student_arr(Student** s_arr, size_t count);
Student** deep_copy_student_arr(Student** s_arr, size_t count);

#endif

