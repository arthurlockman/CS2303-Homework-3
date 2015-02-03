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
    strcpy(newstr, src);
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
    const char* char_next;
    char_next = s;
    while (*char_next != '\0')
    {
        ++char_next;
    }
    return char_next - s;
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
    const char* char_next;
    char_next = src;
    while(*char_next != '\0')
    {
        *dst = *char_next;
        ++char_next;
        ++dst;
    }
    *dst = *char_next;
    return dst;
}

