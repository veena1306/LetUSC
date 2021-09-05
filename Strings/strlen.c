#include <stdio.h>
#include <string.h>

int my_strlen(char* s)
{
    int count = 0;
   while(*s != '\0' )
   {
    count++;
    *s++;
   }
   return count;
}

int main()
{
  char str[] = "i am from meerut";
  printf("%d",my_strlen(str));
}


