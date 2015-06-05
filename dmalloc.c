#include "dmalloc.h"
#include <string.h>

void * dmalloc_init(){
  char x[256*1024];
  void * h = &x[0];
  return h;
}

void * dmalloc(void ** h, size_t size) {
  void *m = *h;
  char *hh = (char*)*h;
  hh +=  size;
  *h = (void*)hh;
  return m;
}

void * dcalloc(void ** h, size_t nelem, size_t elsize) {
  int i;
  void *m = *h;
  char *hh = (char*)*h;
  size_t size = nelem*elsize;
  hh += size;
  *h = (void*)hh;
  memset(m, 0, size);
  return m;
}
