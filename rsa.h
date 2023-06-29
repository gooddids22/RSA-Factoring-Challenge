#ifndef _RSA_H_
#define _RSA_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <inttypes.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define S_BUFFER 2000
#define VALUE 1000

/* factors.c */
void init(char *buffer);
void file2buffer(char *filename, char *buffer);
unsigned short int _atoi(char *src, unsigned short int *dest);
void _putint(unsigned short int *dest, unsigned short int n);

/* pollard-rho.c */
unsigned short int modular_pow(unsigned short int base, int exponent, unsigned short int modulus);
unsigned short int __gcd(unsigned short int a, unsigned short int b);
unsigned short int PollardRho(unsigned short int n);
unsigned short int compute(unsigned short int *src, unsigned short int n);

#endif /* _RSA_H */
