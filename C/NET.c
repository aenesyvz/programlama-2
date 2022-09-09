#include <stdio.h>
struct OgrenciTip{
    char ad[15],soyad[10];
    char cevap[4];
    float net;
};

void listele(struct OgrenciTip ogr[],int n)
{
    struct OgrenciTip gecici;
    int i,j;
    for(i = 0;i<n-1;i++)
    {
        for(j = i + 1 ;j <n;j++)
        {
            if(ogr[i].net < ogr[j].net)
            {
                gecici = ogr[i];
                ogr[i] = ogr[j];
                ogr[j] = gecici;
            }
        }
    }
}

void yazdir(struct OgrenciTip ogr[],int n)
{
	int i;
    for(i = 0;i< n;i++)
    {
        printf("\n----------------\n");
        printf("AD: %s",ogr[i].ad);
        printf("\nSOYAD: %s",ogr[i].soyad);
        printf("\nNET: %.2f",ogr[i].net);
    }
}

int main() {
    struct OgrenciTip ogrenci[100];
    
    char satir,anahtar[4];
    int sayi,i,j;
    float dogru,yanlis;
    printf("Kac ogrenci var: ");
    scanf("%d",&sayi);
    
    printf("Cevap anahtarini giriniz\n");
    
    for(j = 0;j<4;j++)
    {
        scanf("%c",&satir);
        scanf("%c",&anahtar[j]);
    }

    for(i = 0;i<sayi;i++)
    {
        printf("AD: ");
        scanf("%s",&ogrenci[i].ad);
        
        printf("SOYAD: ");
        scanf("%s",&ogrenci[i].soyad);
        
        printf("Ogrencinin cevaplarini giriniz\n");
        
        scanf("%c",&satir);
        
        dogru = yanlis = 0.0;
        
        for(j = 0;j<4;j++)
        {
            scanf("%c",&ogrenci[i].cevap[j]);
            
            if (ogrenci[i].cevap[j] == anahtar[j])
            {
                dogru++;
            }
            else if (ogrenci[i].cevap[j] != anahtar[j])
            {
                yanlis++;
            }
            scanf("%c",&satir);
        }
        ogrenci[i].net = dogru - (yanlis / 4);
    }
    listele(ogrenci,sayi);
    yazdir(ogrenci,sayi);
}
