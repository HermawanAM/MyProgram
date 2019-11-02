#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

void konversiSuhuC(float celsius) {

  float fahrenheit, kelvin, reamur;
  
  // Celsius
  fahrenheit = celsius * 1.8 + 32;
  cout << "Celsius - Fahrenheit : " << fahrenheit << endl;

  kelvin = celsius + 273.15;
  cout << "Celsius - Kelvin : " << kelvin << endl;

  reamur = celsius * 0.8;
  cout << "Celsius - Reamur : " << reamur << endl;
  cout << endl;
}

void konversiSuhuF(float fahrenheit) {

   float celsius, kelvin, reamur;

  // Fahrenheit
  celsius = (fahrenheit - 32) / 1.8;
  cout << "Fahrenheit - Celsius : " << celsius << endl;

  kelvin = (fahrenheit + 459.67) / 1.8;
  cout << "Fahrenheit - Kelvin : " << kelvin << endl;

  reamur = (fahrenheit - 32) / 0.44;
  cout << "Fahrenheit - Reamur : " << reamur << endl;
  cout << endl;

}

void konversiSuhuK(float kelvin) {

  float celsius, fahrenheit, reamur;

  // Kelvin
  celsius = kelvin - 273.25;
  cout << "Kelvin - Celsius : " << celsius << endl;

  fahrenheit = kelvin * 1.8 - 459.67;
  cout << "Kelvin - Fahrenheit : " << fahrenheit << endl;

  reamur = (kelvin - 273.15) * 0.8;
  cout << "Kelvin - Celsius : " << celsius << endl;
  cout << endl;
} 

void konversiSuhuR(float reamur) {

  float celsius, fahrenheit, kelvin;

  // Reamur
  celsius = reamur / 0.8;
  cout << "Reamur - Celsius : " << celsius << endl;

  fahrenheit = reamur * 2.25 + 32;
  cout << "Reamur - Fahrenheit : " << fahrenheit << endl;

  kelvin = reamur / 0.8 + 273.15;
  cout << "Reamur - Kelvin : " << kelvin << endl;
}

void konversiWaktu(int totalDetik ) {

  int hari, hari1, jam, jam1, menit, menit1, detik;

  hari = totalDetik / 86400;
  hari1 = totalDetik % 86400;
  jam = hari1 / 3600;
  jam1  = hari1 % 3600;
  menit = jam1 / 60;
  menit1 = jam1 % 60;
  detik = menit1;

  cout << endl;
  cout << "Hasilnya -> "<< hari << " Hari : "; 
  cout << jam << " Jam :"; 
  cout << menit << " Menit : ";
  cout << detik << " Detik \n";
}

void menuMaMi() {

  cout << "[1] -> Makanan\n\n";
  cout << "[a] Nasi Goreng  - Harga Rp 10.000\n";
  cout << "[b] Nasi Pecel   - Harga Rp 10.000\n";
  cout << "[c] Mie Ayam     - Harga Rp 8.000\n";
  cout << "[d] Bubur Ayam   - Harga Rp 14.000\n";
  cout << "[e] Soto Ayam    - Harga Rp 10.000\n";
  cout << "[f] Nasi Putih   - Harga Rp 5.000\n\n";
  cout << "[2] -> Minuman \n\n";
  cout << "[a] Es Teh       - Harga Rp 3.000\n";
  cout << "[b] Es Jeruk     - Harga Rp 5.000\n";
  cout << "[c] Es Oyen      - Harga Rp 11.000\n";
  cout << "[d] Es Dawet     - Harga Rp 8.000\n";
  cout << "[e] Es Garbis    - Harga Rp 4.000\n";
  cout << "[f] Jus Alpukat  - Harga Rp 12.000\n";
  cout << "[g] Jus Jambu    - Harga Rp 12.000\n";
  cout << "[h] Jus Melon    - Harga Rp 12.000\n\n";
}

void prosesOrder(int pesanMaMi) {

    char kodeMaMi[3];
    long pesan;

    for(int a = 0; a < pesanMaMi; a++) {
      menuMaMi();
      cout << "Pesanan : " << a << endl;
      cout << "Ex. Kode Nasi Kuning -> 1c " << endl;
      cout << "Masukan kode menu : ";
      cin >> kodeMaMi[a];
      


    }
}

int main() {

  int pilihanUser;
  char ulang;

  cout << "Menu pilihan : \n";
  cout << "[1] Program konversi suhu\n";
  cout << "[2] Program konversi detik (hari - jam - menit - detik)\n";
  cout << "[3] Program bayar kasir\n";
  cout << "[4] Exit\n";
  menu:
  ulang :

  cout << endl;
  cout << "Masukan kode pilihan : ";
  cin >> pilihanUser;
  cout << endl;

  switch(pilihanUser) {

    case 1:
      cout << "===============================\n";
      cout << "    Program Konversi Suhu\n";
      cout << "===============================\n"; 

      float celsius, fahrenheit, kelvin, reamur;
      cout << "Masukan nilai Celsius : ";
      cin >> celsius;

      cout << "Masukan nilai Fahrenheit : ";
      cin >> fahrenheit;

      cout << "Masukan nilai Kelvin : ";
      cin >> kelvin;

      cout << "Masukan nilai Reamur : ";
      cin >> reamur;
      cout << endl;

      cout << "======== Celsius ========\n";
      konversiSuhuC(celsius);

      cout << "======== Fahrenheit ========\n";
      konversiSuhuF(fahrenheit);

      cout << "======== Kelvin ========\n";
      konversiSuhuK(kelvin);

      cout << "======== Reamur ========\n";
      konversiSuhuR(reamur);
      break;
    
    case 2:
      cout << "===============================\n";
      cout << "    Program Konversi Waktu \n";
      cout << "===============================\n";

      int totalDetik;
      cout << "Masukan total detik : ";
      cin >> totalDetik;

      konversiWaktu(totalDetik);
      break;

    case 3:
      cout << "===============================\n";
      cout << "    Program Bayar Kasir \n";
      cout << "===============================\n";
      int pesanMaMi;
      menuMaMi();
      cout << "Berapakali pemesanan : ";
      cin  >> pesanMaMi;

      prosesOrder(pesanMaMi);

      break;

    default:
      char ulang1;
      cout << "Maaf!!!.Anda salah memasukan kode pilihan yang tidak ada dalam list !\n \n";
      cout << "Mau ulangi lagi..? [Y/N] ";
      cin >> ulang1;
      cout << endl;

      if(ulang1 == 'y' || ulang1 == 'Y'){
        goto menu;
      } else {
        goto out;
      }
      break;

   }

  cout << endl;
  cout << "Apakah mau ganti menu..? [Y|N] ";
  cin >> ulang;
  if(ulang == 'y' || ulang == 'Y') {
    goto ulang;
  } else {
    cout << "Terima kasih :-)";
  }
  out:

  return 0; 
}