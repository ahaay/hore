# Hore Tool
> A collection cybersecurity tool

## Feature
- [ ] Cryptography
    - [ ] `Encryption`
        - [ ] `Caesar`
        - [ ] `AES`
        - [ ] `DES`
        - [ ] `3DES`
        - [ ] `RSA`
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
- [ ] Utility
    - [ ] `Curl`

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
* http://www.cis.syr.edu/~wedu/seed/all_labs.html - Developing Instructional Laboratories for Computer SEcurity EDucation
* https://www.vulnhub.com/ - Virtual Machines for Localhost Penetration Testing.
* https://pentesterlab.com/ - PentesterLab is an easy and great way to learn penetration testing.
