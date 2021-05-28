#include <stdlib.h> 
#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int counter = 0;
  int last = atoi(argv[1]);
  for (p = environ; *p != NULL && counter < last; p++) {
    printf("%s\n", *p); 
    counter++;
  }
}