#include <iostream>
using namespace std;
//Tugas 4 : Mengkonversi angka yang dimasukkan jadi bentuk jam (jam:menit:detik)
int main()
{
    int waktu,jam,menit,detik;
    
    cout << "Masukkan angka: ";
    cin >> waktu;

    if (waktu>=0)
    {
        jam=waktu/3600;
        menit=(waktu%3600)/60;
        detik=((waktu%3600)%60)%60;
    }

    if (jam<10 && menit<10 && detik<10)
        { cout<<"Waktu: "<<"0"<<jam<<":"<<"0"<<menit<<":"<<"0"<<detik; }
        
        else if (jam>=10 && menit>=10 && detik>=10)
        { cout<<"Waktu: "<<jam<<":"<<menit<<":"<<detik; }
        
        else if (jam>=10 && menit>=10 && detik<10)
        { cout<<"Waktu: "<<jam<<":"<<menit<<":"<<"0"<<detik; }
        
        else if (jam<<10 && menit<10 && detik>=10)
        { cout<<"Waktu: "<<"0"<<jam<<":"<<"0"<<menit<<":"<<detik; }
        
        else if (jam<10 && menit>=10 && detik<10)
        { cout<<"Waktu: "<<"0"<<jam<<":"<<menit<<":"<<"0"<<detik; }
        
        else if (jam>=10 && menit<10 && detik>=10)
        { cout<<"Waktu: "<<jam<<":"<<"0"<<menit<<":"<<detik; }
        
        else if (jam>=10 && menit<10 && detik<10)
        { cout<<"Waktu: "<<jam<<":"<<"0"<<menit<<":"<<"0"<<detik; }
        
        else if (jam<10 && menit>=10 && detik>=10)
        { cout<<"Waktu: "<<"0"<<jam<<":"<<menit<<":"<<detik; }
        
    return 0;
}
