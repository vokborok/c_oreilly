#include <stdio.h>
#include "encrypt.h"

void encrypt(char* message)
{
  char c;
  while (*message)
  {
    printf("Before %c and %d\n", *message, *message);
    *message = *message ^ 17;
    printf("After %c and %d\n", *message, *message);
    message++;
  }
}