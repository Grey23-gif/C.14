#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000];
    char str[]={"abcd"};
    printf("Nhap vao 1 chuoi: ");
    fgets(arr,1000,stdin);
    

    fflush(stdin);
    for(int i=0;i<strlen(str);i++)
    {
        int dem=0;
       for(int j=0;j<strlen(arr);j++)
       {
           if(str[i]==arr[j])
           {
               dem++;
           }
       }
       printf("\nSo lan xuat hien cua ki tu %c la: %d ",str[i],dem);
    }
    return 0;
}
