#include <stdio.h>

int main()
{
    int n, tek = 0, cift = 0;
    printf("Sayi Giriniz = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cift += i;
        }
        else
        {
            tek += i;
        }
    }
    printf("Tek = %d\n", tek  );
    printf("Cift = %d", cift);
    return 0;
}