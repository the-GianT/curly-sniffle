#include <string.h>
#include <unistd.h>
#include <stdlib.h>
// #include <stdio.h>

char ** parse_args(char * line)
{
  char **retstr = malloc(100 * sizeof(char));
  int i = 0;
  while (line && i < 99) {
    retstr[i] = strsep( &line, " ");
    i++;
  }
  retstr[i] = NULL;
  return retstr;
}

int main()
{
  // char line[100] = "wow-this-is-cool";
  char line[] = "ls -a -l";
  char *s1 = line;

  char ** args = parse_args(line);
  execvp(args[0], args);

  /*
  printf("Test out strsep:\n");
  printf("\"%s\"\n", strsep(&s1, "-"));
  printf("\"%s\"\n", s1);
  printf("\"%s\"\n", strsep(&s1, "z"));
  printf("\"%s\"\n", s1);
  */

  return 0;
}
