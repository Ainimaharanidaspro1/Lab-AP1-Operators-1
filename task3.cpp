#include <stdio.h>
int main(){

    int i,a,hasil;
    
    printf ("input 4 angka : ");
    scanf ("%d",&i);
    
    while ( i > 0){
        a = i% 10;
        i = i /10;
        hasil = hasil + a;
    }
    printf ("hasilnya adalah : %d",hasil);
   
}