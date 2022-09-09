#include <stdio.h>
#include <math.h>

void bas_bul(int sayi,int *bas)
{
  int a = sayi;
  int b = 0;

  while(a>0)
  {
    a = a / 10;
    b++;
  }
  *bas = b;
  
}

void ters(int sayi,int bas,int *sonuc)
{
  int t = pow(10,bas - 1);
  int toplam = 0;
  while(t>0)
  {
    toplam += (sayi % 10) * t;
    sayi = sayi / 10;
    t = t/10;
  }
  *sonuc = toplam;
}

int main(void) {
  int sayi;
  int bas;
  int sonuc;

  printf("Sayi gir: ");
  scanf("%d",&sayi);

  bas_bul(sayi,&bas);
  

  ters(sayi,bas,&sonuc);
  printf("Yeni sayi: %d",sonuc);
}
