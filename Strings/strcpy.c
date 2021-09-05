#include <stdio.h>
#include <string.h>

char* my_strcpy(char* dest, char* src)
{
    char *ptr = dest;
    while(*src != '\0')
    {
        *dest++ = *src++;
    }
     *dest = '\0';
     return ptr;
}

int main()
{
  char str1[] = "veena";
  char str2[] = "chauhan";

  printf("%s\n", my_strcpy(str1, str2));
}


