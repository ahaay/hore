#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{

int opsi, opsi2, tampung2;
char key;
string tampung;

while(true){

printf("\nMenggunakan hore tool? (y/n) : ");
key = cin.get();	
if(key == 'y'){

start:	
printf("\n");
printf(" | List Hore Tool  *********************|");cout<<endl;
printf(" | 1. Encryption	4. Forensic\t|");cout<<endl;
printf(" | 2. Hashing		5. Recon\t|");cout<<endl;
printf(" | 3. Encoding		6. Exit!__\t|");cout<<endl;
printf(" | *************************************|");cout<<endl;

cout << "Pilih tool >> "; cin >> opsi;

switch(opsi){
	
	// 1. Encryption
	case 1: 
		cout << "\nAlgorithm Cipher:\n1. Caesar\n2. Other Simetris Cipher\n3. XOR\n4. Back";
		cout << "\nPilih >> "; cin >> opsi2;
		switch(opsi2){
			case 1:{
				cout << "\nPlatform: \n1. Windows(EXE)\n2. Linux(ELF)";
				cin >> tampung2;
				if (tampung2 == 1){
					system("caesar.exe");
				} else {
					system("./caesar");
				}
				goto start;
			}
			
			case 2:{
				cout << "\nPlatform: \n1. Windows(EXE)\n2. Linux(ELF)";
				cin >> tampung2;
				if (tampung2 == 1){
					system("simetris.exe");
				} else {
					system("./simetris");
				}
				goto start;
			}
			
			case 3:{
				cout << "\nPlatform: \n1. Windows(EXE)\n2. Linux(ELF)";
				cin >> tampung2;
				if (tampung2 == 1){
					system("xor.exe");
				} else {
					system("./xor");
				}
				goto start;
			}

			case 4: 
				goto start;
		}
	
	// 2. Hashing
	case 2: {
				cout << "Input Text = ";
				cin >> tampung;
				if (tampung != ""){
					system(("curl cli.fyi/hash/"+tampung).c_str());
				} 
				goto start;
			}

	
	// 3. Encoding
	case 3: 
		cout << "\nAlgorithm Encoding:\n1. Base64\n2. Back";
		cout << "\nPilih >> "; cin >> opsi2;
		switch(opsi2){
			case 1:{
				cout << "\nPlatform: \n1. Windows(EXE)\n2. Linux(ELF)";
				cin >> tampung2;
				if (tampung2 == 1){
					system("base64.exe");
				} else {
					system("./base64");
				}
				goto start;
			}

			case 2: 
				goto start;
		}
	
	// 4. Forensic
	case 4: 
		cout << "\nForensic Tools:\n1. Strings\n2. Exiftool\n3. Back";
		cout << "\nPilih >> "; cin >> opsi2;
		switch(opsi2){
			case 1: {
				cout << "**File harus satu direktori dengan program!\n";
				cout << "Masukkan nama = ";
				cin >> tampung;
				if (tampung != ""){
					system(("strings "+tampung).c_str());
				} 
				goto start;
			}
				
			case 2:{ 
				cout << "**File gambar harus satu direktori dengan program!\n";
				cout << "Masukkan nama file gambar [namagambar.png] = ";
				cin >> tampung;
				if (tampung != ""){
					system(("strings "+tampung).c_str());
				} 
				goto start;
			}

			case 3: 
				goto start;
		}

	// 5. Recon
	case 5: 
		cout << "\nReconnaissance:\n1. WHOIS\n2. DNS Loookup\n3. IP Scanner\n4. Port Scanner\n5. Back";
		cout << "\nPilih >> "; cin >> opsi2;
		switch(opsi2){
			case 1:{ 
				cout << "Masukkan domain/ip publik = ";
				cin >> tampung;
				if (tampung != ""){
					system(("curl cli.fyi/"+tampung).c_str());
				} 
				goto start;
			}

			case 2:{ 
				cout << "Domain = ";
				cin >> tampung;
				if (tampung != ""){
					system(("nslookup "+tampung).c_str());
				} 
				goto start;
			}

			case 3:{ 
				cout << "Range IP [ex:192.168.1.1/24] = ";
				cin >> tampung;
				if (tampung != ""){
					system(("nmap "+tampung).c_str());
				} 
				goto start;
			}

			case 4:{
				cout << "\nPlatform: \n1. Windows(EXE)\n2. Linux(ELF)";
				cin >> tampung2;
				if (tampung2 == 1){
					system("portscan.exe");
				} else {
					system("./portscan");
				}
				goto start;
			}
			
			case 5: 
			goto start;
		}



	// 6. Exit
	case 6: 
		goto exit;
	
	// ! Input Salah
	default:
		cout << "Input salah!";
		goto start;
}

// Press 'n' = Exit
} if(key == 'n') {
	goto exit;
}}

exit:
cout << "Exit!__\n";

}