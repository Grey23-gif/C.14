#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() 
{
    char str[]={"xin chao tat ca moi nguoi"};
 
    for(int i=0;i<strlen(str);i++)
    {
        str[0]=toupper(str[0]);
        if(str[i]==' ')
        {
            str[i+1]=toupper(str[i+1]);
        }
        
    }
    printf("Chuoi sau khi sua la: %s",str);
    return 0;
}
