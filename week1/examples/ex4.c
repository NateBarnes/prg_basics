#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 2, 13, 19, 20};
  char name[] = "Nate";
  char full_name[] = {'N','a','t','e',' ','B','a','r','n','e','s','\0'};
  
  printf( "The size of an int: %ld\n", sizeof(int));
  printf( "The size of areas: %ld\n", sizeof(areas));
  printf( "The number of areas: %ld\n", sizeof(areas)/sizeof(int));
  
  printf( "The size of a char: %ld\n", sizeof(char));
  printf( "The size of name: %ld\n", sizeof(name));
  printf( "The number of chars in name %ld\n", sizeof(name)/sizeof(char));
  
  printf( "The size of full name %ld\n", sizeof(full_name));
  printf( "The number of chars in full name %ld\n", sizeof(full_name)/sizeof(char));
  
  printf( "My full name is %s\n", full_name );
  
  return 0;
}