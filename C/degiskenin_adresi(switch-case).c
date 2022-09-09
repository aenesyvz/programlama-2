#include <stdio.h>
void islem_gerceklestir(char op,float sayi1,float sayi2,float *sonuc)
{
    switch(op)
    {
        case '+':
            *sonuc = sayi1 + sayi2;
            break;
        case '-':
            *sonuc = sayi1 - sayi2;
            break;
        case '*':
            *sonuc = sayi1 * sayi2;
            break;
        case '/':
            *sonuc = sayi1 / sayi2;
            break;
    }
}

int main() {
    char op;
    float sayi1,sayi2;
    float sonuc;
    
    printf("Lutfen matematiksel operatoru giriniz: ");
    scanf("%c",&op);
    
    printf("Ilk sayiyi giriniz: ");
    scanf("%f",&sayi1);
    
    printf("Ikinci sayiyi giriniz: ");
    scanf("%f",&sayi2);
    
    islem_gerceklestir(op,sayi1,sayi2,&sonuc);
    
    printf("%.2f %c %.2f = %.2f",sayi1,op,sayi2,sonuc);
}
  
