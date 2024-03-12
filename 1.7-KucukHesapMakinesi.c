// ! 1.7 ---> 2 sayı alınıp kullanıcın isteği üzerine toplama, çıkarma , çarpma ve bölme yapabilen programı yazınız(Bölmede kalan istiyoruz ve bölme kurallarına dikkat ediniz) 
#include <stdio.h>

int main()
{
    int sayi1 , sayi2, islem, sonuc=0;

    printf("1. Sayiyi Giriniz: ");
    scanf("%d" , &sayi1);

    printf("2. Sayiyi Giriniz: ");
    scanf("%d" , &sayi2);

    printf("Yapmak istediiniz islemi tuslayin:\nToplama ise : 1\nCikarma ise : 2\nCarpma ise : 3\nBolme ise : 4\n**Islem= ");
    scanf("%d" , &islem);

    // Sayıları aldık ve ne işlem yapmak istediğini de biliyoruz şimdi yapmak istediği işlemi okut ve işlemi yap

    if (islem == 1)
    {
        sonuc = sayi1 + sayi2;
        printf("Toplama isleminin sonucu = %d" , sonuc);
    }

    else if(islem == 2)
    {
        sonuc = sayi1 + -sayi2;
        printf("Cikarma isleminin sonucu = %d" , sonuc);
    }

    else if(islem == 3)
    {
        printf("Carpma isleminin sonucu: %d", sayi1 * sayi2);
    }

    else if (islem == 4)
    {
        if (sayi2 != 0)
        {
            sonuc = sayi1 / sayi2;
            int kalan = sayi1 % sayi2;
            printf("Bolme islemi\nBolum = %d\nKalan = %d", sonuc, kalan);
        }
        else{
            printf("Tanimsiz olduunu biliyorsundur umarim HATA!!!");
        }
    }

    else{
        printf("Boyle bir islem tanimlanmamis. HATA!!");
    }
    return 0;
}