#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    int i;
    int angka;
    int k;

    printf("Masukkan Angka  : ");
    scanf("%d",&angka);

    printf("Faktornya ialah : \n");
    for(i=1;i<=angka;i++)
    {
        if((angka%i)==0)
        {
            k=0;
            k=k+1;
            printf("%d ",i);
        }

    }



    return 0;
}
