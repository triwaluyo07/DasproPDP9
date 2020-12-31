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

    g=1;
    e=1;
    while(e<=input)
    {
        f=1;
        while(f<=input)
        {
        if(g == 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        g*= -1;
         f++;
        }
        if(input%2 == 0)
        {
            g *=-1;
        }
        printf("\n");
     e++;
    }
    return 0;
}
