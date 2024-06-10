/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : luasKellLayang.c
   Deskripsi    : Menghitung dan menampilkan hasil dari luas dan keliling layang
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    //Kamus
    int s1,s2,d1,d2;
    float luas,Kell;

    //Algoritma
    printf("Masukkan : \n");
    printf("s1 = ");
    scanf("%d",&s1);
    printf("s2 = ");
    scanf("%d",&s2);
    printf("d1 = ");
    scanf("%d",&d1);
    printf("d2 = ");
    scanf("%d",&d2);

    luas = 0.5*d1*d2;
    printf("luas = %.2f \n",luas);

    Kell = 2*(s1+s2);
    printf("Kell = %.2f \n",Kell);

    printf("Jadi luas layang-layang adalah %.2f \n",&luas);
    printf("Jadi Keliling layang-layang adalah %.2f",&Kell);

    return 0;
}
