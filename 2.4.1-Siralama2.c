// ! 2.4 ---> Sıralama algoritmaları önemlidir farklı olanları da deneyebilirsiniz. (Burada SEÇİLMİŞ SIRALAMA yazabilirsiniz)

#include <stdio.h>
#define MAX 50

                //            SELECTİON SORT (SEÇİLMİŞ SIRALAMA)        // 4 2 3 1 burada 4 alıyoruz ve her eleam için sorguluyoruz birden küçük hangisi sonra küçük index alıp devam en küçük indexliyi bulup mesela bizim örneğimizde sayi[3] = 1 olduğu için 0. elemanla yer değiştiriyoruz ve : 1 2 3 4 oluyor sonra sayi[1] en küçük atayıp devam ke              
void siralama(int sayi[], int size){

    int kucukindex, i ,l,gecici;


    for (l = 0; l < size; l++)
    {
        kucukindex = l;
        for (i = l; i < size ; i++)
        {
            if ( sayi[kucukindex] > sayi[i])
            {
                kucukindex = i;
            }
        }
        gecici = sayi[l];
        sayi[l] = sayi[kucukindex];
        sayi[kucukindex] = gecici;
    }

    printf("Dizi Elemanlari sirasi ile\n");
    for (l = 0; l < size; l++)
    {
        printf(" %d ", sayi[l]);
    }

 
}
                //            AYNI KISIM                               //

int main(){
    int boyut, dizi[MAX]; 
    printf("Kac elemanli sayi yazacaksiniz: ");
    scanf("%d", &boyut);

    for (int i = 0; i < boyut; i++)
    {
        printf("Lutfen %d. sayiyi giriniz: ", i+1);
        scanf("%d" , &dizi[i]);
    }
    
    siralama(dizi, boyut);
    return 0;
}