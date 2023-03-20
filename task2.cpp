#include <stdio.h>
int main(){

    int i,j,r;
    int count[10]={0};
    printf ("input 6 angka : ");
    scanf ("%d",&i);
    
    while ( i != 0){
      count [i % 10]++;
      i /= 10;
    }
    for(j=9;j>=0;j--)
    for(i = 0;i<count[j];i++)
    r = r*10+j;
    printf ("hasilnya adalah : %d",r);
   
}