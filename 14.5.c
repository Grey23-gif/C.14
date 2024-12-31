#include <stdio.h>
#include <string.h>

int main()
{
    int dem=0;
    char str[]={"Xin chao tat ca moi nguoi"};
    
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i] == ' ')
        {
        dem++;
        }
    }   
    printf("Trong chuoi co %d tu",dem+1);
    return 0;
}
