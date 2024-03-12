#include <stdio.h>
// 5'in kati olan sayıları ayzdıran recursive fonksiyon
 // Anlamadığım şekilde onlne derleyici kodu derleyemiyo ancak gcc ile derlediğim zaman sorun olmuyo // Bir hata veya sebebini biliyorsan bildir lütfen 

void besin(int baslangic, int bitis)
{
    if (baslangic % 5 == 0 && baslangic <= bitis)
    {
        
        printf("%d\n", baslangic);
        besin(baslangic + 5, bitis);
    }
    else if (baslangic <= bitis)
        besin(++baslangic,bitis);
}

int main()
{
    besin(22, 100);
    return 0;
}