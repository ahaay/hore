# Hore Tool 
> A collection cybersecurity tool - Final Project C++

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
    - [ ] `Stegano`
        - [ ] `LSB [Text Based]`
        - [ ] `MSB [Text Based]`
    - [ ] `Image Forensic`
        - [ ] `Exiftool`
- [ ] Recon
    - [ ] `WHOIS`
    - [ ] `DNS Enum`
    - [ ] `IP Scanner`
    - [ ] `Port Scanner`

## README
Pada source utama `horetool.cpp` kita sengaja memanggil beberapa executable yg sudah ter-compile (tidak memanggil fungsi).
Jadi kita buatkan `images docker` untuk mempermudah pemakaian

# `Play with Docker`

```
# Pull image
docker pull rhmandrian/hore

# How to Use
docker run -it --name [container_name] rhmandrian/hore hore
```


## Source
* https://stackoverflow.com/questions/12151178/c-aes-encryption-class - C++ AES Encryption Class 
* https://codereview.stackexchange.com/questions/179930/aes-implementation-in-c - AES Implementation in C++
