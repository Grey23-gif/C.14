#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() 
{
    int vitri;
    char str[]={"xin chao"};
    printf("xin chao");
    printf("\nNhap vi tri can xoa: ");
    scanf("%d",&vitri);
 
    for(int i=vitri;i<strlen(str);i++)
    {
        str[i]=str[i+1];
    }
    printf("Chuoi sau khi sua la: %s",str);
    return 0;
}
