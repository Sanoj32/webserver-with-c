#include <arpa/inet.h>  // For inet_ntoa, htons
#include <stdio.h>      // For printf, perror, FILE operations
#include <stdlib.h>     // For exit
#include <string.h>     // For strlen, string operations
#include <unistd.h>     // For close, read, write

#define PORT 8080
#define BUFFER_SIZE 1024

struct myStructure {
    int MyNum;
    char myLetter;
};
void send_html(int client_socket, const char* file_path){

    struct myStructure example;
    example.MyNum = 42;
    example.myLetter = 'A';
    FILE* html_file = fopen(file_path,"r");
}