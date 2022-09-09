#include <stdio.h>
#include <stdlib.h>
int main() {
    int dizi[100];
    int n;
    int gecici,*p1,*p2;
    
    printf("Kac elemanli bir dizi gireceksiniz: ");
    scanf("%d",&n);
    
    for(p1 = dizi;p1 < dizi + n;p1++)
    {
        printf("Sayi gir: ");
        scanf("%d",p1);
    }
    
    printf("Dizinin orijinal hali\n");
    for(p1 = dizi;p1 < dizi + n;p1++)
    {
        printf("%2d",*p1);
    }
    
    for(p1 = dizi,p2 = dizi + n - 1; p1 < p2;p1++,p2--)
    {
        gecici = *p1;
        *p1 = *p2;
        *p2 = gecici;
    }
    
    printf("\nDizinin ters hali\n");
    for(p1 = dizi;p1 < dizi + n;p1++)
    {
        printf("%2d",*p1);
    }
    
}
