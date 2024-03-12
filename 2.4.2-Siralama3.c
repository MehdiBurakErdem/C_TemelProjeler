// ! 2.4 ---> Sıralama algoritmaları önemlidir farklı olanları da deneyebilirsiniz. (Burada Eklemeli SIRALAMA yazabilirsiniz)

#include <stdio.h>
#define MAX 50

                //Daha açıklayıcı tanımlara ve görsellere ulaşmalısınız    Insertıon Sort  (Eklemeli)  // 2 1 5 4 0 sıra sıra her elemanın üzerinden geçip bir önceki elemanların hangisinden küçükse onun olduğu yere eklemek istiyoruz bu elemanı 2 1 5 4 0 mesela 1 aldık 2 den küçük 2 1 5 4 0 bura da 1 2 olan kısım sıralı diğerleri değil 5 aldık yerinde kaldı 4 aldık ondan küçük bir önceki elemana var bir önceki elamnın index numarasanı sahip oldu ve aradakilerin indexi bir arttı son olarka 1 2 4 5 0 da 0 aldık öncekilere tek tek baktık ve 1 den de küçük bu yuzden 0ın olduğu indexe kadar ki elemanların indexini bir artırıp 0 [0] koyduk                   
void siralama(int sayi[], int size){

    // sayi[2,1,4,5,6]
    int gecicisayi,i ,j,l,index;
    for (i = 0; i < size; i++)
    {
        for (j = i; j >= 0; j--)
        {
            gecicisayi = sayi[i];
            // bu sayıdan küçük en küçük indexliyi buluyoruz
            if (gecicisayi <= sayi[j])
            {
                index = j;
            }
        }
        int hafiza = index;
        // en küçüğün olduğu indexten sorguladığımız sayının indexine kadar her birini bir artırıyoruz
        for (; index < i ; i--)
        {
            sayi[i] = sayi[i-1];
        }
        
        sayi[hafiza] = gecicisayi;
    }
    printf("Dizi Elemanlari sirasi ile\n");
    for (l = 0; l < size; l++)
    {
        printf(" %d ", sayi[l]);
    }
 
}
            //            AYNI KISIM                         //

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