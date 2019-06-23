#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int key=0, size=0, op;
	char y;
	int *array;
	main:
	cout<<"Pilih Salah Satu!:\n1: Encryption\n2: Decryption"<<endl; //endl for new line
	cout<<"_______________________________________________________\n";
	cout<<"Opsi=>";
	cin>>op;
	switch(op){
		Main:
		case 1:
			cout<<"Masukkan Kalimat Yang Akan Di Enkripsi :";
			cin>>s;
			cout<<"\nMasukkan Key : ";
			cin>>key;
			size=s.length();
			array= new int[s.length()];
			cout<<"Pesan Telah TerEnkripsi..\n";
			for(int i=0; i<size; i++)
			*(array+i)=s[i]+key; // array increament and converting string into ascii code
			for(int i=0; i<size; i++)
			{
				y=*(array+i);
				cout<<array[i]<<"\t"<<y<<endl;
			}
			delete[]array;


			case 2:
			cout<<"Masukkan Kalimat Yang Akan Di Dekripsi :";
			cin>>s;
			cout<<"\nMasukkan Key :";
			cin>>key;
			size=s.length();
			array= new int[s.length()];
			cout<<"Message Encrypted successfully..\n";
			for(int i=0; i<size; i++)
			*(array+i)=s[i]-key; // array increament and converting string into ascii code
			for(int i=0; i<size; i++)
			{
				y=*(array+i);
				cout<<array[i]<<"\t"<<y<<endl;
			}
			delete[]array;
			break;
				default:
					cout<<"Invalid Input Try Again..\n";
					system("cls");
				goto main;
				}
				cout<<"\n\n\n\n\n";
				system("pause");
}

















 
