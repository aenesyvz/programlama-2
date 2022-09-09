#include <stdio.h>

int main() {
    char dizi[100];
    char *p1;
    
    printf("Metin giriniz: ");
    gets(dizi);
    
    for(p1 = dizi;*p1;p1++);
    
    printf("Girdiginiz metinin karakter boyu %d",p1-dizi);
}
