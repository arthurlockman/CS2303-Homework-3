#ifndef STRUCTHELPER_H
#define STRUCTHELPER_H

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

#endif

