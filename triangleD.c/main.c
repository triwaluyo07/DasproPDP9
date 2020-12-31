#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
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
        f=e;
        while(f<=input)
        {
         printf("%d", f);
         f++;
        }
     printf("\n");
     e++;


    }

    return 0;
}
