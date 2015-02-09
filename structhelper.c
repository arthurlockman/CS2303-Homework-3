#include "structhelper.h"
#include "mystring.h"
#include <stdio.h>

/** 
 * @brief Make a student from provided data.
 * 
 * @param name The name of the student.
 * @param grade The student's grade.
 * @param gpa The student's GPA.
 * 
 * @return A pointer to the newly created student.
 */
Student* make_student(char* name, int grade, float gpa)
{
    Student *s = (Student *)malloc(sizeof(Student));
    s->name = mystrndup(name, mystrlen(name));
    s->grade = grade;
    s->gpa = gpa;
    return s;
}

/** 
 * @brief Prints out a student struct.
 * 
 * @param s A pointer to a student struct.
 */
void print_student(Student* s)
{
    printf("Student %s:\n\tGrade: %d\n\tGPA: %f\n", s->name, s->grade, s->gpa);
}

