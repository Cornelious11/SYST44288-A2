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
        
        exit(EXIT_SUCCESS);
    }
    exit(EXIT_FAILURE);
}