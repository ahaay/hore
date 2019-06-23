FROM rhmandrian/hore
COPY . /bin/hore
RUN chmod 777 /bin/hore/*
CMD ["/bin/hore/horetool"]