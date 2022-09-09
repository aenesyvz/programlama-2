#include <stdio.h>
#include <string.h>

int main() {
    char dizi[100];
    char sil;
    char *p1;
    
    printf("Metin giriniz: ");
    gets(dizi);
    
    printf("Silinecek harf: ");
    scanf("%c",&sil);
    
    p1 = dizi;
    
    while(*p1)
    {
        if(*p1 == sil)
        {
            strcpy(p1,p1 + 1);
        }
        else
        {
            p1++;
        }
    }
    printf("Guncel haliyle girdiginiz metin: %s ",dizi);
}
