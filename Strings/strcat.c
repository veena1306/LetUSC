#include <stdio.h>
#include <string.h>

char* my_strcat(char* s1, char* s2)
{
    
    char *start = s1;
    
    while(*start != '\0')
    {
       start++;
    }
    
    while(*s2 != '\0')
    {
        *start++ = *s2++;
    }
    *start = '\0';
    return start;
}

int main()
{
  char str[] = "i am from meerut";
  char str1[] = "pune";
  my_strcat(str,str1);
  printf("%s",str);
    
}


//i am from meerutpune
