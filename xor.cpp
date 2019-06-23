#include <iostream>
#include <sstream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

void cipherEncryption(){
    string msg;
    cout << "Masukkan Pesan : ";
    getline(cin, msg);

    string key;
    cout << "Masukkan Key : ";
    getline(cin, key);

    string encrypHexa = "";
    int keyItr = 0;
    stringstream res;
    for (int i = 0; i < msg.length(); i++){
        int temp = msg[i] ^ key[keyItr];

        res << hex << setfill('0') << std::setw(2) << (int)temp;
        keyItr++;
        if (keyItr >= key.length()){
            // once all of key's letters are used, repeat the key
            keyItr = 0;
        }
    }

    res >> encrypHexa;
    cout << "Text Telah TerEnkripsi(Hexa) : " << encrypHexa;
}

void cipherDecryption(){
    string msg;
    cout << "Masukkan Pesan : ";
    getline(cin, msg);

    string key;
    cout << "Masukkan Key : ";
    getline(cin, key);

    string hexToUni = "";
    for (int i = 0; i < msg.length()-1; i+=2){
        // splitting hex into a pair of two
        string output = msg.substr(i, 2);
        // converting hex into unicode
        int decimal = strtol(output.c_str(), NULL, 16);
        hexToUni += (char)decimal;
    }

    string decrypText = "";
    int keyItr = 0;
    for (int i = 0; i < hexToUni.length(); i++){
        int temp = hexToUni[i] ^ key[keyItr];

        decrypText += (char)temp;
        keyItr++;
        if (keyItr >= key.length()){
            // once all of key's letters are used, repeat the key
            keyItr = 0;
        }
    }

    cout << "Teks Telah Di Decripsi(String): " << decrypText;
}

int main()
{
    Label:
    cout << "1. Enkripsi\n2. Decripsi\n \nPilihan(1,2) : ";
    int choice;
    cin >> choice;
    cin.ignore();

    if (choice == 1){
        cout << endl << "---Enkripsi---" << endl;
        cipherEncryption();
        cout << "\n";
        goto Label;
    } else if (choice == 2){
        cout << endl << "---Dekripsi---" << endl;
        cipherDecryption();
        cout << "\n";
    } else {
        cout << endl << "Pilihan Salah" << endl;
    }

    return 0;
}