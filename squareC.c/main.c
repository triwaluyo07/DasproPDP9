#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas : 4103
///Nim  : A11.2017.10097

int main()
{
    int input;
    int inputx;
    int e;
    int f;
    int g;

    printf("Masukkan Batas Baris & kolom : ");
    scanf("%d",&input);

    inputx=(input+1)/2;

    e=1;
    while(e<=input)
    {
        f=1;
        while(f<=input)
        {
        if(inputx==f || inputx==e)
        {
            printf("0");
        }
        else if((input%2 == 0 && inputx + 1 == f)||(input%2 == 0 && inputx + 1 == e))
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
         f++;
        }
        printf("\n");
     e++;
    }
    return 0;
}
