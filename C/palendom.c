#include <stdio.h>

int main() {
    char cumle[100];
    char *p1,*p2;
    int kontrol = 1;
    
    printf("Cumle girin: ");
    gets(cumle);
    
    for(p2 = cumle;*p2;p2++);
    p2--;
    
    for(p1 = cumle;p1 < p2 ;p1++,p2--)
    {
        if(*p1 != *p2)
        {
            kontrol = 0;
            break;
        }
    }
    
    if(kontrol)
    {
        printf("Girdiginiz metin palendomdur!");
    }
    else
    {
        printf("Girdiginiz metin palendom degildir!");
    }
}
