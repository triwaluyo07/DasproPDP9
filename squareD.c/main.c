#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas : 4103
///Nim  : A11.2017.10097
int main()
{
    int input;
    int e;
    int f;
    int g;

    printf("Masukkan Batas Baris & kolom : ");
    scanf("%d",&input);

    e=1;
    while(e<=input)
    {
        f=1;
        while(f<=input)
        {
        if((e==1 || e==input) && (f==1 || f==input))
        {
            printf("0");
        }
        else if((e==1 || e==input) || (f==1 || f==input))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
         f++;
        }
        printf("\n");
     e++;
    }

    return 0;
}
