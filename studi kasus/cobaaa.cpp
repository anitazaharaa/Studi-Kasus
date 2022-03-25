#include<iostream>
using namespace std;


int main (){
    int menu, jumlah, harga1,harga2, bayar;
    char mad;
    do 
    {
    cout<<"        Program Kasir Kedai Ayam       "<<endl;
    cout<<"============================================"<<endl;
    cout<<""<<endl;
    cout<<"Menu Makanan        Harga"<<endl;
    cout<<"1. AYAM GORENG        Rp. 17.000"<<endl;
    cout<<"2. AYAM BAKAR        Rp.  21.000"<<endl;
    cout<<'n'<<"MASUKKAN PILIHAN ANDA :";
    cin>>menu;
    switch (menu){
    case 1:
        int harga_goreng;
		harga_goreng=17000;
		cout<<"Jumlah pesanan : ";
		cin>>jumlah;
		harga1=jumlah*harga_goreng;
		cout<<"Total harga : Rp. "<<harga1<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 2:
        int harga_bakar;
		harga_bakar=21000;
		cout<<"Jumlah pesanan : ";
		cin>>jumlah;
		harga2=jumlah*harga_bakar;
		cout<<"Total harga : Rp. "<<harga2<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
	
    default:
    cout<<"Kode yang anda masukkan tidak ada";
    }
    } 
    while (mad/='Y');
    int diskon = 0, harga_tot, kembalian;
	while(mad/='T');
	
	harga_tot=harga1+harga2;
	cout<<"Harga total	:" << harga_tot<<endl ;
	diskon=harga_tot*0.1;
	if(harga_tot>= 45000){
	harga_tot = harga_tot - diskon;
	}
	else{
		diskon=0;
	}
	
	cout<<"Diskon				: Rp."<<diskon<<endl;
	harga_tot=harga_tot-diskon;
	cout<<"Jumlah Bayar			: Rp."<<harga_tot<<endl;
	cout<<"Masukkkan uang bayar		: Rp."; cin>>bayar;
	kembalian= bayar-harga_tot;
	cout<<"Jumlah Kembalian			: Rp."<<kembalian<<endl;


	system("cls");
    cout<<"Terimah Kasih Atas Kunjungan Anda";
    return 0;
}
