/*
NAMA   : M. FADLI ZEIN
KELAS  : TK 1 B
NO BP  : 1601081035
NP     : ARRAY 1\
*/

#include <stdio.h>
void main()
{
    int nilai[10];
    int max,imax,i;
    float total;
    printf("MASUKAN NILAI "); scanf("%d",&nilai[0]);
    jum=nilai[];
    for(i=1; i<10; i++)
    {
        printf("MASUKAN NILAI "); scanf("%d",&nilai[i]);
        if(nilai[i]>max)
        {
            max=nilai[i];
            imax=i;
        }
    }
    for(i=0; i<9; i++)
    {
        jum=jum+nilai[i];
    }
    printf("NILAI MAX : %d\n",max);
    printf("LETAK : %d\n",imax);
    printf("JUMLAH : %.2f",total);
}
