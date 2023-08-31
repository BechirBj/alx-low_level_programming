#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *a);
void print_binary(unsigned long int aux);
int get_bit(unsigned long int aux, unsigned int index);
int set_bit(unsigned long int *aux, unsigned int index);
int clear_bit(unsigned long int *aux, unsigned int index);
unsigned int flip_bits(unsigned long int aux, unsigned long int m);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif
