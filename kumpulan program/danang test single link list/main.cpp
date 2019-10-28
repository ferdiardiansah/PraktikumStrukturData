#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std;
//deklarasi
    int pil;
    int pilihan_menu;
    int baru;
    int hapus;
    int tampil;

    struct simpul{
    char nama[15];
    char alamat[15];
    int nim;
    struct simpul *next;
    }mhs, *baru, *awal=NULL, *akhir=NULL, *hapus, *bantu;
int clrscr()
{
    system ("cls");
}

int main()
{
    do
    {
        clrscr();
        cout <<"MENU LINKED LIST"<<endl;
        cout <<"1. Tambah data" <<endl;
        cout <<"2. Hapus data" <<endl;
        cout <<"3. Tampil data" <<endl;

        cout <<"INPUT :"; cin >> pil;
    } while (pil!=6);
    return 0;


}
