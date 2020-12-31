#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    int cek;
    int prima;
    int i;
    int batas;
    int j;
    int k;
    int jumlah=0;



       printf("Masukkan angka yg akan di cek = ");
       scanf("%d", &batas);

       printf("Bilangan primanya adalah : \n");
       for (prima=2; prima<batas;prima++)
       {
           cek = 0;
           for (i = 2; i < prima; i++)
            {
                if (prima % i == 0)
                {
                    cek = 1;

                }

            }
                if (cek == 0)
                {
                printf("%d ", prima);
                jumlah+=prima;
                }

       }
       printf("\nJumlah     : %d ",jumlah);
        puts(" ");


    return 0;
}
