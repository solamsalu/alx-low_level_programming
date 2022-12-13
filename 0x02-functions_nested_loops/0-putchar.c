#include "main.h"
/**
 *main - prints _putchar, followed by a new lines
 *Return: always 0 (Success)
 */
int main(void)
{
  char sol[] = "_putchar";

  int c;
  
  for (c=0; c<8;c++)
    {

      _putchar(sol[c]);
      
    }
  _putchar('\n');
  return(0);
}


