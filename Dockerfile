FROM ubuntu

WORKDIR hore

COPY . /hore

RUN apt install strings -y && apt install exiftool -y
RUN chmod +x hore && ./hore

ENTRYPOINT ./hore