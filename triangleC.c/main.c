#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    int i;
    int j;
    int coun;
    int nilai;
    int batas;

    printf("Masukkan batas : ");
    scanf("%d",&batas);

    coun=0;

    i=1;
    while(i<=batas)
    {
     nilai=(i&1)?(coun+1):(coun+i);

     j=1;
     while(j<=i)
     {
        printf("%d ",nilai);
        if(i&1)
        {
            nilai++;
        }
        else
        {
            nilai--;
        }

        j++ ;
        coun++;
     }
     printf("\n");
     i++;
    }
    return 0;
}
