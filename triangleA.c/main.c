#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas : 4103;
/// Nim : A11.2017.10097
int main()
{
    int batas;
    int a;
    int b;
    int c=1;

    printf("Masukkan batas baris : ");
    scanf("%d",&batas);

    for(a=1;a<=batas;a++)
    {
        for(b=1;b<=c;b++)
        {
            printf("%d",b);
        }
        c+=2;
        printf("\n");
    }
    return 0;
}
