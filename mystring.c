/** mystring.c
 * @author Mike Ciaraldi
 * My own versions of some of the C-style string functions
*/
#include "mystring.h"

/** Duplicate a character string.
 * @param src String to be duplicated.
 * @return Pointer to a newly-allocated block of memory, into which
 *         the original string has been copied. When no longer needed,
 *         this block can be released with the free() function.
 *         Returns null if memory cannot be allocated.
 */

char* mystrdup(const char* src)
{
    int length; // Length of the source string
    char* newstr; // Pointer to memory which will hold new string

    length = mystrlen(src) + 1;  // Leave space for the terminator
    newstr = (char*) malloc(length); // Must cast!

    // If no memory was available, return immediately
    if (newstr == 0) return (char *) 0;

    // Otherwise, copy the string and return pointer to new string
    mystrcpy(newstr, src);
    return newstr;
}

/**
 * @brief Finds the length of a null terminated string.
 *
 * @param s The string to size.
 *
 * @return The length of the string.
 */
size_t mystrlen(const char* s)
{
    const char* i;
    for (i = s; ; ++s) if (*s == '\0') return s - i;
}

/**
 * @brief Copy one string to another.
 *
 * @param dst The destination string. This will be overwritten by the source.
 * @param src The source string.
 *
 * @return The destination string (pointer).
 */
char* mystrcpy(char * dst, const char * src)
{
    char* orig_dst = dst;
    const char* char_next;
    char_next = src;
    while (*char_next != '\0')
    {
        *dst = *char_next;
        ++char_next;
        ++dst;
    }
    *dst = *char_next;
    return orig_dst;
}

/**
 * @brief Concatenate two strings, and add the first n characters
 * of the source to the end of the destination. Also will add a null
 * terminator at the end of the destination string.
 *
 * @param destination The destination of the concatenation.
 * @param source The source to add to the end of the destination.
 * @param num The number of characters to add.
 *
 * @return A pointer to the destination.
 */
char* mystrncat(char* destination, const char* source, size_t num)
{
    char* dst = destination;
    while (*destination != '\0') ++destination;
    int i;
    for (i = 0; i < num; i++)
    {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
    return dst;
}

/**
 * @brief Concatenate two strings. Appends the characters from source
 * to the destination, and adds a null-terminator at the end.
 *
 * @param destination The destination for the concatenation.
 * @param source The source to add to the destination.
 *
 * @return A pointer to the destination.
 */
char* mystrcat(char* destination, const char* source)
{
    char* dst = destination;
    while (*destination != '\0') ++destination;
    while (*source != '\0')
    {
        *destination = *source;
        ++source;
        ++destination;
    }
    *destination = '\0';
    return dst;
}

/**
 * @brief Copies a string from one to another with a specified
 * limit on how many chacters can be copied. This ensures that
 * copying a string can't run off the stack and overwrite something
 * else in memory. NOTE: if the source is longer than the num
 * parameter, then the string will not be implicitly null-terminated.
 *
 * @param destination The destination string.
 * @param source The source string.
 * @param num The number of chacters to copy.
 *
 * @return A pointer to the destination.
 */
char* mystrncpy(char* destination, const char* source, size_t num)
{
    char* dst = destination;
    size_t i;
    for (i = 0; i < num; i++)
    {
        *destination = *source;
        if (*source != '\0')
            ++source;
        ++destination;
    }
    return dst;
}

/**
 * @brief Performs a deep copy on a string into a new block
 * of memory. Leaves the original intact. Returns a pointer to 
 * the new block of memory containing the copied string.
 *
 * @param s The string to duplicate.
 * @param n The number of characters to copy.
 *
 * @return A pointer to the deep copied string.
 */
char* mystrndup(const char *s, size_t n)
{
    char* newstr;
    newstr = (char*) malloc(n + 1);

    if (newstr == 0) return (char*)0;

    mystrncpy(newstr, s, n);
    if (newstr[(int)n] != '\0') newstr[(int)n] = '\0';
    return newstr;
}

