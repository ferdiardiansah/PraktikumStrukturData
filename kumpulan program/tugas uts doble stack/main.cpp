#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    cout<<"========M. Nuril========"<<endl;
    cout<<"====06.2018.1.06930===="<<endl;
    cout<<endl;

    struct user{
        string nama;
        int nilai;

    };
    struct user nuril[100];
    string nama;
   int nilai;
   int n,pil,i,j;
   char yt='y';
   cout << "Batas = ";cin>>n;
   int top1=-1,top2=n;

   while(yt=='y'){
    cout<<endl;
    cout << "Pilihan :" << endl;
    cout << "1.Push1 " << endl;
    cout << "2.Push2 " << endl;
    cout << "3.Pop1 " << endl ;
    cout << "4.Pop2 " << endl ;
    cout << "5.Print " <<endl;
    cout << "Select :" ; cin >> pil;
    //fungsi Push

    if(pil==1){
         //Memasukkan Data
        if(top2-top1>1){//deklarasi data penuh{
            cout<<"Masukkan Nama\t\t:";cin>>nama;
            cout<<"Lebokno Ongko\t\t:";cin>>nilai;
                top1++;
                nuril[top1].nama=nama;
                nuril[top1].nilai=nilai;

                 }



        else{
           cout<<"\nData Full!";


        }
        }

          if(pil==2){
         //Memasukkan Data
        if(top2-top1>1){//deklarasi data penuh{
            cout<<"Masukkan Nama\t\t:";cin>>nama;
            cout<<"Lebokno Ongko\t\t:";cin>>nilai;
                top2=top2-1;
                nuril[top2].nama=nama;
                nuril[top2].nilai=nilai;

        }
        else{

                cout<<"\nData Full!";
        }
        }
    //fungsi pop
    else if(pil==3){
        //Menghapus Data
        if(top1==-1){//deklarasi data kosong
            cout<<"\nData kosong!";
        }
        else{
                nama=nuril[top1].nama;
            nilai=nuril[top1].nilai;
            top1--;
            cout<<"\nData "<<nama<<" Wes Dihapus!"<<endl;
            cout<<"\nData "<<nilai<<" Wes Dihapus!";
        }
    }
     else if(pil==4){
        //Menghapus Data
        if(top2==n){//deklarasi data kosong
            cout<<"\nData kosong!";
        }
        else{
            nama=nuril[top2].nilai;
            nilai=nuril[top2].nilai;
            top2++;
            cout<<"\nData "<<nama<<" Wes Dihapus!"<<endl;
            cout<<"\nData "<<nilai<<" Wes Dihapus!"<<endl;
        }
    }
    if(pil==5){
     cout<<"Data : ";
       for (i=0;i<=top1;i++) {
        cout<<"\n\tData Stack 1: "<<endl;
        cout<<"Nama stack 1 \t\t : "<< nuril[i].nama;
        cout<<"\nData stack 1 \t\t : "<< nuril[i].nilai;

    }

     for(j=top2;j<=n-1;j++) {
        cout<<"\n\n\tData Stack 2: "<<endl;
        cout<<"Nama stack 2 \t\t : "<< nuril[j].nama;
        cout<<"\nData stack 2 \t\t : "<< nuril[j].nilai;


    }
    }

    else {
       cout<<"\nMasok bosque!"<<endl;
   }




     cout<<"\nBudal maneh gak lurd(y/n)";cin>>yt; system("cls");

    }





    }
