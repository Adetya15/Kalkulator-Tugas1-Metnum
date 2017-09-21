#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <math.h>
#include <cmath>

using namespace std;
int main(int argc, char** argv) {
 float x,y,hasil,pilih;
 
 
    system("cls");
   cout<<"\t\t\t  ============================\n"<<endl;
   cout<<"\t\t\t  ---     KALKULATOR      ---"<<endl<<endl;
   cout<<"\t\t\t  ============================"<<endl;

   kalkulator :
   cout<<"Operator Perhitungan:"<<endl;
   string jumlah ="(1) Menghitung (+)";
   cout<<jumlah<<endl;
   string pengurangan ="(2) Menghitung (-)";
   cout<<pengurangan<<endl;
   string pembagian ="(3) Menghitung   (/)";
   cout<<pembagian<<endl;
   string pangkat ="(4) Menghitung  (^)";
   cout<<pangkat<<endl<<endl;
   string penghitungan ="(5) Menghitung f(x) = 2X^2 - 4X + 1 ";
   cout<<penghitungan<<endl<<endl;
   
 //mulai menghitung
   cout<<"Masukan Angka A = ";
   cin>>x;
   cout<<"Masukan Angka B = ";
   cin>>y;
   

   int z;
   cout<<"Pilih Operator Perhitungan= ";
   cin>>z;

   if(z==1)
   {
   hasil=x+y;
   cout<<"Hasil penjumlahan = "<<hasil<<endl;
   }
   else if(z==2)
   {
   hasil=x-y;
   cout<<"Hasil pengurangan = "<<hasil<<endl;
   }
   else if(z==3)
   {
   hasil=x/y;
   cout<<"Hasil pembagian = "<<hasil<<endl;
   }
   else if(z==4)
   {
   hasil=pow(x,y);
   cout<<"Hasil pangkat = "<<hasil<<endl;
   }
   else if(z==5)
   {
   hasil=2*pow(x,2)-4*y+1;
   cout<<"Hasil f(x) = "<<hasil<<endl;
   }
   cout<<"================================================================================";
    cout<<"Coba lagi [1]"<<endl;
    cout<<"Keluar [2]"<<endl;
    cout<<"================================================================================";
    cout<<"Masukkan Pilihan : ";cin>>pilih;
    if (pilih==1){
        goto kalkulator;
    }
    return 0;
    if (pilih==2){
    system("cls");
  cout<<"================================================================================";
    cout<<"\t\t   Terima Kasih Telah Menggunakan Kalkulator Sederhana Ini"<<endl;
    cout<<"================================================================================";
    cout<<"\t\t\t\t Adetya Anhar "<<endl<<endl;
    cout<<"\t\t\t         Informatika"<<endl<<endl;
    cout<<"\t\t\t\t  3411141150"<<endl;
    cout<<"================================================================================"<<endl;
    system("pause");
    }
 return 0;
}
