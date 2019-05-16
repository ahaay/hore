# Hore Tool
> A collection digital forensic tool

# Feature
- [ ] Cryptography
    - [ ] `Encryption`
        - [ ] `Caesar`
        - [ ] `AES`
        - [ ] `DES`
        - [ ] `3DES`
        - [ ] `RSA`
    - [ ] `Hashing` 
        - [ ] `MD5`
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



# Installation

## `Dependency`
 * NMAP

## `Compiling`
```bash
# Clone this repository
git clone https://github.com/trimstray/htrace.sh

# Go into directory
cd htrace.sh

# Install
sudo ./setup.sh install

# Install dependencies (Debian 8/9, Ubuntu 18.x and MacOS support)
#   - recommend build docker image or install dependencies manually
#   - before init please see what it does and which packages are available on your repository
sudo ./dependencies.sh

# Run the app
htrace.sh -u https://nmap.org -s -h
```

> * symlink to `bin/htrace.sh` is placed in `/usr/local/bin`
> * man page is placed in `/usr/local/man/man8`

## `Docker Image`

```bash
# Clone this repository
git clone https://github.com/trimstray/htrace.sh

# Go into directory and build docker image
cd htrace.sh && build/build.sh

# Run the app
docker run --rm -it --name htrace.sh htrace.sh -u https://nmap.org -s -h
```


# Environment
* Any OS having a Bash environment
* The following tools must be installed and in the PATH:  openssl, shred, gzip, zcat


# How to Use

Provides the following options:

```
    htrace.sh v1.1.5

  Usage:

    htrace.sh <option|long-option> [value]

  Examples:

    htrace.sh -u https://example.com -s -h -b
    htrace.sh -u https://example.com --all-scans

  Options:

        --help                                show this message
        --version                             show script version
        --examples                            show script examples

    Standard:

        -u|--url <value>                      set target url with http/https protocol
        -s|--ssl                              show basic ssl server/connection parameters
        -h|--headers                          show response headers
        -b|--body                             show response body
        -M|--req-method <value>               set request method (default: GET)
        -H|--req-header <value>               set request header(s)
        -p|--proxy <value>                    set proxy server (not for external tools)
        -r|--resolve <value>                  resolve the host+port to this address
        -i|--iface <value>                    set network interface (or address)
        -a|--all-scans                        use all external security tools

    Security tools:

        --testssl                             test ssl protocols and ciphers (testssl.sh)
        --observatory                         analyze website headers (mozilla observatory)
        --ssllabs                             deep analysis of the ssl web server (ssllabs)
        --mixed-content                       scan website for non-secure resources (mixed-content-scan)
        --nse                                 scan website and domain with nse library (nmap)
        --waf                                 detect and bypass web application firewalls (whatwaf)
        --dns                                 enumerate subdomains (subfinder) and perform zone transfer

    Extended:

        --cache-bypass <value>                try (proxy) cache bypass
        --user-agent <value>                  set 'User-Agent' header
        --referer <value>                     set 'Referer' header
        --auth <value>                        set authentication method
        --tlsv <value>                        set tls version
        --ciph <value>                        set of cryptographic algorithm
        --max-redirects <num>                 set max redirects (default: 10)
        --timeout <num>                       set max timeout (default: 15)
        --hide-src-ip                         hide source ip from output
```



## Source
* http://www.cis.syr.edu/~wedu/seed/all_labs.html - Developing Instructional Laboratories for Computer SEcurity EDucation
* https://www.vulnhub.com/ - Virtual Machines for Localhost Penetration Testing.
* https://pentesterlab.com/ - PentesterLab is an easy and great way to learn penetration testing.
