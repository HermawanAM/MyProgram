#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main() {

  int uang;
  int a, a1, b, b1, c, c1, d, d1, e, e1, f, f1, g, g1, h, h1, i, i1;

  cout << "inputkan jumlah uang kembalian : ";
  cin >> uang;
  a = uang % 50000;
  a1 = uang / 50000;
  b = a % 20000;
  b1 = a / 20000;
  c = b % 10000;
  c1 = b / 10000;
  d = c % 5000;
  d1 = c / 5000;
  e = d % 2000;
  e1 = d / 2000;
  f = e % 1000;
  f1 = e / 1000;
  g = f % 500;
  g1 = f / 500;
  h = g % 200;
  h1 = g / 200;
  i = h % 100;
  i1 = h / 100;

  cout << a1 << " lembar uang Rp.50000" << endl;
  cout << b1 << " lembar uang Rp.20000" << endl;
  cout << c1 << " lembar uang Rp.10000" << endl;
  cout << d1 << " lembar uang Rp.5000" << endl;
  cout << e1 << " lembar uang Rp.2000" << endl;
  cout << f1 << " lembar uang Rp.1000" << endl;
  cout << g1 << " uang koin Rp.500" << endl;
  cout << h1 << " uang koin Rp.200" << endl;
  cout << i1 << " uang koin Rp.100" << endl;
  getch();
}