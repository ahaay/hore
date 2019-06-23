#include <iostream>
#include <stdio.h>
using namespace std;

int opsi, opsi2;
char key;

int main()
{

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
		cout << "\nAlgorithm Cipher:\n1. AES\n2. Caesar\n3. Back";
		cout << "\nPilih >> "; cin >> opsi2;
		switch(opsi2){
			case 1:
				cout << "\n";
				system("./caesar");
				goto start;
			case 2: 
				cout << "\n";	
				system("./caesar");
				goto start;
			case 3: 
				goto start;
		}
	
	// 2. Hashing
	case 2: 
		cout << "\nAlgorithm Hashing:\n1. MD5\n2. SHA256";
		cout << "\nPilih >> "; cin >> opsi2;
		switch(opsi2){
			case 1:
				cout << "\n";
				system("./md5");
				goto start;
			case 2: 
				cout << "\n";	
				system("./sha256");
				goto start;
		}
	
	// 3. Encoding
	case 3: 
		cout << "\nAlgorithm Encoding:\n1. Base64\n2. Base32";
		cout << "\nPilih >> "; cin >> opsi2;
		switch(opsi2){
			case 1:
				cout << "\n";
				system("./base64");
				goto start;
			case 2: 
				cout << "\n";	
				system("./base32");
				goto start;
		}
	
	// 4. Forensic
	case 4: 
		cout << "\nForensic Tools:\n1. Strings\n2. Foremost\n3. Exiftool";
		cout << "\nPilih >> "; cin >> opsi2;
		switch(opsi2){
			case 1:
				cout << "\n Options: string --help";
				system("./strings");
				goto start;
			case 2: 
				cout << "\n Options: foremost -h";	
				system("./base32");
				goto start;
			case 3: 
				cout << "\n Command: exiftool [image]";	
				system("./base32");
				goto start;
		}

	// 5. Recon
	case 5: 
		cout << "\nReconnaissance:\n1. WHOIS\n2. DNS Loookup\n3. IP Scanner\n4. Port Scanner";
		cout << "\nPilih >> "; cin >> opsi2;
		switch(opsi2){
			case 1:
				cout << "\n";
				system("./caesar");
				goto start;
			case 2: 
				cout << "\n";	
				system("./caesar");
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