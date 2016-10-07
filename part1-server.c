/*
Hilary Southey
991376654
SYST44288 - Assignment 2 (Part 1)



*/
#include<arpa/inet.h>
#include<errno.h>
#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<sys/types.h>

int main (int argc, char *argv[]){
    if(argc < 1){
        fputs("You must run this with an argument",stderr)
        exit(EXIT_FAILURE);
    }
    else{
        int listenfd = 0, connfd = 0;
        struct sockaddr_in serv_addr;
        char sendBuff[1025];
        int numrv;

        listenfd = socket(AF_INET, SOCK_STREAM, 0);
        puts("socket retrieve success");

        memset(&serv_addr, '0', sizeof(serv_addr));
        memset(sendBuff, '0', sizeof(sendBuff));

        serv_addr.sin_family = AF_INET;
        serv_addr.sin_addr.s_addr = hton1(INADDR_ANY);
        serv_addr.sin_port = htons(argv[1]);

        bind(listenfd, (struct sockaddr*)&serv_addr,sizeof(serv_addr));

        if(listen(listenfd, 10) == -1){
            fputs("Failed to listen",stderr);
            exit(EXIT_FAILURE);
        }

        exit(EXIT_SUCCESS);
    }
    exit(EXIT_FAILURE);
}
