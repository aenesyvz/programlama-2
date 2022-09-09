#include <stdio.h>

int main() {
    int matris[100][100];
    int sayi,i,j;
    printf("n x n carpim tablosu icin n kac olsun: ");
    scanf("%d",&sayi);
    
    
    printf("I");
    
    for(i = 1;i <= sayi;i++)
    {
        printf("%3d",i);
    }
    
    printf("\n-");
    for(i = 1;i <= sayi;i++)
    {
        printf("---");
    }
    
    for(i = 1;i <= sayi;i++)
    {
        printf("\n%d",i);
        for( j = 1;j <= sayi;j++)
        {
            printf("%3d",i*j);
        }
    }
}
