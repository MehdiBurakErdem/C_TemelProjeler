// ! 1.0 ---> İnt olarak bir sayı (3 basamaklı) alıp bunu ve tersini yazdıran program, eğer 3 basamaklı girmezse hata verip tekrar isteyin
#include <stdio.h>

int main()
{
    int sayi;

    printf("Lutfen tersten yazdirmak istediiniz 3 basamakli sayiyi giriniz: ");
    scanf("%d" , &sayi);

    if (sayi/100 >= 1 && sayi/100 <= 9)
    {
        int yuzluk = sayi/100;
        int onluk = (sayi % 100) / 10;
        int birlik = sayi % 10;
        printf("%d Sayisinin tersi : %d%d%d\n" ,sayi,birlik,onluk,yuzluk);
    }
    else{
        printf("!!! 3 basamakli !!!\n");
        main();
    }
    return 0;
}