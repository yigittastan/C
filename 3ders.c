#include <stdio.h>

int main()
{
    int sayi1, sayi2, islem, topla, cikar, bol, carp;
    printf("Lutfen hesap makinesinden istediginiz islemi seciniz sirasi ile yaziniz 1 topla 2 cikar 3 bol 4 carp\n");
    printf("islem = ");
    scanf("%d", &islem);
    printf("Sayi 1 giriniz ");
    scanf("%d", &sayi1);
    printf("Sayi 2 giriniz ");
    scanf("%d", &sayi2);
    switch (islem)
    {
    case 1:
        topla = sayi1 + sayi2;
        printf("Sonuc %d", topla);
        break;

    case 2:
        cikar = sayi1 - sayi2;
        printf("Sonuc %d", cikar);
        break;

    case 3:
        bol = sayi1 / sayi2;
        printf("Sonuc %d", bol);
        break;

    case 4:
        carp = sayi1 * sayi2;
        printf("Sonuc %d", carp);
        break;

    default:
        printf("Hatalı Seçim");
    }
}