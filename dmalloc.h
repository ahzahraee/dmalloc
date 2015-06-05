#include <stddef.h>

/* Initialize an array of char and return the pointer to the begining */
void * dmalloc_init();

/* Allocate a chunk of the memory from the fixed size array and return the pointer to its begining */
void * dmalloc(void **, size_t);

/* Allocate a chunk of the memory and initialize it to zero, returning the pointer to its begining */
void * dcalloc(void **, size_t, size_t);

