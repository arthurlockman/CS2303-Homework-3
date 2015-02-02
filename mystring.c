/** mystring.c
 * @author Mike Ciaraldi
 * My own versions of some of the C-style string functions
*/
#include <string.h>
#include <stdlib.h>
// stdlib.h is needed to use malloc()
#include "mystring.h"

/** Duplicate a character string.
 * @param src String to be duplicated.
 * @return Pointer to a newly-allocated block of memory, into which 
 *         the original string has been copied. When no longer needed,
 *         this block can be released with the free() function.
 *         Returns null if memory cannot be allocated.
 */

char* mystrdup(const char* src) {
  int length; // Length of the source string
  char* newstr; // Pointer to memory which will hold new string

  length = strlen(src) + 1;  // Leave space for the terminator
  newstr = (char*) malloc(length); // Must cast!

  // If no memory was available, return immediately
  if (newstr == 0) return (char *) 0;

  // Otherwise, copy the string and return pointer to new string
  strcpy(newstr, src);
  return newstr;
}
