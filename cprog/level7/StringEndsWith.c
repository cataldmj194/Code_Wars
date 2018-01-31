#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{ 
  size_t ls = strlen(string); // find length of string
  size_t lt = strlen(ending); // find length of ending
  if (ls >= lt)  // check if ending can fit in string
     return (0 == memcmp(ending, string + (ls - lt), lt));
  return 0; // t was longer than s
}
