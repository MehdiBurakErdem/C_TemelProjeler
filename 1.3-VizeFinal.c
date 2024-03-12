// ! 1.3 ---> Öğrenci numarası verilen, vize(ortalamaya etkisi 40%) ve final(ortalamaya etkisi 60%) notu verilen bir öğrencinin no ve ortalama(tabiki float) yazdıran program yazınız
#include <stdio.h>

int main()
{
    int no, vize, final;
    printf("Ogrenci Numaraniz: ");
    scanf("%d" , &no);

    printf("Vize notunuzu giriniz: ");
    scanf("%d" , &vize);
    
    printf("Final notunuzu giriniz: ");
    scanf("%d" , &final);

    float ort = (vize*0.4) + (final*0.6);

    printf("%d nolu orencinin ortalamasi: %.3f", no , ort);
    
    return 0;
}