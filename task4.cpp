#include <iostream>
#include <iomanip> //supaya bisa menjalankan setw dan setfill
using namespace std;
int main(){
    int angka,i,j,k,l,m,n;
    cout <<"masukkan angka : "; //user memasukkan angka
    cin>>angka;
    i = angka/3600; //angka yg dimasukkan user akan dibagi 3600
    j = i*3600; //hasil i akan dikali dengan 3600
    k = angka -j; //angka yg dimasukkan user akan dikurangi hasil j
    l = k /60; //hasil k akan dibagi 60
    m = l * 60; //hasil l akan dikali 60
    n = k - m; //hasil k akan dikurang hasil m
    
    cout<<"Jam : "<<setw (2)<<setfill('0')<<i<<":";
    cout<<setw (2)<<setfill('0')<<l<<":";
    cout<<setw (2)<<setfill('0')<<n;
    
}