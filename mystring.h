/** mystring.h
 * @author Mike Ciaraldi
 * My own versions of some of the C-style string functions
*/
#include <stdlib.h>
#include <string.h>

char* mystrdup(const char* src);
size_t mystrlen(const char* s);
char* mystrcpy(char * dst, const char * src);

