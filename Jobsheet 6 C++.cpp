#include <iostream>
using namespace std;
main ()
{
cout<<"Nama : Mila wahyuni\n\n";
cout<<"Nim : F1B019091\n\n";
cout<<"kelompok : 15\n\n";
int x,y, matrix [6][6];
cout << "TRANSPOSE MATRIX" << endl;
cout << "Masukkan jumlah baris = ";
cin >> x;
cout << "Masukkan jumlah kolom = ";
cin >> y;
cout << endl;
for (int i = 0; i < x; i++)
{
for (int j = 0; j < y; j++)
{
cout << "Masukkan nilai index " << i << "," << j << " = ";
cin >> matrix [i][j];
}
}
cout << endl;
for (int i = 0; i < x; i++)
{
for (int j = 0; j < y; j++)
{
cout << matrix [i][j] << "  ";
}
cout << endl << endl;
}
cout << endl;
for (int i = 0; i < y; i++)
{
for (int j = 0; j < x; j++)
{
cout << matrix [j][i] << "  ";
}
cout << endl << endl;
}
}
