#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    int a=0,e=0,i=0,o=0,u=0;
    int x=0;
    printf("Please enter the string you wang to counts.\n");
    scanf("%s",str);
    for(x;str[x]!='\0';x++)
    {

        switch (str[x])
        {
            case 'a' : a++;break;
            case 'e' : e++;break;
            case 'i' : i++;break;
            case 'o' : o++;break;
            case 'u' : u++;break;
        }
    }

   printf("The number of vowels in this string is %d,and the number of a,e,i,o,u was %d %d %d %d %d",a+e+i+o+u,a,e,i,o,u);

}
