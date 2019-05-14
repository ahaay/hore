# Hore Tool
> A collection digital forensic tool

# List Tool
 * Cryptography
   * Encode Decode
 * Forensic


# Dependency
 * lib


## Prerequisites
To install necessary prerequisites on Ubuntu:

    sudo apt-get install openssl coreutils gzip


# Installation

Building geth requires both a Go (version 1.10 or later) and a C compiler.
You can install them using your favourite package manager.
Once the dependencies are installed, run

    make geth

or, to build the full suite of utilities:

    make all


# Environment
* Any OS having a Bash environment
* The following tools must be installed and in the PATH:  openssl, shred, gzip, zcat


# Usage
```
./encrypt-tool.sh encrypt <plaintextFile> [outputDir]
./encrypt-tool.sh decrypt <encryptedFile> <outputFile>
```


## Source
* http://www.cis.syr.edu/~wedu/seed/all_labs.html - Developing Instructional Laboratories for Computer SEcurity EDucation
* https://www.vulnhub.com/ - Virtual Machines for Localhost Penetration Testing.
* https://pentesterlab.com/ - PentesterLab is an easy and great way to learn penetration testing.