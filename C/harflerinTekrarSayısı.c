#include <stdio.h>

int main() {
    char dizi[100];
    int kucukHarf[26] = {0};
    
    char harf;
    
    printf("Cumle ya da metin giriniz:\n");
    gets(dizi);
    
    int i = 0;
    
    while(dizi[i])
    {
        if(dizi[i] >= 'a' && dizi[i] <= 'z')
        {
            kucukHarf[dizi[i] - 'a']++;
        }
        i++;
    }
    
    for(i = 0;i < 26;i++)
    {
        if(kucukHarf[i] >0)
        {
            printf("%c=> %d\n",i+ 'a',kucukHarf[i]);
        }
    }
}
