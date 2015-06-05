#include "dmalloc.h"
#include "stdio.h"

typedef struct teststruct {
        int x;
        float y;
} mystruct;

int main() {

    int i;
    void *p;
    size_t t1s, t2s, t3s, s1s;
    char *t1, *t3;
    int *t2;
    mystruct *s1;

    t1s=3;
    t2s = 2;
    t3s = 2;
    s1s = 4;

    p = dmalloc_init();

    t1 = (char *) dcalloc(&p, t1s, sizeof(char));
    t2 = (int *) dmalloc(&p, t2s*sizeof(int));
    t3 = (char *) dmalloc(&p, t3s);
    s1 = (mystruct *) dmalloc(&p, s1s);

   for (i=0; i<t1s; i++)
   	printf("%d\n",t1[i]);

   for (i=0; i<t2s; i++)
        t2[i] = 23*(i+1);
   for (i=0; i<t2s; i++)
        printf("%d\n",t2[i]);

   for (i=0; i<t3s; i++)
       t3[i] = 5*(i+1);
   for (i=0; i<t3s; i++)
       printf("%d\n",t3[i]);

   for (i=0; i<s1s; i++) {
       s1[i].x = i+1;
       s1[i].y = 1.5 * (float)(i+1);
   }
   for (i=0; i<s1s; i++)
       printf("%d\t%f\n", s1[i].x, s1[i].y);

   return 0;
}


