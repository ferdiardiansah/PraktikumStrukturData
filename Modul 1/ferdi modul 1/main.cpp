#include <iostream>
#include <stdio.h>

using namespace std;

int main ()

{

    struct sewa {

    string namaplg;
    string namabaju;
    int hargast;
    int jmlh;
    } baju;

    float stlh_diskon;
    float totalbayar;

    cout << "\t Masukan Nama Pelanggan  :"; cin>>baju.namaplg;
    cout << "\t Masukan Nama Baju\t :"; cin >> baju.namabaju;
    cout << "\t Masukan Harga Satuan\t :"; cin >>baju.hargast;
    cout << "\t Masukan Jumlah Baju \t : "; cin >>baju.jmlh;

    cout << "\t======================================="<<endl<<endl;

    if (baju.jmlh >= 10)
    {
    cout << "\t Masukan Nama Pelanggan  :"<<baju.namaplg<<endl;
    cout << "\t Masukan Nama Baju\t :"<<baju.namabaju<<endl;
    cout << "\t Masukan Harga Satuan\t :"<<baju.hargast<<endl;
    cout << "\t Masukan Jumlah Baju \t : "<<baju.jmlh<<endl;

        totalbayar  = baju.hargast * baju.jmlh * 0.2;
        stlh_diskon = (baju.hargast * baju.jmlh) - totalbayar;

    cout << "\n\tTotal Bayar = " << stlh_diskon ;
    cout << "\n\tTotal Diskon = " <<totalbayar;
    cout << "\n\t**Diskon 20 %**";

    }

    else
    {
    cout << "\t Masukan Nama Pelanggan  :"<<baju.namaplg<<endl;
    cout << "\t Masukan Nama Baju\t :"<<baju.namabaju<<endl;
    cout << "\t Masukan Harga Satuan\t :"<<baju.hargast<<endl;
    cout << "\t Masukan Jumlah Baju \t : "<<baju.jmlh<<endl;

    totalbayar = baju.hargast * baju.jmlh;
    cout << "\n\t***Total Bayar = " << totalbayar <<"***";
    }

}
