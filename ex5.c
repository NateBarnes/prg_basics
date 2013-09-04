#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 2, 13, 19, 20};
  char name[] = "Myron";
  char full_name[] = {'N','a','t','e',' ','B','a','r','n','e','s','\0'};

  printf( "My name is %s\n", name );
  printf( "My full name is %s\n", full_name );
  
  printf( "%c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4] );
  
  return 0;
}