#include <iostream>
#include <stdlib.h>
#define max 3
using namespace std;

struct gudang{
    string nama,kategori;
    int jumlah;
}barang[max];

int main()
{
    char menu='\0';
    int f=-1, b=-1;

    do{
        switch(menu){
        case '1':
            //INSERT
            if(b<max-1){
                if(f==-1){
                    f=0;
                }
                b++;

                cout << "Nama Barang  : "; cin >> barang[b].nama;
                cout << "Kategori        : "; cin >> barang[b].kategori;
                cout << "jumlah Masuk  : "; cin >> barang[b].jumlah;

            }else{
                cout << "barang queue Penuh !" << endl;
            }
            menu='\0';
            system("pause");
            break;

        case '2':
            //DELETE
            if(b>=0){
                cout << "Barang Berikut Keluar"             << endl;
                cout << "Nama Pengirim  : " << barang[0].nama    << endl;
                cout << "Kategori        : " << barang[0].kategori   << endl;
                cout << "jumlah Masuk  : " << barang[0].jumlah << endl;

                for(int i=0;i<b;i++){
                    barang[i]=barang[i+1];
                }
                b--;
                if(b==-1){
                    f=-1;
                }
            }else{
                cout << "barang queue Kosong !" << endl;
            }

            menu='\0';
            system("pause");
            break;

        case '3':
            //VIEW
            if(f!=-1){
                for(int i=0;i<=b;i++){
                    cout << "Barang barang queue ke-"  << i+1          << endl;
                    cout << "Nama Pengirim  : " << barang[i].nama    << endl;
                    cout << "Kategori        : " << barang[i].kategori   << endl;
                    cout << "jumlah Masuk  : " << barang[i].jumlah << endl;

                    cout << "======================\n\n";
                }
            }else{
                cout << "barangueue Masih Kosong !" << endl;
            }
            menu='\0';
            system("pause");
            break;

        default:

            cout << "1. Insert " << endl;
            cout << "2. Barang yg pertama Keluar" << endl;
            cout << "3. View " << endl;
            cout << "4. Keluar" << endl;
            cout << "Masukkan pilihan menu (1-4) -> "; cin >> menu;
        }
        system("cls");
    }while(menu!='4');
}
