#include <stdio.h>

int main() {
    int dizi[100];
    int *p1;
    
    int n;
    printf("Kac sayi gireceksiniz: ");
    scanf("%d",&n);
    
    for(p1 = dizi;p1 < dizi + n;p1++)
    {
        printf("Sayi: ");
        scanf("%d",p1);
    }
    
    int max,min;
    max = min = dizi[0];
    
    for(p1 = dizi + 1 ;p1 < dizi + n;p1++)
    {
        if(max < *p1)
        {
            max = *p1;
        }
        if(*p1 < min)
        {
            min = *p1;
        }
    }
    printf("MAX=> %d\n",max);
    printf("MIN=> %d\n",min);
}
  
