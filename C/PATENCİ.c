#include <stdio.h>
struct YarismaciTip{
    char ad[15],soyad[10];
    int puan[5],performans;
};
int puanHesapla(struct YarismaciTip p)
{
    int toplam = 0;
    int j;
    for(j = 0;j<5;j++)
    {
        toplam += p.puan[j];
    }
    return toplam;
}

void sirala(struct YarismaciTip p[],int n)
{
    int sira = 1;
    int i,j;
    struct YarismaciTip gecici;
    for(i = 0;i<n-1;i++)
    {
        for(j = i + 1;j < n;j++)
        {
            if(p[i].performans < p[j].performans)
            {
                gecici = p[i];
                p[i] = p[j];
                p[j] = gecici;
            }
        }
    }
}

void listele(struct YarismaciTip p[],int n)
{
	int i;
    for(i = 0;i< n;i++)
    {
        printf("\n----------------------\n");
        printf("AD: %s",p[i].ad);
        printf("\nSOYAD: %s",p[i].soyad);
        printf("\nTOPLAM PUAN: %d",p[i].performans);
    }
}

int main() {
    struct YarismaciTip patenci[100];
    int i,j,sayi;
    char satir;
    printf("Kac patenci var: ");
    scanf("%d",&sayi);
    
    for(i = 0;i< sayi;i++)
    {
        printf("AD: ");
        scanf("%s",&patenci[i].ad);
        
        printf("SOYAD: ");
        scanf("%s",&patenci[i].soyad);
        
        scanf("%c",&satir);
        
        printf("Hakem puanlarini giriniz\n");
        
        for(j = 0;j<5;j++)
        {
            printf("Puan %d: ",j+ 1);
            scanf("%d",&patenci[i].puan[j]);
            scanf("%c",&satir);
        }
        patenci[i].performans = puanHesapla(patenci[i]);
    }
    sirala(patenci,sayi);
    listele(patenci,sayi);
}
