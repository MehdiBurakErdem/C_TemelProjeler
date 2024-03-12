// ! 2.4 ---> Sıralama algoritmaları önemlidir kesinlikle araştırın birkaç yöntemlerden birkaçını deneyin. (Burada Kabbarcık sıralaması yazabilirsiniz)

#include <stdio.h>
#define MAX 50
                //             BUBBLE SORT (KABARCIK SIRALAMA)   HER ZAMANA BİR SONRAKİ ELEMAN İLE KARŞILAŞTIRMA YAPILIR VE BÜYÜKSE YER DEĞİŞTİRİLİR   2 3 1 5 4   2 3 KALDI 3 1 YER DEĞİŞTİ 2 1 3 5 4 SONRA 3 5 KALDI 5 4 YER DEĞİŞİR 2 1 3 4 5 İLE EN SAĞDA Kİ ELEMAN EN BÜYÜK OLUR VE 5 ELEMAN DEĞİL DE 4 ELEMANA KADAR GİDERİZ        //
void siralama(int sayi[], int size){

    for (int i = (size-1); i >= 0; i--)
    {
        for (int j = 0; j < i ; j++)
        {
            if (sayi[j] > sayi[j+1])
            {
                int gecici = sayi [j];
                sayi[j] = sayi[j+1];
                sayi[j+1] = gecici;
            }
        }
    }
    printf("Dizi Elemanlari sirasi ile\n");
    for (int l = 0; l < size; l++)
    {
        printf(" %d ", sayi[l]);
    }
}

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