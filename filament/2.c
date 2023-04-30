//3. Write C program to remove spaces, blanks from a string.

#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int  i,k=0;
     printf("Enter  the string : ");
    gets(s);
    
 
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
 
     	
     	if(s[i]==' '|| s[i]=='\t')
     	{
		  k++;
		  i--;
	    }
     	
    }
    printf("string after removing all blank spaces:");
 
 	 printf("%s",s);
 	 
     
    return 0;
}