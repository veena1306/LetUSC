//The substr() function returns the substring of a given string between two given indices.
// It returns the substring of the source string starting at the position m and ending at position n-1 . The time complexity of above functions is O(n – m).



#include <stdio.h>
#include <string.h>

char* substr(char* destination, char* source, int beg, int n)
{
   while(n > 0 )
   {
        *(destination) = *(source+beg);
          destination++;
          source++;
          n--;
   }
   destination = '\0';
   return destination;
}

int main()
{
  char src[] = "i am from meerut";
  char dest[25];
  int start = 7;
  int len = 7;
  substr(dest, src, start, len);
  printf("%s",dest);
}


//output : om meerut
