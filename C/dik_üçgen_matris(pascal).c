#include <stdio.h>
#define A 100

void matris_olustur(int matris[A][A],int satir)
{
	int i,j;
    for(i = 0;i < satir;i++)
    {
        matris[i][i] = 1;
        matris[i][0] = 1;
        
        for( j = 1;j <i;j++)
        {
            matris[i][j] = matris[i-1][j] + matris[i-1][j-1];
        }
    }
}

void matris_yazdir(int matris[A][A],int satir)
{
	int i,j;
    printf("p ");
    for( i = 0;i < satir;i++)
    {
        printf("%4d",i);
    }
    
    printf("\nn\n--");
    
    for( i = 0;i < satir;i++)
    {
        printf("----");
    }
    
    for( i = 0; i < satir;i++)
    {
        printf("\n%d-",i);
        
        for( j = 0;j <= i;j++)
        {
            printf("%4d",matris[i][j]);
        }
        
    }
}
int main() {
    int satir;
    int matris[A][A];
    
    printf("Kac satir olsun: ");
    scanf("%d",&satir);
    
    matris_olustur(matris,satir);
    matris_yazdir(matris,satir);
}
  
