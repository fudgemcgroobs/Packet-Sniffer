#ifndef CS241_ANALYSIS_H
#define CS241_ANALYSIS_H

#include <pcap.h>

void analyse(struct pcap_pkthdr *header, const unsigned char *packet, int verbose);
void report();  //method inside analysis called at end of execution

#endif