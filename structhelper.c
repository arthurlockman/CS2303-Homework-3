#include "structhelper.h"

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

/** 
 * @brief Creates a student filled with random data. 
 * 
 * @return A student struct filled with randomly generated data.
 */
Student* make_random_student()
{
    Student* rand_student = (Student *)malloc(sizeof(Student));
    char* rand_name = make_random_string(10);
    rand_student->name = mystrndup(rand_name, mystrlen(rand_name));
    rand_student->grade = get_random_int_range(1, 12);
    rand_student->gpa = (int)get_random_int_range(1, 4);
    return rand_student;
}

/** 
 * @brief Gets a random string of specified length.
 * Returns a string that contains only the capital;
 * letters A-Z.
 *
 * @param length The length of the random string.
 * 
 * @return A pointer to the random string.
 */
char* make_random_string(size_t length)
{
    char* rand_str = (char *)malloc(length + 1);
    size_t i;
    for (i = 0; i < length; i++)
    {
        *(rand_str + i) = get_random_char();
    }
    *(rand_str + length) = '\0';
    return rand_str;
}

/** 
 * @brief Gets a random character from A-Z. 
 * 
 * @return The random character.
 */
char get_random_char()
{
    double randd = (double)rand() / RAND_MAX;
    return (char)(26*randd + 65);
}

/** 
 * @brief Gets a random integer in a range.
 * 
 * @param min The minimum of the range. 
 * @param max The maximum of the range.
 * 
 * @return The random number.
 */
int get_random_int_range(int min, int max)
{
    double randd = (double)rand() / RAND_MAX;
    return (max - min + 1) * randd + min;
}

/** 
 * @brief Make an array of random students with a given size.
 * 
 * @param n The number of random students to generate.
 * 
 * @return A pointer to the array of random students.
 */
Student** make_random_student_n(size_t n)
{
    Student** student_arr = (Student **)malloc(n * sizeof(Student*));
    size_t i;
    for (i = 0; i < n; i++)
    {
        student_arr[i] = make_random_student();
    }
    return student_arr;
}

/** 
 * @brief Prints an array of students.
 * 
 * @param s_arr The array to print.
 * @param count The number of students in the array.
 */
void print_student_n(Student** s_arr, size_t count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        print_student(s_arr[i]);
    }
}

/** 
 * @brief Shallow copy an array of students.
 * 
 * @param source The source array.
 * @param count A count of the elements in the array.
 * 
 * @return The copied array.
 */
Student** student_arr_dup(Student** source, size_t count)
{
    //Copy array.
    Student** student_arr = (Student **)malloc(count * sizeof(Student*));
    size_t i;
    for (i = 0; i < count; i++)
    {
        student_arr[i] = source[i];
    }
    return student_arr;
}

