#include <stdlib.h>
#include <string.h>
char* printerError(char *s) {
    int numErrors = 0;
    int count = 0;
    char *frac = malloc(sizeof(char));

    for(; *s; s++,count++)
      if(*s < 97 || *s > 109)
        numErrors++;
  
    sprintf(frac,"%d/%d",numErrors,count);
    return frac;
}
