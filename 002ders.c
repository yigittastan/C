#include <stdio.h>

int main()
{
   

    int sayi1, sayi2, sayi3;
    printf("Lutfen sirasi ile sayilari girin bu girilen sayilarin arasindan en kucuk ve buyugu bulma programi\n");
    printf("Sayi1 = ");
    scanf("%d", &sayi1);
    printf("Sayi2 = ");
    scanf("%d", &sayi2);
    printf("Sayi3 = ");
    scanf("%d", &sayi3);
    if (sayi1 <= sayi2 && sayi1 <= sayi3)
    {
        printf("En kucuk: %d\n", sayi1);
    }
    else if (sayi2 <= sayi1 && sayi2 <= sayi3)
    {
        printf("En kucuk: %d\n", sayi2);
    }
    else
    {
        printf("En kucuk: %d\n", sayi3);
    }

    if (sayi1 >= sayi2 && sayi1 >= sayi3)
    {
        printf("En buyuk: %d\n", sayi1);
    }
    else if (sayi2 >= sayi1 && sayi2 >= sayi3)
    {
        printf("En buyuk: %d\n", sayi2);
    }
    else
    {
        printf("En buyuk: %d\n", sayi3);
    }
    return 0;
}
