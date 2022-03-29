#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
int main(){
	fstream f;
	f.open("input.txt", ios::in); //mo file bang f.open
	
	string data;
	getline(f, data); // doc giu lieu tu file ( 1 dong )
	
	f.close(); //dong file
	
	cout << data;
}

*/

/*
int main(){
	fstream f;
	f.open("input.txt", ios::in);
	
	string data;
	string line;
	while(!f.eof()) // kiem tra file ket thuc chua : end of f
	{
		getline(f, line);
		data += line;
	}
	f.close();
	
	cout << data;
}
*/
class NhapSach{
private:
	string tensach;
	string tacgia;
	string theloai;
	int soluong;
public:
	
	NhapSach(){
	}
	NhapCacSach(){
		cout << "\n>  Nhap ten sach: ";
		fflush(stdin);
		getline(cin, this->tensach);
			
		cout << ">  Nhap tac gia: ";
		fflush(stdin);
		getline(cin, this->tacgia);	
		
		cout << ">  Nhap the loai: ";
		fflush(stdin);
		getline(cin, this->theloai);	
			
		cout << ">  Nhap so luong: ";
		fflush(stdin);
		cin >> this->soluong;
	}
	InCacSachVuaNhap(){

		cout << this->tensach << "\t\t\t" << this->tacgia << "\t\t\t" << this->theloai << "\t\t\t" << this->soluong << "\n";
		fstream FileInSachNhap;
		FileInSachNhap.open("FileInSachNhap.txt", ios::out|ios::app);
		FileInSachNhap << "\n" + tensach + "\t\t\t";
		FileInSachNhap << tacgia + "\t\t\t";
		FileInSachNhap << theloai + "\t\t\t";
		FileInSachNhap << soluong;
	}
	InTongCacSach(){
		
	}
};

int main(){
	while(true){
		cout << "=====================================================================================================\n";
		cout << "======PHAN MEM QUAN LY NHA SACH======\n";
		cout << "======************MENU*********======\n";
		cout << "1. NHAP SACH VA IN DANH SACH VUA NHAP\n";
		
		int key;
		cout << ">> CHON: ";
		cin >> key;
		switch(key){
			case 1:
				system("cls");
				int sltensach = 0;
				cout << "> Nhap so luong ten sach can nhap: ";
				cin >> sltensach;
				system("cls");
				NhapSach a[sltensach];
				for(int i = 0; i < sltensach; i++){
					cout << ">> NHAP THONG TIN TEN SACH THU " << i + 1;
					a[i].NhapCacSach();
					system("cls");
				}
				cout << "===DANH SACH CAC SACH DA NHAP===\n";
				cout << "Ten sach\t\t\tTac gia\t\t\tThe loai\t\t\tSo luong\n";
				for(int i = 0; i < sltensach; i++) 
					a[i].InCacSachVuaNhap();
				break;
		}
	}
	return 0;
//	cout << "===DANH SACH CAC SACH DA NHAP===\n";
	
}
