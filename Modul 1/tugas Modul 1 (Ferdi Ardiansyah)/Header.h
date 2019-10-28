#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct sewa {
    string namaplg;
    float stlh_diskon;
    string namabaju;

};

struct satuan_baju{
    int hargast;
    int jmlh;
    int totalbayar;
};
    struct nama_transaksi{
        sewa baju_sewa;
        satuan_baju baju_adat;


}disk;

 void proses ()

{
char n;
do
{

    cout << "\t Masukan Nama Pelanggan  :"; cin>>disk.baju_sewa.namaplg;
    cout << "\t Masukan Nama Baju\t :"; cin >> disk.baju_sewa.namabaju;
    cout << "\t Masukan Harga Satuan\t :"; cin >>disk.baju_adat.hargast;
    cout << "\t Masukan Jumlah Baju \t : "; cin >>disk.baju_adat.jmlh;

    cout << "\t======================================="<<endl<<endl;

    if (disk.baju_adat.jmlh >= 10)
    {
    cout << "\t Masukan Nama Pelanggan  :"<<disk.baju_sewa.namaplg<<endl;
    cout << "\t Masukan Nama Baju\t :"<<disk.baju_sewa.namabaju<<endl;
    cout << "\t Masukan Harga Satuan\t :"<<disk.baju_adat.hargast<<endl;
    cout << "\t Masukan Jumlah Baju \t : "<<disk.baju_adat.jmlh<<endl;

        disk.baju_adat.totalbayar= disk.baju_adat.hargast * disk.baju_adat.jmlh * 0.2;
       disk.baju_sewa.stlh_diskon = (disk.baju_adat.hargast * disk.baju_adat.jmlh) - disk.baju_adat.totalbayar;

    cout << "\n\tTotal Bayar = " << disk.baju_sewa.stlh_diskon ;
    cout << "\n\tTotal Diskon = " <<disk.baju_adat.totalbayar;
    cout << "\n\t** Anda maendapatkan Diskon 20 % karena Menyewa Pakaian Adat Lebih Dari 10**"<<endl;

    }

    else
    {
    cout << "\t Masukan Nama Pelanggan  :"<<disk.baju_sewa.namaplg<<endl;
    cout << "\t Masukan Nama Baju\t :"<<disk.baju_sewa.namabaju<<endl;
    cout << "\t Masukan Harga Satuan\t :"<<disk.baju_adat.hargast<<endl;
    cout << "\t Masukan Jumlah Baju \t : "<<disk.baju_adat.jmlh<<endl;

    disk.baju_adat.totalbayar = disk.baju_adat.hargast * disk.baju_adat.jmlh;
    cout << "\n\t**Total Bayar = " << disk.baju_adat.totalbayar <<"**"<<endl;
    cout << "\t======================================="<<endl<<endl;

    }
cout<<"Pilihan Ulang(Y/N)=";cin >>n;
}
while(n=='y'||n=='Y');
cout << " Terima Kasih Sudah Berkunjung Di Penyewaan Baju Adat Kami"<<endl;
system("pause");

}
#endif // HEADER_H_INCLUDED
