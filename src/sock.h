#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <netinet/ip_icmp.h>
#include <time.h>
#include <fcntl.h>
#include <signal.h>
#include <time.h>

// Define the Packet Constants
// ping packet size
#define PING_PKT_S 64

// Automatic port number
#define PORT_NO 0

// Automatic port number
#define PING_SLEEP_RATE 1000000

// Gives the timeout delay for receiving packets
// in seconds
#define RECV_TIMEOUT 1

extern int ping_loop;

// Performs a DNS lookup
char *dns_lookup(char *addr_host, struct sockaddr_in *addr_con);

// Resolves the reverse lookup of the hostname
char *reverse_dns_lookup(char *ip_addr);

// make a ping request
void send_ping(int ping_sockfd, struct sockaddr_in *ping_addr, char *ping_dom, char *ping_ip, char *rev_host);