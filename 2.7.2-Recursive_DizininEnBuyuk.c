#include <stdio.h>
// Gönderilen bir dizinin en büyük elemanını bulup döndüren bir recursive fonksiyon: 

// Static olarak tanımlandılar
int size;
int max = -1;
int i = 0;

int bulbuyuk(int a[])
{
    if (i < size)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        i++;
        bulbuyuk(a);
    }
    return (max);
}

int main(){
    printf("Kac elemanli dizi gireceksiniz: ");
    scanf("%d", &size);

    int dizi[size];
    for (int i = 0; i < size; i++)
    {
        printf("dizi[%d] : ", i+1);
        scanf("%d", &dizi[i]);
    }
    printf("En buyuk eleman : %d", bulbuyuk(dizi));    printf("En buyuk eleman : %d", bulbuyuk(dizi));
    
    return 0;
}