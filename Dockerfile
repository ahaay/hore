FROM ubuntu:16.04

RUN apt update -y && apt install curl libimage-exiftool-perl dnsutils binutils -y
RUN chmod +x /bin/hore/*
COPY . /bin/hore
RUN chmod 777 /bin/hore/*
CMD ["/bin/hore/horetool"] 
