#include <iostream>
#include <stdio.h>
using namespace std;

int opsi, opsi2;
char key;

int main()
{

while(true){

start:	
printf("\nMenggunakan hore tool? (y/n) : ");
key = cin.get();	
if(key == 'y'){

printf("\n | List Hore Tool  *********************|");cout<<endl;
printf(" | 1. Encryption	4. Forensic\t|");cout<<endl;
printf(" | 2. Hashing		5. Recon\t|");cout<<endl;
printf(" | 3. Encoding		6. Utility\t|");cout<<endl;
printf(" |             		7. Exit!__\t|");cout<<endl;
printf(" | *************************************|");cout<<endl;

cout << "Pilih tool >> "; cin >> opsi;
//scanf("%d", &opsi);

switch(opsi){
	case 1: 
		cout << "\nAlgorithm Cipher:\n1. AES\n2. Caesar";
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
	case 2: 
		cout << "\n";
		system("./caesar");
	case 3: 
		cout << "\n";
		system("./caesar");
	case 4: 
		cout << "\n";
		system("./caesar");
	case 5: 
		cout << "\n";
		system("./caesar");
	case 6: 
		cout << "\n";
		system("./caesar");
	case 7: 
		goto exit;
	default:
		cout << "Input salah!";
		goto start;
}


} if(key == 'n') {
	goto exit;
}}

exit:
cout << "Exit!__\n";
}