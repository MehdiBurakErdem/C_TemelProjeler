#include <stdio.h>
// 5'in katlarını yazdıran ve ortalamsını bulan recursive
 // Anlamadığım şekilde onlne derleyici kodu derleyemiyo ancak gcc ile derlediğim zaman sorun olmuyo // Bir hata veya sebebini biliyorsan bildir lütfen 

int a = 0;

int besin(int baslangic, int bitis)
{
    if (baslangic % 5 == 0 && baslangic < bitis)
    {
        a++;
        return ((baslangic + besin(baslangic + 5, bitis)));
    }
    else if (baslangic < bitis)
        return ((besin(++baslangic,bitis)));
    else if (baslangic < bitis)
        return (baslangic);
    return (0);
}

int main()
{
    printf("Ortalama = %d",besin(90, 100)/a);
    return 0;
}