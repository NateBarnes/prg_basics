#include <stdio.h>

int main(int argc, char *argv[])
{
  char initial = 'R';
  char first[] = "Nathanial";
  char last[] = "Barnes";

  printf("My first name is %s\n", first);
  printf("My middle initial is %c\n", initial);
  printf("My last name is %s\n", last);
  printf("My whole name is %s %c %s\n", first, initial, last);
  
  return 0;
}