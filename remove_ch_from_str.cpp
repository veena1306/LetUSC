/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

char *remove(char *str, char ch)
{
    for(int i = 0; i < strlen(str); i++)
    {
	    	if(str[i] == ch)  
		    {
			    for(int j = i; str[j] != '\0'; j++)
			    {
				    str[j] = str[j + 1];
			    }
	    	}
    	
    }
}

int main()
{
    cout<<"Hello World";
    char str[] = "veena";
    char ch = 'n';
    remove(str,ch);
    cout << str << endl;
    return 0;
}
