#include <stdio.h>

void recursivePrint ( int count )
{
  if ( count > 0 )
  {
    printf( "Hello World!\n" );
    count = count - 1;
    recursivePrint( count );
  }
}

int main ( int argc, char *argv[] ) 
{
  int count;

  if ( argc == 2 ) 
  {
    count = atoi( argv[1] );
    recursivePrint( count );
  }

}

