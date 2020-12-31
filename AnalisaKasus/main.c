#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    int jawab;
    int i;
    int lagi;
    int Benar;


    for(i = 1; i < 11; i++)
    {
    printf(" %d + %d = ?", i , i);
    scanf("%d", &jawab);
        if(jawab == i + i)
        {
            printf("Benar!\n");
        }

        else
        {
        printf("Salah.\n");
        printf("Coba Lagi.\n");
        Benar = 0;


/* nested for */

            for(lagi = 0; lagi < 3 && !Benar; lagi++)
            {
            printf(" %d + %d = ? ", i, i);
            scanf("%d", &jawab);
                if(jawab == i + i)
                {
                printf("Benar!\n");
                Benar = 1;
                }
            }
        }

/* Jika jawaban masih Salah, beri tau user */
        if(!Benar)
        {
        printf("Jawabnya adalah %d.\n", i + i);
        }

    }
return 0;
}

