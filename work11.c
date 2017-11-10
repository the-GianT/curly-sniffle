#include <stdio.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line)
{
  char *retstr[100];
  int i = 0;
  while (line) {
    retstr[i] = strsep( &line, " ");
    i++;
  }
  retstr[i] = NULL;
  return retstr;
}

int main()
{
  char line[100] = "wow-this-is-cool";
  char *s1 = line;

  printf("Test out strsep:\n");
  printf("\"%s\"\n", strsep(&s1, "-"));
  printf("\"%s\"\n", s1);
  printf("\"%s\"\n", strsep(&s1, "z"));
  printf("\"%s\"\n", s1);

  return 0;
}
