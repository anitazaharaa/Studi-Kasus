#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int ayam,tongkol,mix,cumi,bakar,total1,total2,total3,total4,total5,total,jarak,ongkir1,ongkir2,diskon,totals,bayar,kembali;
	ofstream struk;
	struk.open("struk.txt");
	
	cout<<"====================="<<endl;
	cout<<"\tMenu Makan"<<endl;
	cout<<"====================="<<endl;
	cout << "1. Nasi bakar ayam   : Rp. 21000" <<endl;
	cout << "2. Nasi bakar tongkol   : RP. 17000" <<endl;
	cout <<	"3. Nasi bakar mix   : Rp. 19000" <<endl;
	cout <<	"4. Nasi bakar cumi    : Rp. 20000" <<endl;
	cout <<	"5. Nasi goreng bakar     : Rp. 25000" <<endl;
	cout << "Masukkan jumlah pesanan nasi bakar ayam : "; cin>>ayam;
	cout << "Masukkan jumlah pesanan nasi bakar tongkol : "; cin>>tongkol;
	cout << "Masukkan jumlah pesanan nasi bakar mix : "; cin>>mix;
	cout << "Masukkan jumlah pesanan nasi bakar cumi : "; cin>>cumi;
	cout << "Masukkan jumlah pesanan nasi goreng bakar : "; cin>>bakar;
	cout << "Masukkan jarak rumah anda dalam km : "; cin>>jarak;
	 
	total1 = 18000 * ayam;
	total2 = 20000 * tongkol;
	total3 = 25000 * mix;
	total4 = 30000 * cumi;
	total5 = 25000 * bakar;
	total = total1 + total2 + total3 + total4 + total5;
	
	if(jarak <=4 ){
		ongkir1 = 8000 ;
	}
	else{
		ongkir1 = 20000;
	}
	if (total <=40000){
		ongkir2 = ongkir1;
		diskon = 0;
		totals = total + ongkir2;
	}
	else if(total >= 40000 && total <= 100000){
		ongkir2 = ongkir1 - 4000;
		diskon = 0;
		totals = total + ongkir2;
	}
	else if(total >= 100000 && total <= 150000){
		ongkir2 = ongkir1 - 9000;
		diskon = (total * 25 / 100);
		totals = total - diskon + ongkir2;
	}
	else if (total >= 150000){
		ongkir2 = ongkir1 - 12000;
		diskon = (total * 35 / 100);
		totals = total - diskon + ongkir2;	
	}
	
	cout << "Total belanjaan anda adalah : " << totals << endl;
	cout << "Masukkan jumlah pembayaran : "; cin >> bayar;
	kembali = bayar - totals;
	cout << "Struk belanja berhasil dicetak";
	
	struk << "===== Struk Belanja =====" << endl;
 	struk << "1. Nasi bakar ayam	: " <<ayam<< " x 18.000 = " <<total1<<endl;
  	struk << "2. Nasi bakar tongkol	: " <<tongkol<< " x 20.000 = " <<total2<<endl;
  	struk << "3. Nasi bakar mix	: " <<mix<< " x 25.000 = " <<total3<<endl;
  	struk << "4. Nasi bakar cumi	: " <<cumi<< " x 30.000 = " <<total4<<endl;
  	struk << "5. Nasi goreng bakar	: " <<bakar<< " x 25.000 = " <<total5<<endl;
  	
  	struk << "Diskon	= " << diskon <<endl;
  	struk << "Ongkir	= " << ongkir2 <<endl;
  	struk << "Bayar 	= " << bayar <<endl;
  	struk << "Kembali	= " << kembali <<endl;
  	
 	struk.close();
	return 0; 	
}
