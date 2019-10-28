#include <iostream>
#include <stdlib.h>
//LATIHAN SEQUENTIAL SORTING DAN BINARY SEARCH
using namespace std;

struct gudang{
    string kategori,nama;
    int id,jumlah_stock;
};gudang b[50];

void insert(int index){

    cout<<"\nMasukkan ID Pelanggan :";
    cin>>b[index].id;
    cout<<"\nMasukkan Nama Pelanggan :";
    cin>>b[index].nama;
    cout<<"\nMasukkan Kategori :";
    cin>>b[index].kategori;
    cout<<"\nMasukkan Jumlah stock :";
    cin>>b[index].jumlah_stock;
}

void sort(int index){
    cout<<"\nData sebelum diurutkan\n";
    for(int i=0; i<index; i++){
        cout<<"ID Pelanggan \t: "<<b[i].id<<endl;
        cout<<"Nama Pelanggan \t: "<<b[i].nama<<endl;
        cout<<"kategori \t: "<<b[i].kategori<<endl;
        cout<<"jumlah_stock \t: "<<b[i].jumlah_stock<<endl;
        cout<<endl<<endl;
    }

    //SORTING
    int tempID,tempjumlah_stock;
    string tempNama,tempkategori;

    for(int i=0; i<index; i++){
        for(int j=i+1; j<index; j++){
            if(b[i].id>b[j].id){
                //Jika index 0 lebih besar dari index 1
                tempID = b[i].id;
                tempNama = b[i].nama;
                tempkategori = b[i].kategori;
                tempjumlah_stock = b[i].jumlah_stock;

                b[i].id = b[j].id;
                b[i].nama = b[j].nama;
                b[i].kategori = b[j].kategori;
                b[i].jumlah_stock = b[j].jumlah_stock;

                b[j].id = tempID;
                b[j].nama = tempNama;
                b[j].kategori = tempkategori;
                b[j].jumlah_stock = tempjumlah_stock;
            }

        } //Awal tutup for
    }//Terakhir tutup for
    cout<<"\nHasil Sort sesuai ID\n";
    for(int i=0; i<index; i++){
        cout<<"ID Pelanggan \t: "<<b[i].id<<endl;
        cout<<"Nama Pelanggan \t: "<<b[i].nama<<endl;
        cout<<"kategori \t: "<<b[i].kategori<<endl;
        cout<<"jumlah_stock \t: "<<b[i].jumlah_stock<<endl;
        cout<<endl;
    }
}

void search(int index){
    string cari;

    int ketemu = 0;


    cout<<"\nNama yang dicari = ";

    cin>>cari;

    for(int i=0; i<=index; i++){

        if(b[i].nama==cari){

            cout<<"\nNama "<<b[i].nama<<" ditemukan pada indeks ke-"<<i<<"\n\n";
            ketemu = 1;

            cout<<"ID Pelanggan \t: "<<b[i].id<<endl;
            cout<<"Nama Pelanggan \t: "<<b[i].nama<<endl;
            cout<<"kategori \t: "<<b[i].kategori<<endl;
            cout<<"jumlah_stock \t: "<<b[i].jumlah_stock<<endl;
            cout<<endl;
        }
        else if(i==index&&ketemu==0){
            cout<<"\nData tidak ditemukan\n\n";
        }
    }
}
int main()
{

        char yt='y';
        int input,index=0;
        system ("cls");
        while(yt=='y'){
        cout << "=============================="<<endl;
        cout<<"\t\n1. Insert Data Pelanggan"<<endl ;
        cout<<"\t\n2. Sort Data Pelanggan "<<endl ;
        cout<<"\t\n3. Cari Data Pelanggan "<<endl;
        cout << "=============================="<<endl;
        cout<<"\t\nInput :";
        cin>> input;

        switch(input){
        case 1:
            insert(index);
            index++;
            system("pause");
            break;
        case 2:
            sort(index);
            system("pause");
            break;
        case 3:
            search(index);
            system("pause");
            break;
        }

        cout<<"\n Apakah anda ingin mengulang y/n? ";
        cin>> yt;
        }
}
