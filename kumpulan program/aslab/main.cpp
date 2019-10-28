#include <iostream>

using namespace std;

struct node
{
 float umur;
 string nama;
 string keluhan;
 string tanggal;
 struct node *next;
 struct node *back;
};
void data_diri (struct node *&kepala, struct node *&ekor)
{
    struct node *nodebaru;
    nodebaru = new struct node;
    cin.ignore();
    cout<<"\nMasukkan Nama\t: ";
    getline(cin,nodebaru->nama);
    cout<<"Masukkan keluhan\t: ";
    getline(cin,nodebaru->keluhan);
    cout<<"Masukkan tanggal\t: ";
    getline(cin,nodebaru->tanggal);
    cout<<"Masukkan Umur\t: ";
    cin>>nodebaru->umur;

    if (nodebaru->umur<=90){
    nodebaru->next=nodebaru->back = NULL;

    if (ekor != NULL)
  {
    ekor->next = nodebaru;
    nodebaru->back=ekor;
    ekor = nodebaru;
    ekor->next=NULL;
  }
    else
  {
    ekor = kepala = nodebaru;
  }
 }
    else{
  cout<<"\nMaaf umur max 90.....data ini tidak akan ditampilkan...\nSilahkan masukkan data dengan benar"<<endl;

 }
}

void cari(struct node * kepala)
{
 struct node * tempe, *nodebaru;
 nodebaru = new struct node;
 cin.ignore();
 cout<<"Coba deh masukin NAMA yang dicari : ";
 getline(cin, nodebaru->nama);
 tempe=kepala;
 if (tempe->nama == nodebaru->nama)
 {
  cout<<"------------------------------------";
  cout<<"\n|| Naaaahhhh tuh KETEMU kan....!! ||\n";
  cout<<"------------------------------------";
  cout<<"\n\nNama\t: "<<tempe->nama<<endl;
  cout<<"keluhan\t: "<<tempe->keluhan<<endl;
  cout<<"tanggal\t: "<<tempe->tanggal<<endl;
  cout<<"Umur\t: "<<tempe->umur<<endl;
 }
 else
 {
  while(tempe != NULL)
  {
   if (tempe->nama == nodebaru->nama)
   {
    cout<<"------------------------------------";
    cout<<"\n|| Naaaahhhh tuh KETEMU kan....!! ||\n";
    cout<<"------------------------------------";

    cout<<"\n\nNama\t: "<<tempe->nama<<endl;
    cout<<"keluhan\t: "<<tempe->keluhan<<endl;
    cout<<"tanggal\t: "<<tempe->tanggal<<endl;
    cout<<"Umur\t: "<<tempe->umur<<endl;
    break;
   }
   tempe = tempe->next;
  }
  if(tempe == NULL)
   cout<<"\nYaaahhh gak ada tuuh...coba deh cek lagi datanya..."<<endl;
 }
}
void hapus(struct node *&kepala){
 struct node *tempe=kepala,*nodebaru;
 nodebaru= new struct node;
 cin.ignore();
 cout<<"Masukkan Nama yang dihapus : ";
 getline(cin,nodebaru->nama);
 nodebaru->next=nodebaru->back=NULL;
 if (kepala->nama == nodebaru->nama)
 {
  kepala=kepala->next;
 }
 else
 {
  while(tempe->next != NULL)
  {
   if (tempe->next->nama == nodebaru->nama)
   {
    tempe->next=tempe->next->next;
    break;
   }
   tempe = tempe->next;
  }
 }
 cout<<"\nData Berhasil dihapus\n";
}
void hapusbelakang(struct node *&ekor){
 struct node *tempe=ekor,*nodebaru;
 nodebaru= new struct node;
 cin.ignore();
 cout<<"Masukkan Nama yang dihapus : ";
 getline(cin,nodebaru->nama);
 nodebaru->back=NULL;
 if (ekor->nama == nodebaru->nama)
 {
  ekor=ekor->back;
 }
 else
 {
  while(tempe->back != NULL)
  {
   if (tempe->back->nama == nodebaru->nama)
   {
    tempe->back=tempe->back->back;
    break;
   }
   tempe = tempe->back;
  }
 }
 cout<<"\nData Berhasil dihapus\n";
}
void tampilbelakang(struct node *ekor){
 struct node *tempe ;
 tempe=ekor;
 while( tempe != NULL)
 {
  cout<<"\nNama\t: "<<tempe->nama<<endl;
  cout<<"keluhan\t: "<<tempe->keluhan<<endl;
  cout<<"tanggal\t: "<<tempe->tanggal<<endl;
  cout<<"Umur\t: "<<tempe->umur<<endl;
  tempe = tempe->back;
 }
}
void tampilkan(struct node *kepala)
{
 struct node *tempe;
 tempe = kepala;
 while(tempe != NULL)
 {
  cout<<"\nNama\t: "<<tempe->nama<<endl;
  cout<<"keluhan\t: "<<tempe->keluhan<<endl;
    cout<<"tanggal\t: "<<tempe->tanggal<<endl;
  cout<<"Umur\t: "<<tempe->umur<<endl;
  tempe = tempe->next;
 }
}
void menu(){
 cout<<"\n+=========================== M e N u =========================+"<<endl;
 cout<<"\t\t   1. Isi Data Pasien"<<endl;
 cout<<"\t\t   2. Cari Data"<<endl;
 cout<<"\t\t   3. Hapus depan"<<endl;
 cout<<"\t\t   4. Hapus balakang"<<endl;
 cout<<"\t\t   5. Tampilkan Data dari depan"<<endl;
 cout<<"\t\t   6. Tampilkan Belakang"<<endl;
 cout<<"\t\t   0. Keluar"<<endl;
 cout<<"+=============================================================+"<<endl;
 cout<<"Masukkan Pilihan Anda : ";
}
int main()
{
 int m,j;
 string x;
 struct node *kepala, *tempe, *nodebaru, *ekor;
 kepala = ekor = nodebaru = tempe = NULL;
 do{

  menu();
  cin>>m;
  switch (m){
  case 1 :

   cout<<"Masukkan berapa jumlah data : ";
   cin>>j;
   for(int i=1;i<=j;i++){
   cout<<"\nAnda Menginputkan Data Ke- "<<i<<endl;
   data_diri(kepala, ekor);
   }

   break;

  case 2:

   cari(kepala);
   break;
  case 3 :

   hapus(kepala);
  break;
  case 4 :

   hapusbelakang(ekor);
  break;

  case 5 :

   cout<<"Nih Data yang anda inputkan tadi.....tapi dari depan...\n";
   tampilkan(kepala);
   break;
  case 6 :

   cout<<"Nih Data yang anda inputkan tadi.....tapi dari belakang...\n";
   tampilbelakang(ekor);
   break;
  }
 }while (m!=0);
}


