#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    int i;
    int j;
    int N;

    printf("Masukan Batas : ");
    scanf("%d",&N);

    i=1;
    while(i<=N)
    {
        j=2;
        while(j<=i*2)
        {
            printf("%d ", j);
        j+=2;
        }
        j=(i-1)*2;
        while(j>=2)
        {
        printf("%d ",j);
        j-=2;
        }
    i++;
    printf("\n");
    }
    return 0;
}
