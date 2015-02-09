#ifndef STRUCTHELPER_H
#define STRUCTHELPER_H

typedef struct {
    char* name; ///< The student's name.
    int grade; ///< The student's grade.
    float gpa; ///< The student's current GPA.
} Student; ///< A struct for holding information about a student.

Student* make_student(char* name, int grade, float gpa);
void print_student(Student* s);

#endif

