#include <stdio.h>
#define AREAS_SIZE 5

int main( int argc, char *argsv[] )
{
  // more sexy
  int areas[ AREAS_SIZE ] = {10, 2, 13, 19, 20};
  for( size_t i = 0; i < AREAS_SIZE; printf( "%d\n", areas[ i ] ), i++ );
  
  
  
  // sexy
  // int areas[] = {10, 2, 13, 19, 20};  
  // for( unsigned int counter = 0, size = sizeof(areas)/sizeof(int); counter < size;  printf( "%d\n", areas[counter] ), counter++ );
  
  
  
  // not so sexy
  // int areas[] = {10, 2, 13, 19, 20};
  // unsigned int counter;
  // 
  // for( counter = 0; counter < sizeof(areas)/sizeof(int); counter++ )
  // {
  //   printf( "%d\n", areas[ counter ] );
  // }
}