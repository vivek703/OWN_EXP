#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define TEST_INET 1
#ifndef TEST_INET
int main() {

    // In the list I have: 104.40.0.0./13
    int cidr = 13;
    u_int32_t ipaddr_from_pkt = 1747488105;     // pkt coming from 104.40.141.105
    u_int32_t ipaddr_from_list = 1747451904;    // 104.40.0.0
    int mask = (-1) << (32 - cidr);

    if ((ipaddr_from_pkt & mask) == ipaddr_from_list)
        printf("IP address belongs to the given range!!!\n");
    else printf ("failure\n");

    return 0;
}

#else

#define INADDR  "104.40.141.105"
#define IN6ADDR "DEAD:BEEF:7654:3210:FEDC:3210:7654:BA98"

int main(int argc, char *argv[])
{
   struct in_addr inaddr;
   struct in6_addr in6addr;
   char buf[INET_ADDRSTRLEN], buf6[INET6_ADDRSTRLEN];
   int rval;

   if ( (rval = inet_pton(AF_INET, INADDR, &inaddr)) == 0) {
      printf("Invalid address: %s\n", INADDR);
      exit(EXIT_FAILURE);
   } else if (rval == -1) {
      perror("inet_pton");
      exit(EXIT_FAILURE);
   }

   if (inet_ntop(AF_INET, &inaddr, buf, sizeof(buf)) != NULL)
      printf("inet addr: %s\n", buf);
   else {
      perror("inet_ntop");
      exit(EXIT_FAILURE);
   }

   if ( (rval = inet_pton(AF_INET6, IN6ADDR, &in6addr)) == 0) {
      printf("Invalid address: %s\n", IN6ADDR);
      exit(EXIT_FAILURE);
   } else if (rval == -1) {
      perror("inet_pton");
      exit(EXIT_FAILURE);
   }

   if (inet_ntop(AF_INET6, &in6addr, buf6, sizeof(buf6)) != NULL)
      printf("inet6 addr: %s\n", buf6);
   else {
      perror("inet_ntop");
      exit(EXIT_FAILURE);
   }

   return(EXIT_SUCCESS);
}
#endif //
