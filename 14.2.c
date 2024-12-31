#include <stdio.h>
#include <string.h>

int main()
{
    char str[]={'a','b','c','d'};
    for(int i=0;i<strlen(str);i++)
    {
        printf(" %c",str[i]);
    }
    return 0;
}
