#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int get_endianness(void);
int _atoi(const char *s);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);

#endif /* MAIN_H */
