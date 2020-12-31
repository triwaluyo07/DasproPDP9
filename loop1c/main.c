#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097
int main()
{
    int angka;
    int angka2;
    int hasil;
    int i;

    for(i=1;i<11;i++)
    {
    printf("Masukkan Angka\t  : ");
    scanf("%d",&angka);

    printf("Masukan Pangkatnya: ");
    scanf("%d",&angka2);

    hasil=ceil(pow(angka,angka2));
    printf("%d pangkat %d = %d\n",angka,angka2,hasil);
    puts(" \n");
    }

    return 0;
}
