#include <stdio.h>
#include <string.h>

int my_strcmp(char* s1, char* s2)
{
    int charCompareStatus = 0;
    while(*s1 == *s2)
    {
      s1++;
      s2++;
    }
   //return(*s1-*s2);
    charCompareStatus = (*s1 ==*s2)?0:(*s1 >*s2)?1:-1;

}

int main()
{
  int ret = 0;
  ret = my_strcmp("abc","cba");
  printf("%d",ret);
}


