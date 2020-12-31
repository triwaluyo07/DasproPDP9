#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{

    int nilai1=0;
    int nilai2=1;
    int nilai3;
    int banyak;



    printf("Input batas deret fibbonanci = ");
    scanf("%d",&banyak);

    printf("%d, ",nilai1);
    printf("%d, ",nilai2);

    for(nilai3=0;nilai3<banyak;nilai3++)
    {
        nilai3=nilai1+nilai2;
        nilai1=nilai2;
        nilai2=nilai3;

        if(nilai3<banyak)
        {
            printf("%d, ",nilai3);
        }
    }
    printf(" \n");

    return 0;
}
