#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    struct user{
        string nama;
        string kategory;
        int jumlah;

    };struct user gudang[100];


    string nama,kategory;

    int jumlah;
   int n, top=-1,pil,i;
   char yt='y';
   cout << "Batas = ";cin>>n;

   while(yt=='y'){
    cout<<endl;
    cout << "Pilihan :" << endl;
    cout << "1.Push " << endl;
    cout << "2.Pop " << endl ;
    cout << "Select :" ; cin >> pil;
    //fungsi Push
    if(pil==1){
         //Memasukkan Data
        if(top==(n-1)){//deklarasi data penuh{
            cout<<"\nData penuh!";
        }
        else{
            cout<<"Masukkan Nama\t\t:";cin>>nama;
            cout<<"Masukkan kategori\t:";cin>>kategory;
            cout<<"Masukkan jumlah\t\t:";cin>>jumlah;
                top++;
                gudang[top].nama=nama;
                gudang[top].kategory=kategory;
                gudang[top].jumlah=jumlah;
        }
        }

    //fungsi pop
    else if(pil==2){
        //Menghapus Data
        if(top==-1){//deklarasi data kosong
            cout<<"\nData kosong!";
        }
        else{
            nama=gudang[top].nama;
            kategory=gudang[top].kategory;
            jumlah=gudang[top].jumlah;
            top--;

            cout<<"\nData "<<nama<<" Sudah Dihapus!"<<endl;
            cout<<"\nData "<<kategory<<" Sudah Dihapus!"<<endl;
            cout<<"\nData "<<jumlah<<" Sudah Dihapus!"<<endl;
        }
    }
    else {
       cout<<"\nError!"<<endl;
   }
       cout<<"Data : ";


    if (top == -1)
    {
         cout<< "Kosong"<<endl;
    }
    else
    {
       for (i=0;i<=top;i++) {
        cout<<"\nNama \t\t : "<< gudang[i].nama;
        cout<<"\nkategori\t : "<< gudang[i].kategory;
        cout<<"\njumlah \t\t : "<< gudang[i].jumlah;

    }

    }
     cout<<"\nApakah anda ingin mengulang(y/n)";cin>>yt; system("cls");
}


   }

