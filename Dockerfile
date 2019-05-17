FROM ubuntu

WORKDIR hore

COPY . /hore

RUN chmod +x hore && ./hore

ENTRYPOINT ./hore