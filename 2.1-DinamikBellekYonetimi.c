// ! 2.1 ---> Kullaıcı tarafından oluşturulan bir not dizisinin(Dizi oluşturmadan ortalamayı hesaplamayacaksınız amac malloc kullanımı) ortalamasını bulan programı yapınız (Kaç elemanlı olduğunu kullanıcı ve elemanlarının kullanıcı tarafından girilecek)(MALLOC)
#include <stdio.h>
#include <stdlib.h> //malloc

int main()
{
    int n;
    int toplam=0;
    printf("Kac ogrencinin notunu gireceksiniz: ");
    scanf("%d", &n);
    int* arr = malloc(n*sizeof(int)); // n*4bayt kadar yer açıp bu açılan yerin ilk adresinin 'arr' pointerın içine yazar. Yer alır bu sayede bellek de ne fazla ne eksik yer kaplarız.

    // Notları alıyoruz
    for (int i = 0; i < n; i++)
    {
        printf("%d. Ogrencinin notu: ", i + 1);
        scanf("%d",&arr[i]);
    }
    
    // Notları topluyoruz
    for (int i = 0; i < n; i++)
    {
        toplam +=arr[i];
    }

    printf("%d Ogrenciden olusan sinifin ortalamsi: %d'dir.", n, (toplam/n));

    //Bellekte açılan yeri artık serbest bırakıyoruz
    free(arr);
    return 0;
}