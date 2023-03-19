#include<iostream>
using namespace std;
//Tugas 1 = Tambahin 8 di 4 angka yang di masukkan, lalu dibagi dgn 3, abis tu di mod dgn 5, lalu di kali sama 5

int main()
{
    int num1,num2,num3,num4,num5;
    cout<<"Masukkan 4 biji angka : ";
    cin>>num1;
    num2=(num1*10)+8;
    cout<<"\nTambahin 8 ke "<<num1<<" = "<<num2;
    num3=num2/3;
    cout<<"\nBagiin sama 3 = "<<num3;
    num4=num3%5;
    cout<<"\n\nModulusin hasilnya sama 5 = "<<num4;
    num5=num4*5;
    cout<<"\nKaliin hasilnya lagi sama 5 = "<<num5;
    cout<<"\n\nHasil akhirnya adalah = "<<num5;
    
    return 0;
}
