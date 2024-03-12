// ! 2.6 ---> İstenilen (max50) elemanlık bir integar dizisi kullanıcı tarafından oluşturulan ve iki fonksiyondan gelen değerleriyazdıran bir main fonksiyonu oluşturulacak. Bu fonksiyonlar dizideki 4' bölünen eleman sayısını ve diğeri diziyi ters çevirecek. Kolay gelsin Güzel insan :)

#include <stdio.h>
#include <string.h>
#define MAX 50

void tersCevir(int *p,int boyut){
    int i,gecici;
    for (i = 0; i < (boyut/2) ; i++)
    {
        gecici = p[i];
        p[i] = p[boyut-1-i];
        p[boyut-1-i] = gecici;
    }
}
int sorgula4(int *p,int boyut){
    int i,sayi=0;
    for (i = 0; i < boyut ; i++)
    {
        if (p[i] % 4 == 0)
            sayi++;
    }
    return sayi;
}

int main(){
    
    //int dizi[] = {9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1 ,0} ;

    //KAÇ ELEMALI DİZİ İSTER
    int dizi[MAX] ,elemans;
    printf("Kac elemanli bir dizi giriceksiniz (Max50): ");
    scanf("%d" , &elemans);


    //DİZİ ELEMANLARINI GİRER
    for (int i = 0; i < elemans; i++)
    {
        printf("Dizinin %d. elemanini giriniz: " , i+1);
        scanf("%d" ,&dizi[i]);
    }
    

    //GİRİLEN DİZİ YAZDIRILR
    printf("*** Olusturulan dizi: ");
    for (int j = 0; j < elemans; j++)
    {
        printf("%d " , dizi[j]);
    }


    //4'bölünenler sayısını yazdırılır:
    printf("\n*** Dizide ki 4'e bolunen %d tane sayi vardir. " ,sorgula4(dizi,elemans));

    //DİZİ TERS ÇEVİRİLİR
    tersCevir(dizi,elemans);

    printf(" \n*** Ters Dizi:  ");
    //TERS DİZİ YAZDIRILIR
    for (int j = 0; j < elemans; j++)
    {
        printf("%d " , dizi[j]);
    }
    return 0;
}