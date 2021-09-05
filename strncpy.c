
// copies n no of characters from source to destination string

#include <stdio.h>
#include <string.h>

char* my_strcpy(char* dest, char* src, int n)
{
    char *ptr = dest;

    while(*src != '\0'&& n--)
    {
        *dest++ = *src++;
    }
     *dest = '\0';
     return ptr;
}

int main()
{
  char str1[] = "veena";
  char str2[20];
  
  int n = 2;

  printf("%s\n", my_strcpy(str2, str1, n));
}


// output is 2


















