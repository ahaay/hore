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
        - [ ] `Caesar`
        - [ ] `AES`
    - [ ] `Hashing` 
        - [ ] `MD5`
        - [ ] `SHA256`
	- [ ] `Encoding`
		- [ ] `Base64`
		- [ ] `Base32`
- [ ] Forensic
    - [ ] `Displays printable strings in the given file [Strings]`
    - [ ] `Image Forensic [Exiftool]`
- [ ] Recon
    - [ ] `WHOIS`
    - [ ] `DNS Lookup [nslookup]`
    - [ ] `IP Scanner [NMAP]`
    - [ ] `Port Scanner [NMAP]`

## README
Pada source interface `horetool.cpp` akan memanggil beberapa executable yg sudah ter-compile. Sub program (tool: enkripsi,forensik,dsb) tidak kita buat dalam fungsi/class baru --> hehe biar cepet pak soalnya toolnya lumayan banyak.
Jadi kita buatkan `image docker` untuk mempermudah pemakaian

### DEPENDENCIES
Dependency  |  Download
----  |  ----
NMAP | [Download](https://nmap.org/download.html) 
Exiftool | [Download](https://www.sno.phy.queensu.ca/~phil/exiftool/) 

# `Play with Docker`

```
# Pull image
docker pull rhmandrian/hore

# How to Use
docker run -it --name [container_name] rhmandrian/hore hore
```

# `Manual Compilation`

```
sek gan belum selesai
```

## Source
* https://stackoverflow.com/questions/12151178/c-aes-encryption-class - C++ AES Encryption Class 
* https://codereview.stackexchange.com/questions/179930/aes-implementation-in-c - AES Implementation in C++
