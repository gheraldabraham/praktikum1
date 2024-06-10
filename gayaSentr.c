/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : gayaSentr.c
   Deskripsi    : Menghitung dan menampilkan hasil dari Gaya Sentral
*/


#include<stdio.h>

int main()
{
    //Kamus
    int m,v,r;
    float F;

    //Algoritma
    printf("Masukkan : \n");
    printf("m = ");
    scanf("%d",&m);
    printf("v = ");
    scanf("%d",&v);
    printf("r = ");
    scanf("%d",&r);

    F = m*(v*v/r);
    printf("F = %.2f \n", F);
    printf("Jadi gaya sentripetalnya adalah %.2f",F);

    return 0;
}
