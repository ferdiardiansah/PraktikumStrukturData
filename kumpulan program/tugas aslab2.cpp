#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

int pil;
int add_pilih();
int add_baru();
int add_depan();
int add_belakang();
int hapus_depan();
int hapus_belakang();
int add_tampil();
int total_harga;

struct simpul
{
    char nama[100];
    int keluhan_penyakit;
    int umur,tanggal;
    simpul *next;
    simpul *prev;
} mhs, *baru, *hapus=NULL, *awal=NULL, *akhir=NULL, *bantu;

int clrscr()
{
    system("cls");
}
int main()
{
    do
    {
        clrscr();
        cout<<"| Nama    : FERDI ARDIANSAH"<<endl;
        cout<<"| NPM     : 06.2018.1.07079 "<<endl;
        cout<<"=================================="<<endl;
        cout<<"|     MENU     "<<endl;
        cout<<"| 1. Input depan   "<<endl;
        cout<<"| 2. input belakang"<<endl;
        cout<<"| 3. hapus depan   "<<endl;
        cout<<"| 4. hapus belakang"<<endl;
        cout<<"| 5. Tampilkan     "<<endl;
        cout<<"| 6. Exit          "<<endl;
        cout<<"=================================="<<endl;
        cout<<"Inputkan Pilihan Anda : ";
        cin>>pil;
        add_pilih();
    } while(pil!=6);
    return 0;
}
int add_pilih()
{
    if(pil==1)
        add_depan();
      else if(pil==2)
        add_belakang();
        else if(pil==3)
        hapus_depan();
    else if(pil==4)
        hapus_belakang();
    else if(pil==5)
        add_tampil();
        else
        cout<<"====================="<<endl;
        cout<<"TERIMA KASIH"<<endl;
}

int add_baru()
{
    baru=(simpul*)malloc(sizeof(struct simpul));
    cout<<"| input nama pasien            : ";cin>>baru->nama;
    cout<<"| input keluhan pasien             : ";cin>>baru->keluhan_penyakit;
    cout<<"| input umur                     : ";cin>>baru->umur;
    cout<<"| input tanggal               : ";cin>>baru->tanggal;
    baru->next=NULL;
}

 int add_depan()
{
    add_baru();
    if(awal==NULL)
    {
        awal=baru;
        akhir=baru;
        akhir->next=NULL;
    }
    else
    {
        baru->next=awal;
        baru->prev=baru;
        awal=baru;
    }
    cout<<endl<<endl;
    add_tampil();
}
int add_belakang()
{
    add_baru();
    if(awal==NULL)
    {
        awal=baru;
        akhir=baru;
        awal->next=NULL;
    }
    else
    {
        akhir->next=baru;
        akhir->prev=akhir;
        akhir=baru;
    }
    cout<<endl<<endl;
    add_tampil();
}
int hapus_depan()
{
        hapus=awal;
        awal->next->prev=NULL;
        awal=hapus->next;
        hapus=NULL;

   cout<<endl<<endl;
    add_tampil();
    }
int hapus_belakang()
{
    hapus=awal;
    while(hapus->next->next!=NULL)
        hapus=hapus->next;
    akhir=hapus;
    hapus->next=NULL;
        cout<<endl<<endl;
    add_tampil();

}
int add_tampil()
{
     if (awal==NULL)
          cout<<"Kosong";
     else
     {
         bantu=awal;
         while(bantu!=NULL)
         {
            cout<<"| input nama pasien            : ";cin>>baru->nama;
    cout<<"| input keluhan pasien             : ";cin>>baru->keluhan_penyakit;
    cout<<"| input umur                     : ";cin>>baru->umur;
    cout<<"| input tanggal               : ";cin>>baru->tanggal;
            cout<<"============================================="<<endl;
            bantu=bantu->next;
         }
     }
     getch();
}
