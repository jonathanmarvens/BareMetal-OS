// =============================================================================
// BareMetal -- a 64-bit OS written in Assembly for x86-64 systems
// Copyright (C) 2008-2013 Return Infinity -- see LICENSE.TXT
//
// The BareMetal OS C/C++ library header.
//
// Version 2.0
//
// This allows for a C/C++ program to access OS functions available in BareMetal OS
// =============================================================================


void b_output(const char *str);
void b_output_chars(const char *str, unsigned long nbr);

unsigned long b_input(unsigned char *str, unsigned long nbr);
unsigned char b_input_key(void);

unsigned long b_smp_enqueue(void *ptr, unsigned long var);
unsigned long b_smp_dequeue(unsigned long *var);
void b_smp_run(unsigned long ptr, unsigned long var);
void b_smp_wait(unsigned long nbr);

unsigned long b_mem_allocate(unsigned long *mem, unsigned long nbr);
unsigned long b_mem_release(unsigned long *mem, unsigned long nbr);

void b_ethernet_tx(void *mem, void *dest, unsigned short type, unsigned short len);
unsigned long b_ethernet_rx(void *mem);

unsigned long b_file_open(const unsigned char *name);
unsigned long b_file_close(unsigned long handle);
unsigned long b_file_read(unsigned long handle, void *buf, unsigned int count);
unsigned long b_file_write(unsigned long handle, const void *buf, unsigned int count);

/*
unsigned long b_file_seek(unsigned long handle, unsigned int offset, unsigned int whence);
unsigned long b_file_query(const unsigned char *name);
unsigned long b_file_create(const char *name, unsigned long size);
unsigned long b_file_delete(const unsigned char *name);
*/


// =============================================================================
// EOF
