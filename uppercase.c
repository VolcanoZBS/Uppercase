#include <stdio.h>
#include <string.h>
#include "cs50.h"
#include <ctype.h>

// Easy version for upper case is : 
// for (int i = 0, n = strlen(s); i < n; i++)
// {
//    printf("%c", toupper(s[i]));
// }

int main(void)
{
  string s = get_string("Before: ");
  printf("After: \n");
  for (int i = 0; i < strlen(s); i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      printf("%c", s[i] - 32);
    }
    else 
    {
      printf("%c", s[i]);
    }
  }
  printf("\n");
}