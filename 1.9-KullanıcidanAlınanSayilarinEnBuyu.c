// ! 1.9 ---> Kullanıcıdan alınan sayıların(en fazla 50 tane) en büyüğünü ve elemalarının ortalmasını bulup yazdıran program (kullanıcı değer olarak 0 girdiğinde eleman alma işlemi biter)
#include <stdio.h>

int main()
{
    int i ,j = 0;
    float sayilar[50], toplam=0, sayi, Bsayi;
    printf("\nEn buyuk sayiyi ve ortalama bulmak icin once sayilari teker teker giriniz ve sayilar bittiinde '0' tuslayiniz.. \n");

    // Dizi elemanlarını dolduruyoruz 0 girilene kadar değer girilebilir çünkü sayilar kümesini 50 girdim çok.
    for (i = 0; i < 50; i++)
    {
        printf("%d. Elemani giriniz: " , i+1);
        scanf("%f", &sayi);

        if (sayi == 0){
            break ; // Döngü biter
        }
        sayilar[i] = sayi;
        //printf("%d.Dizi elemani %d olarak atanmistir\n", i+1 , sayi); Diyebiliriz ancak karışık olur
    }

    //Burada bi hiç eleman girilmemişse diye bir sorgulama yapalım eğer hiçbir eleman girilmezse i 1 diye çıkar
    if (i==0)
    {
        printf("\n!!! Hicbir deer girmeden 0 basarsaniz neyi hesaplayacam usta Tekrar dene bakaem !!! \n ");
        main();
    }
    else{
        printf("\n********** Dizi doldurma islemi bitmistir ... **********\n\n");
        toplam += Bsayi = sayilar[j];
        for (j = 1; j < i ; j++)
        {
            toplam += sayilar[j];
            if (sayilar[j] > Bsayi)
                Bsayi = sayilar[j];
        }
        printf("%d Elemanli girdiiniz dizinin ortalamasi %.2f'dir. Saygilar\n" , i , toplam/i);
        printf("%d Elemanli girdiiniz dizinin en buyuk elemani %.2f'dir. Saygilar" , i, Bsayi);
    }
    return 0;
}