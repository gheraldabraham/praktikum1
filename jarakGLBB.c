/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : jarakGLBB.c
   Deskripsi    : Menghitung dan menampilkan hasil dari Gaya Lurus Berubah Beraturan
*/

#include<stdio.h>

int main() {
    //Kamus
    int v0,t,a;
    float s;

    //Algoritma
    printf("Masukkan \n");
    printf("v0 = ");
    scanf("%d",&v0);
    printf("t = ");
    scanf("%d",&t);
    printf("a = ");
    scanf("%d",&a);

    s = v0*t*(a*t*t/2);
    printf("s = %.2f \n", s);
    printf("Jadi jarak GLBBnya adalah %.2f", s);

    return 0;
}
