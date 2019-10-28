#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct simpul {
    string nama,keluhan,tanggal;
    int umur;
    simpul *next;
};

simpul *node, *head = NULL, *tail = NULL;

//Fungsi Cetak
        void tampil (){
        cout <<endl;
        cout << "\t======================="<<endl;
        cout << "\tPrint Data"<<endl;
        cout << "\tNama \t: "<< node->nama<<endl;
        cout << "\tkeluhan \t: "<< node->keluhan<<endl;
        cout << "\tumur \t\t: "<< node->umur<<endl;
        cout << "\ttanggal \t\t: "<< node->tanggal<<endl;
        cout << "\t======================="<<endl;
        cout <<endl;

        }


main () {
    bool exit = false;
    int chooseMenu;
    do{
        ulang:
        printf("\t==== KLINIK RUMAH SAKIT =====");
        printf("\n\t1. Masukan Data \t");
        printf("\n\t2. Lihat Data \t");
        printf("\n\t3. Exit \t\n ");
        printf("\t============================\n");
        printf("\n\t Masukan Pilihan : " ); cin >> chooseMenu;
        printf("\t============================\n");
        switch(chooseMenu){
            case 1 :
                node = new simpul;
                cout <<endl;
                cout << "\tNama \t: "; cin >> node->nama;
                cout << "\tkeluhan \t: "; cin >> node->keluhan;
                cout << "\tumur \t\t: "; cin >> node->umur;
                cout << "\ttanggal \t\t: "; cin >> node->tanggal;
                cout <<endl;

                if(head == NULL){
                    head = node;
                    tail = node;
                }else{
                    node->next = head;
                    head = node;
                }
            system("cls");
            goto ulang;

                break;

            case 2 :
                node = head;

                printf("\n\t====DATA Di CETAK====\n");
                while (node != NULL){
                tampil ();
                node = node->next;
                }

                if(node == NULL){
                    printf("\n\t DATA Selajutnya KOSONG \n");
                }


                break;

            case 3 :
                exit = true;
                break;
        }
    }while(exit == false);
}
