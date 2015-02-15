#include <iostream.h>
#include <stdio.h> 
#include <limits.h> 
#include <stdlib.h> 
#include <windows.h> 

int main ()
{
  short esc = 0;

  while ( !esc ) {
    esc = GetAsyncKeyState ( VK_ESCAPE );

    if ( GetAsyncKeyState ( VK_UP ) & SHRT_MAX )
      cout<<"Up arrow is pressed";
    else if ( GetAsyncKeyState ( VK_DOWN ) & SHRT_MAX )
      puts ( "Down arrow is pressed" );
    else if ( GetAsyncKeyState ( VK_LEFT ) & SHRT_MAX )
      puts ( "Left arrow is pressed" );
    else if ( GetAsyncKeyState ( VK_RIGHT ) & SHRT_MAX )
      puts ( "Right arrow is pressed" );
  }

  return EXIT_SUCCESS;
}
