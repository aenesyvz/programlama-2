#include <stdio.h>

int main() {
    int dizi1[100];
    int dizi2[100];
    
    int *p1,*p2;
    int n,m;
    
    printf("Ilk dizi icin kac eleman gireceksiniz: ");
    scanf("%d",&n);
    
    for(p1 = dizi1;p1 < dizi1 + n;p1++)
    {
        printf("Sayi gir: ");
        scanf("%d",p1);
    }
    
    printf("Ikinci dizi icin kac eleman gireceksiniz: ");
    scanf("%d",&m);
    
    for(p2 = dizi2;p2 < dizi2 + m;p2++)
    {
        printf("Sayi gir: ");
        scanf("%d",p2);
    }
    
    printf("\nIlk dizinin orijinal hali\n");
    
    for(p1 = dizi1;p1 < dizi1 + n;p1++)
    {
        printf("%2d",*p1);
    }
    
    printf("\nIkinci dizinin orijinal hali\n");
    
    for(p2 = dizi2;p2 < dizi2 + m;p2++)
    {
        printf("%2d",*p2);
    }
    
    for(p1 = dizi1 + n,p2 = dizi2;p2 < dizi2 + m;p1++,p2++)
    {
        *p1 = *p2;
    }
    
    printf("\nIki dizinin birlestirilmis hali\n");
    
    for(p1 = dizi1;p1 < dizi1 + n+ m;p1++)
    {
        printf("%2d",*p1);
    }
}
  
