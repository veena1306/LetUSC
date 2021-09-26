/******************************************************************************

                            Online C Debugger.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Debug" button to debug program.

*******************************************************************************/

#include <stdio.h>

int func(unsigned int n, int i )
{
    if((n & (1 << i)) == 0)
    {
      printf("bit is not set");
    } else {
        printf("bit is set");
    }
    
    printf("%u",(1 << i));       // 0  0 1 0  0 0 1 0 
}

int main()
{
    printf("Hello World");
     int i = 5;
    unsigned int num = 0x34;  //  0 0 1 1
    func(num,i);
    return 0;
}
