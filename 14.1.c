#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];  
    printf("Nhap vao 1 chuoi bat ki: ");
    fgets(str, sizeof(str), stdin); 
    printf(" Chuoi ban vua nhap la: %s", str);
    int leng=strlen(str);
    if (leng > 0 && str[leng - 1] == '\n') 
    {
        str[leng- 1] = '\0';
        leng--; 
    }
    printf("Do dai cua chuoi la: %d",leng);

    return 0;
}
