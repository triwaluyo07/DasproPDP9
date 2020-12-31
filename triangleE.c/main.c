#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    int batas;
    int x;
    int y;
    int z;
    int angka;

    printf("Masukkan batas baris : ");
    scanf("%d",&batas);

    for(x=1;x<=batas;x++)
    {
        y=x;
        for(angka=batas;angka>=x;angka--)
        {
            if(x%2==0)
            {
                z=y;
                printf("%d ",z);
                y++;
            }
            else
            {
                z=y*y;
                printf("%d ",z);
                y++;
            }
        }
        printf("\n");
    }
    return 0;
}
