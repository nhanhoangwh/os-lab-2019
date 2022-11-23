#include "swap.h"

void Swap( char *left, char *right)
{
    char c;
    c=*left;
    *left=*right;
    *right=c;

}

// компиляция программы в терминале gcc main.c swap.c -o swap 
// main.c и swap.c программы, которые нужно скомпилировать 
// swap название для скомпилированной программы
// запуск программы ./swap