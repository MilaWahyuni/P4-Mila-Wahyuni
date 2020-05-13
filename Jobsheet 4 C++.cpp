#include <iostream>

using namespace std;

int main()
{
cout<<"Nama : Mila wahyuni\n\n";
cout<<"Nim : F1B019091\n\n";
cout<<"kelompok : 15\n\n";
int i, j, m, n, nim1[10][10], nim2[10][10], hasil[10][10];

cout << "PENGURANGAN NIM\n"; 
cout << "Masukkan jumlah baris matriks: ";
cin >> m;
cout << "Masukkan jumlah kolom matriks: ";
cin >> n;

cout << "Masukkan matriks Nim pertama: \n";
for(i = 0; i < m; i++)
{ 
for(j = 0; j < n; j++)
{ 
cin >> nim1[i][j];
}
}
cout << "Masukkan matrix Nim kedua: \n";
for(i = 0; i < m; i++)
{ 
for(j = 0; j < n; j++)
{ 
cin >> nim2[i][j];
}
}
cout << "hasil pengurangan matriks Nim: \n";
for(i = 0; i < m; i++)
{ 
for(j = 0; j < n; j++)
{ 
hasil[i][j] = nim1[i][j] - nim2[i][j];
cout << hasil[i][j] << "\t";
}
cout << endl;
}
}
