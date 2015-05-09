#include "yamorn.h"

#ifndef __TRACEROUTE_H
#define __TRACEROUTE_H

#define	BUFSIZE	    1500

char	 recvbuf[BUFSIZE];
char	 sendbuf[BUFSIZE];

char *host;
pid_t pid;
int datalen;		/* bytes of data following ICMP header */
int sendfd, recvfd;
int ttl, max_ttl;
u_short sport;

struct data{			/* of outgoing UDP data */
    u_short seq;		/* sequence number */
    u_short ttl;		/* TTL packet left with */
    struct timeval tv;	/* time packet left */
};


#endif



