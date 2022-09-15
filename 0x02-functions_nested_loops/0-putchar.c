#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  *
  * Decsription: prints _putchar and a new line.
  *
  * Return:Always 0.
  */
 int main(void)
 {
         char *c = "_putchar";

         while (*c)
         {
                 _putchar(*c);
                 c++;
         }
         _putchar('\n');
 return (0);
 }
