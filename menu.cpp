#include <iostream>
#include <conio.h>
using namespace std;

const int MAX = 100;
int arrayData[100];
int jumlah = 0;

void info(){
  system("cls");
  cout<<"hai, saya lagi UTS";
  getch();
}
void dMenu(){
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";       
cout<<"1. Memasukkan nilai Array"<<"\n";            
cout<<"2. Menampilkan Array"<<"\n";            
cout<<"3. Mennyortir Array"<<"\n";           
cout<<"4. Info"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void inputArray(){
  system("cls");
  cout << "Berapa banyak data yang ingin dimasukkan? (max " << MAX << "): ";
    cin >> jumlah;

    if (jumlah > MAX || jumlah < 1) {
        cout << "Jumlah tidak valid!";
        getch();
        return;
    }
    for (int i = 0; i < jumlah; i++) {
      cout << "Masukkan data ke-" << i + 1 << ": ";
      cin >> arrayData[i];
  }
  cout << "Data berhasil disimpan!";
  getch();
}

void tampilArray() {
  system("cls");
  if (jumlah == 0) {
      cout << "Array masih kosong!";
  } else {
      cout << "Isi Array:\n";
      for (int i = 0; i < jumlah; i++) {
          cout << arrayData[i] << " ";
      }
  }
  getch();
}

void sortArray() {
  system("cls");
  if (jumlah == 0) {
      cout << "Array masih kosong!";
  } else {
      // Bubble Sort
      for (int i = 0; i < jumlah - 1; i++) {
          for (int j = 0; j < jumlah - i - 1; j++) {
              if (arrayData[j] > arrayData[j + 1]) {
                  int temp = arrayData[j];
                  arrayData[j] = arrayData[j + 1];
                  arrayData[j + 1] = temp;
              }
          }
      }
      cout << "Array berhasil diurutkan!";
  }
  getch();
}


void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}


int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
   inputArray();
    /* code */
    mPertama("pertama");
    break;
   case '2':
   tampilArray();
    mPertama("ke- dua");
    /* code */ 
    break;  
   case '3':
   sortArray();
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    info();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}