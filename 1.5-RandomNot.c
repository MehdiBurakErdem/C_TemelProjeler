// ! 1.5 ---> Random oluşturulan 10 tane notu 1. 2. .. ögrencinin notu şeklinde yazdırıp 10. öğrenciden sonra sınıf ortalamsını yazdıran porogram
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, toplam = 0 , ogrencinotu[10];
    
    long t= time(NULL);
    srand(t);
    
    for (i = 0; i < 10; i++)
    {
        ogrencinotu[i] = ( rand()%100 );
        printf("%d. Ogrencinin notu = %d\n" , i+1 ,ogrencinotu[i] );
        toplam += ogrencinotu[i];
    }
    printf("***SINIF ORTALAMASI: %d" , toplam/10);

    return 0;
}   