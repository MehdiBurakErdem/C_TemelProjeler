// ! 2.3 ---> Verilen sayının 8 bit şeklinde binary karşılıgını veren fonksiyon yaz  ++Zoru
#include <stdio.h>

int power(int taban, int üs)
{
    int sayi = 1;

    for (int i = 0; i < üs; i++)
    {
        sayi *= taban;
    }
    return (sayi);
}

void write_binary(int a)
{
    int i = 7;
    printf("%d = ", a); 
    while (i >= 0)
    {
        if (a / power(2,i) == 1)
        {
            a = a % power(2,i);
            printf("1");
        }
        else
        {
            printf("0");
        }
        i--;
    }
    printf("\n");
}

int main()
{
    int a;
    do
    {
        printf("Sayiyi giriniz [0 - 255]: ");
        scanf("%d", &a);
    } 
    while (a > 255 || a < 0);
    write_binary(a);
    return 0;
}

//128 64 32 16 8 4 2 1 = 255