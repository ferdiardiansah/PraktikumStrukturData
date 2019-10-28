#include <iostream>
using namespace std;

struct Mahasiswa{


    int npm;
    string nama;
    string jurusan;

    Mahasiswa *next;

};

Mahasiswa *head = NULL, *tail = NULL;
void createNewNodeMhs(int npm, string nama, string jurusan);
void insertFirstNodeMhs(int npm, string nama, string jurusan);
void insertParticularNodeMhs(int position, int npm, string nama, string jurusan);
void showListNodeMhs();
void deleteFirstNodeMhs();
void deleteLastNodeMhs();
void deleteParticularNodeMhs(int position);

int main(){

    createNewNodeMhs(1234, "Ahmad", "TI");
    createNewNodeMhs(1235, "Syarifuddin", "SI");
    createNewNodeMhs(1236, "Dodit", "TI");
    createNewNodeMhs(1237, "Deny", "TI");
    cout <<"Data Mahasiswa Setelah Dimasukkan"<<endl;
    showListNodeMhs();
    insertFirstNodeMhs(1238, "Dio", "TL");
    cout<<endl;
    cout <<"Data Mahasiswa Setelah Dimasukkan Depan"<<endl;
    showListNodeMhs();
    cout<<endl;
    insertParticularNodeMhs(3, 1239,"Dewi", "SK");
    cout <<"Data Mahasiswa Setelah Dimasukkan Sesuai Posisi(3)"<<endl;
    showListNodeMhs();
    cout<<endl;
    deleteFirstNodeMhs();
    cout <<"Data Mahasiswa Setelah Dihapus Depan"<<endl;
    showListNodeMhs();
    cout<<endl;
    deleteLastNodeMhs();
    cout <<"Data Mahasiswa Setelah Dihapus Belakang"<<endl;
    showListNodeMhs();
    cout<<endl;
    deleteParticularNodeMhs(2);
    cout <<"Data Mahasiswa Setelah Dihapus Sesuai Posisi(2)"<<endl;
    showListNodeMhs();

}

void createNewNodeMhs(int npm, string nama, string jurusan){

    Mahasiswa *temp = new Mahasiswa;
    temp->npm = npm;
    temp->nama = nama;
    temp->jurusan = jurusan;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
        tail = temp;
        temp = NULL;
    }else{
        tail->next = temp;
        tail = temp;
    }

}

void showListNodeMhs(){

    Mahasiswa *temp = new Mahasiswa;
    temp = head;
    while(temp != NULL ){
        cout << temp->npm << " - " << temp->nama << " - " << temp->jurusan<<endl;
        temp = temp->next;
    }

}


void insertFirstNodeMhs(int npm, string nama, string jurusan){

    Mahasiswa *temp = new Mahasiswa;
    temp->npm = npm;
    temp->nama = nama;
    temp->jurusan = jurusan;
    temp->next = head;
    head = temp;

}

void insertParticularNodeMhs(int position, int npm, string nama, string jurusan){

    Mahasiswa *prev = new Mahasiswa;
    Mahasiswa *curr = new Mahasiswa;
    Mahasiswa *temp = new Mahasiswa;

    curr = head;

    for(int i = 1; i < position; i++){
        prev = curr;
        curr = curr->next;
    }

    temp->npm = npm;
    temp->nama = nama;
    temp->jurusan = jurusan;

    prev->next = temp;
    temp->next = curr;

}

void deleteFirstNodeMhs(){

    Mahasiswa *temp = new Mahasiswa;
    temp = head;
    head = head->next;
    delete temp;

}

void deleteLastNodeMhs(){

    Mahasiswa *curr = new Mahasiswa;
    Mahasiswa *prev = new Mahasiswa;

    curr = head;

    while(curr->next != NULL){

        prev = curr;
        curr = curr->next;

    }

    tail = prev;
    prev->next = NULL;
    delete curr;

}


void deleteParticularNodeMhs(int position){

    Mahasiswa *curr = new Mahasiswa;
    Mahasiswa *prev = new Mahasiswa;

    curr = head;

    for(int i = 1; i < position; i++){

        prev = curr;
        curr = curr->next;

    }

    prev->next = curr->next;

}
