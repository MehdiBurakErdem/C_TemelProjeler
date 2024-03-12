// ! 2.5 ---> Ratgele A B C D E ve boşluk karakterlini içeren 10*10 bir optik oluşturmanı istiyorum, kolay gelsin
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char optik[10][10];
    
    long t= time(NULL);
    srand(t);
    
    // Oluşturma
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
        {
            int sayi = rand()%6;
            if (sayi == 0)
            {
                optik[i][j] = 'A';
            }
            else if(sayi == 1)
            {
                optik[i][j] = 'B';
            }
            else if(sayi == 2)
            {
                optik[i][j] = 'C';
            }
            else if(sayi == 3)
            {
                optik[i][j] = 'D';
            }
            else if(sayi == 4)
            {
                optik[i][j] = 'E';
            }
            else{
                optik[i][j] = ' ';
            }
        }
    }

    //Yazdırma 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c", optik[i][j]);
        }
        printf("\n");
    }
    return 0;
    }  