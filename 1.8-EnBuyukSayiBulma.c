// ! 1.8 ---> Sizin tarafınızdan oluşturulan 7 elemanlı int dizinin kullanıcıdan onay aldıktan sonra en büyük eleamanını bulup yazdıran program
#include <stdio.h>

int main()
{
    int i, onay, sayilar[] = {26, 45, 13 , -45 , 58 , 6 , 72};
    i = 0;
    printf("Onay icin 1'e basiniz... ");
    scanf("%d" , &onay);
    
    int buyuksayi = sayilar[i++];
    if (onay == 1)
    {
        printf("\\_ Onay _/\n");
        while(i < 7)
        {
            if (sayilar[i] > buyuksayi)
            {
                buyuksayi = sayilar[i];
            }
            i++;
        }
        printf("En buyuk sayi = %d" , buyuksayi);
    }
    else{
        printf("Onay alinamadi.");
    }
    return 0;
}