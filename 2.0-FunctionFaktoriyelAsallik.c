// ! 2.0 ---> Verilen bir sayının hem faktöriyelini hem de asallık durumunu kontrol edip yazdıran program ancak programın çok uzun olmaması için 2 fonksiyona ayırmalısın faktöriyel ve asallık sorgulayan 2 fonksiyon.. Kolay gelsin
#include <stdio.h>

unsigned int factoriyelci(int a){
    unsigned int sonuc = 1; //Unsigned da ki amacım biraz daha büyük sayıları almak unsigned(cizgisiz '-')
    for (unsigned int i = 1; i <= a; i++)
    {
        sonuc *=i;
    }
    return sonuc;
}

int asalmi(int b){
    int sayac = 0;
    
    for (int i = 2; i <= b; i++) //Sadece kendisine bölünmesini istiyorum yani 1 değeri olursa asaldır
    {
        if (b % i == 0)
        {
            sayac++;
        }
        else{
            continue;
        }
    }
    return sayac;
}


int main(){
    int sayi;

    printf("/-/-/-/-/-/-/-/- Faktoriyel Hesaplama ve Asallik Sorgumalama /-/-/-/-/-/-/-/-/\n");
    printf("Sayi Nedir? ");
    scanf("%d" , &sayi);
    
    
    // Tabiki fonksiyonun içinde de return 0 veya 1 diye alabilriz yani sayaçsız bir şekilde  yapabilirizz.
    if (sayi>0)
    {
        if (asalmi(sayi) == 1)
        {
            printf("\n\n%d sayisinin faktoriyeli = %d'dir...\n" , sayi , factoriyelci(sayi));
            printf("%d Sayisi asaldir..." , sayi);
        }
        else{
            printf("\n\n%d sayisinin faktoriyeli = %d'dir...\n" , sayi , factoriyelci(sayi));
            printf("%d Sayisi asal deildir...", sayi);
        }
    }

    else if (sayi == 0)
    {
        printf("\n\n%d sayisinin faktoriyeli = 0'dir...\n", sayi);
        printf("%d Sayisi asal deildir...", sayi);
    }

    printf("\n*Program Bitti. Iyi gunler");
    return 0;
}