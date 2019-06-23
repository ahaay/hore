#include <iostream>
#include <cstring> 

using namespace std;

void decrypt(char String[],int key)
{

int aw;

for(int a=0; a<strlen(String); a++)
    { 
        for(aw=0; aw<key; aw++){
        String[a]--; 
        }
    }
}

int main(){
char String[50], loop[50];

cout << "Masukkan string : ";
scanf("%[^\n]", String);
strcpy(loop,String);

for(int i=1; i<=26; i++){
    decrypt(String,i);
    printf("Buteforce key (%d) ==> %s\n",i,String);
    strcpy(String,loop);
}}