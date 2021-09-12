/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

char *remove(char *str)
{
    for(int i = 0; i < strlen(str); i++)
    {
	    for(int j = i + 1; str[j] != '\0'; j++)
    	{
	    	if(str[j] == str[i])  
		    {
			    for(int k = j; str[k] != '\0'; k++)
			    {
				    str[k] = str[k + 1];
			    }
	    	}
    	}
    }
}

int main()
{
    cout<<"Hello World";
    char str[] = "veena";
    char ch = 'n';
    remove(str);
    cout << str << endl;
    return 0;
}
