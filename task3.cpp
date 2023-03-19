#include<iostream>
using namespace std;
//Tugas 3 = hasil jumlah inputan angka

int main()
{
    int number,num1,num2,num3,num4;

    cout<<"Masukkan 4 Buah Angka = ";
    cin>>number;
    
    //Pisahkan per angka
    num1=(number)/1000;
    num2=(number-(num1*1000))/100;
    num3=(number-(num1*1000+num2*100))/10;
    num4=(number-(num1*1000+num2*100+num3*10));

    //hasil tambahnya
    cout<<"Hasilnya adalah = "<<num1+num2+num3+num4<<endl;
}
