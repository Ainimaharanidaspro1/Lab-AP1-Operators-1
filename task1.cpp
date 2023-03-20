#include <stdio.h>
int main(){

    int i, hasil;
    printf ("input 4 angka : "); //user memasukkan 4 angka
    scanf ("%d",&i); //untuk mengidentifikasi type data
    
    hasil = ((((i + 8 )/3)% 5)* 5); /* angka yang sudah dimasukkan user akan ditambah dengan 8 lalu dibagi 3 kemudian
    di mod kan dengan 5 lalu di kalikan dengan 5 */
    printf ("hasilnya adalah : %d", hasil); //menampilkan hasil
   
}