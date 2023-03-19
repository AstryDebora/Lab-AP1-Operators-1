#include<iostream>
using namespace std;
//Tugas 2= Masukkan 6 biji angka, setiap angka ditambahin 2

int main()
{
    int number, x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6; 
    //x1-6 variabel buat angka inputan, y1-6 hasil tambahnya
    cout<<"Masukkan 6 bji angka = ";
    cin>>number;
    
    //Pisahin angkanya
    x1=number/100000;
    x2=(number-(x1*100000))/10000;
    x3=(number-(x1*100000+x2*10000))/1000;
    x4=(number-(x1*100000+x2*10000+x3*1000))/100;
    x5=(number-(x1*100000+x2*10000+x3*1000+x4*100))/10;
    x6=(number-(x1*100000+x2*10000+x3*1000+x4*100+x5*10));
    
    //Operasi bilangan untuk nambahin 2 di setiap biji angka
    y1=(x1+2);if (y1>=10){y1=y1%10;};
    y2=(x2+2);if (y2>=10){y2=y2%10;};
    y3=(x3+2);if (y3>=10){y3=y3%10;};
    y4=(x4+2);if (y4>=10){y4=y4%10;};
    y5=(x5+2);if (y5>=10){y5=y5%10;};
    y6=(x6+2);if (y6>=10){y6=y6%10;};

    cout<<"Hasilnya adalah = "<<y1<<""<<y2<<""<<y3<<""<<y4<<""<<y5<<""<<y6<<""<<endl;
    
    return 0;
}
