#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define INPUT_SIZE 10

bool check_vowel( char arg )
{
  char a = 'a';
  char e = 'e';
  char i = 'i';
  char o = 'o';
  char u = 'u';

  if( arg == a || arg == e || arg == i || arg == o || arg == u ){
    return 1;
  } else {
    return 0;
  }
}

int main( int argc, char *argv[] )
{
  char word[] = {};
  char quit[] = "exit";

  while( strncmp(word, quit, 4) )
  {
    puts( "Enter a word" );

    fgets( word, INPUT_SIZE, stdin  );
    for( int i = 0; i <  strlen(word)-1; i++ )
    {
      if( check_vowel( word[i]) )
      {
        printf( "This is a vowel: %c\n", word[i] );
      }
      else{
        printf( "%c\n", word[i] );
      }
    }
  }

  return 0;
}
