#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int dem=0;
    char str[]={"1 2 3 Xin chao tat ca moi nguoi dang co mat"};
    
    for(int i=0;i<strlen(str);i++)
    {
        if(isalpha(str[i]))
        {
        dem++;
        }
    }   
    printf("Trong chuoi co %d chu cai",dem);
    return 0;
}
