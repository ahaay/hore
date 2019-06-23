# Hore Tool 
> Cybersecurity Toolkit - Final Project C++
```
17.83.0014 - Lisa Naomi
17.83.0015 - Andrian R.R
17.83.0060 - Edward Tansen
```

## Feature
- [ ] Cryptography
    - [ ] `Encryption`
        - [ ] `XOR`
        - [ ] `Caesar`
        - [ ] `Bruteforce Caesar`
        - [ ] `Other Simetris Algoritm`
    - [ ] `Encoding` 
        - [ ] `Base64 (Tidak jalan di platform Linux (terdapat library windows.h))`
    - [ ] `Hashing --> Input Text` 
        - [ ] `MD2, MD4, MD5`
        - [ ] `SHA1, SHA224, SHA256, SHA384, SHA512/224, SHA512/256`
        - [ ] `Other algoritm hashing`
- [ ] Forensic
    - [ ] `Displays printable strings in the given file [Strings]`
    - [ ] `Image Forensic [Exiftool]`
- [ ] Recon
    - [ ] `WHOIS [curl from cli.fyi]` 
    - [ ] `DNS Lookup [nslookup]`
    - [ ] `IP Scanner [NMAP]`
    - [ ] `Port Scanner [NMAP]`

## README
Pada source interface `horetool.cpp` akan memanggil beberapa executable yg sudah ter-compile. Sub program (tool: enkripsi,forensik,dsb) tidak kita buat dalam fungsi/class baru --> hehe biar cepet pak soalnya toolnya lumayan banyak.
Jadi kita buatkan `image docker` untuk mempermudah pemakaian

# `DEPENDENCIES`
Dependency  |  Download
----  |  ----
NMAP | [Download](https://nmap.org/download.html) 
Exiftool | [Download](https://www.sno.phy.queensu.ca/~phil/exiftool/) 
Curl | [Download](https://curl.haxx.se/)
Strings

# `Play with Docker`

```
# Pull image
docker pull rhmandrian/horetool

# How to Use
docker run --rm -it rhmandrian/horetool

**Untuk tool decoding tidak bisa digunakan karena menggunakan library windows.h
```

# `or Manual Compilation`

```
g++ horetool.cpp -o horetool
g++ caesar.cpp -o caesar
g++ xor.cpp -o xor
g++ simetris.cpp -o simetris
g++ base64.cpp -o base64
g++ portscan.cpp -o portscan

RUN : ./horetool or horetool.exe
```

## Source
* https://stackoverflow.com/questions/12151178/c-aes-encryption-class - C++ AES Encryption Class 
* https://codereview.stackexchange.com/questions/179930/aes-implementation-in-c - AES Implementation in C++
