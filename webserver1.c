#include <stdio.h>
#include <sys/socket.h>
#define PORT 9999

int main() {
    
    printf("VIVA CRISTO REY!\n");

    // creating socket. The socket() function returns a file descriptor (that I assign to sockfd)
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);

    // to check whether or not calling socket() worked. For more information, check https://man.archlinux.org/man/core/man-pages/socket.3p.en#RETURN_VALUE
    if (sockfd == -1) {
        printf("Couldn't create socket. Shutting down.\n");

        return -1;
    }

    return 0;
}

