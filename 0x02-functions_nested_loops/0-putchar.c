#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  *
  * Decsription: prints _putchar and a new line.
  *
  * Return:Always 0.
  */

int main(void){
	char c[8]="_putchar";
	int i=0;
	while(i<8){
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
