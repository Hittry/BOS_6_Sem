#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int counter = 0;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    counter += 1;
  printf("Number of environment variables: %d\n", counter);
}