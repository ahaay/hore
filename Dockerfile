FROM rhmandrian/hore

RUN apt update -y && apt install curl libimage-exiftool-perl binutils -y
RUN chmod +x /bin/hore/*
CMD ["/bin/hore/horetool"]