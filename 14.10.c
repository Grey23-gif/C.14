#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() 
{
    int lap[1000];
    char ky_tu[256];
    int dem=0;
    char str[]={"xin chao tat ca moi nguoi"};
     for (int i = 0; str[i] != '\0'; i++) 
     {
        int found = 0; 
        for (int j = 0; j < dem; j++) 
        {
            if (ky_tu[j] == str[i]) 
            {
                lap[j]++;
                found = 1;
                break;
            }
        }
        if (!found) 
        { 
            ky_tu[dem] = str[i];
            lap[dem] = 1;
            dem++;
        }
    }
     printf("Ky tu va so lan xuat hien:\n");
    for (int i = 0; i < dem; i++) {
        printf("'%c': %d\n", ky_tu[i], lap[i]);
    }
    return 0;
}
