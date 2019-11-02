#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstring>
using namespace std;

void menu() {
  cout << "\n|                       MENU PESANAN                          |";
  cout << "\n =============================================================;";
  cout << "\n|1. Makanan                      2. Minuman                   |";
  cout << "\n|                                                             |";
  cout << "\n| a. Nasi Goreng  = Rp. 12.000,-  a. Tehbotol   = Rp.  5.000,-|";
  cout << "\n| b. Nasi Uduk    = Rp.  9.000,-  b. Teh Pucuk  = Rp.  4.000,-|";
  cout << "\n| c. Nasi Kucing  = Rp.  8.000,-  c. Susu Jahe  = Rp.  4.000,-|";
  cout << "\n| d. Mie Rebus    = Rp.  8.000,-  d. Kopi Jahe  = Rp.  3.000,-|";
  cout << "\n| e. Mie Goreng   = Rp.  9.000,-  e. Kopi+Susu  = Rp.  5.000,-|";
  cout << "\n| f. Mie Ayam     = Rp. 13.000,-  f. Tea Jus    = Rp.  FREE ,-|";
  cout << "\n =============================================================";
}

int main() {
  char Nama[20], Home;
  struct {
    char Kode[100], Tipe[100];
    long Banyak, Jumlah, Harga;
  } Warkop[100];
  
  long i, x, Total, Bayar, Kembali;
awal:
  cout << "\nMasukan Nama Anda : ";
  cin >> Nama;


  menu();
  cout << "\n\nBerapa Jenis Pesanan : ";
  cin >> x;

  for (i = 1; i <= x; i++) {
    menu();
    cout << "\nPesanan - : " << i;
    cout << "\n ex. Kode Nasi Goreng --> 1a";
    cout << "\n\nKode Menu : ";
    cin >> Warkop[i].Kode;
    cout << "\nBerapa Banyak yang dipesan : ";
    cin >> Warkop[i].Banyak;
  }

  for (i = 1; i <= x; i++)
  {
    if (strcmpi(Warkop[i].Kode, "1a") == 0)
    {
      strcpy(Warkop[i].Tipe, "Nasi Goreng");
      Warkop[i].Harga = 12000;
    }
    else if (strcmpi(Warkop[i].Kode, "1b") == 0)
    {
      strcpy(Warkop[i].Tipe, "Nasi Uduk");
      Warkop[i].Harga = 9000;
    }
    else if (strcmpi(Warkop[i].Kode, "1c") == 0)
    {
      strcpy(Warkop[i].Tipe, "Nasi Kucing");
      Warkop[i].Harga = 8000;
    }
    else if (strcmpi(Warkop[i].Kode, "1d") == 0)
    {
      strcpy(Warkop[i].Tipe, "Mie Rebus");
      Warkop[i].Harga = 8000;
    }
    else if (strcmpi(Warkop[i].Kode, "1e") == 0)
    {
      strcpy(Warkop[i].Tipe, "Mie Goreng");
      Warkop[i].Harga = 9000;
    }
    else if (strcmpi(Warkop[i].Kode, "1f") == 0)
    {
      strcpy(Warkop[i].Tipe, "Mie Ayam");
      Warkop[i].Harga = 13000;
    }
    else if (strcmpi(Warkop[i].Kode, "2a") == 0)
    {
      strcpy(Warkop[i].Tipe, "Tehbotol");
      Warkop[i].Harga = 5000;
    }
    else if (strcmpi(Warkop[i].Kode, "2b") == 0)
    {
      strcpy(Warkop[i].Tipe, "Teh Pucuk");
      Warkop[i].Harga = 4000;
    }
    else if (strcmpi(Warkop[i].Kode, "2c") == 0)
    {
      strcpy(Warkop[i].Tipe, "Susu Jahe");
      Warkop[i].Harga = 4000;
    }
    else if (strcmpi(Warkop[i].Kode, "2d") == 0)
    {
      strcpy(Warkop[i].Tipe, "Kopi Jahe");
      Warkop[i].Harga = 3000;
    }
    else if (strcmpi(Warkop[i].Kode, "2e") == 0)
    {
      strcpy(Warkop[i].Tipe, "Kopi+Susu");
      Warkop[i].Harga = 5000;
    }
    else if (strcmpi(Warkop[i].Kode, "2f") == 0)
    {
      strcpy(Warkop[i].Tipe, "Tea Jus   ");
      Warkop[i].Harga = 0;
    }
  }

  cout << "\nNama Pemesan  : " << Nama;
  cout << "\nNo.\tPesanan\t\tBanyak\t\tHarga\t\tJumlah" << endl;
  for (i = 1; i <= x; i++)
  {
    Warkop[i].Jumlah = Warkop[i].Banyak * Warkop[i].Harga;
    cout << i << "\t" << Warkop[i].Tipe << "\t" << Warkop[i].Banyak << "\t\t" << Warkop[i].Harga << "\t\t" << Warkop[i].Jumlah << endl;
  }
  Total = 0;
  for (i = 1; i <= x; i++)
  {
    Total = Total + Warkop[i].Jumlah;
  }
  cout << "\n\t\t\t\t\tTotal Harga : " << Total;
  cout << "\n\t\t\t\t\tPembayaran  : ";
  cin >> Bayar;
  Kembali = Bayar - Total;
  cout << "\n\t\t\t\t\tKembali  : " << Kembali;

  cout << "\nTuku maning Coy ? : [Y/N] ";
  Home = getche();
  if (Home == 'Y' || Home == 'y')
    goto awal;
  getch();
}