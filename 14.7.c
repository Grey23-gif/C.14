#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() 
{
    char str[]={"Xin chao tat ca moi nguoi 123 @m%2?"};
    int dem=0,dem1=0,dem2=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(isalpha(str[i]))
        {
            dem++;
        }
        if(isdigit(str[i]))
        {
            dem1++;
        }
        if(str[i]==' ')
        {
            dem2++;
        }
        
    }
    int dem3=strlen(str)-dem2-dem1-dem;
    printf("So luong chu cai trong chuoi la: %d",dem);
    printf("\nSo luong chu so trong chuoi la: %d",dem1 );
    printf("\nSo luong ki tu dac biet trong chuoi la: %d",dem3);
    return 0;
}
