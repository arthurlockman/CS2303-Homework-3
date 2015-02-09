#ifndef STRUCTHELPER_H
#define STRUCTHELPER_H

typedef struct {
    char* name;
    int grade;
    float gpa;
} Student;

Student* make_student(char* name, int grade, float gpa);
void print_student(Student* s);

#endif

