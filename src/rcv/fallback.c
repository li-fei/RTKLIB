#include "rtklib.h"

/* get fields (little-endian) ------------------------------------------------*/
#define U1(p) (*((unsigned char *)(p)))
static unsigned short U2(unsigned char *p) {unsigned short u; memcpy(&u,p,2); return u;}
static unsigned int   U4(unsigned char *p) {unsigned int   u; memcpy(&u,p,4); return u;}
static int            I4(unsigned char *p) {int            i; memcpy(&i,p,4); return i;}
static float          R4(unsigned char *p) {float          r; memcpy(&r,p,4); return r;}
static double         R8(unsigned char *p) {double         r; memcpy(&r,p,8); return r;}

/* weak alias of decode_fallback */
int decode_fallback(int fmt, raw_t* raw) __attribute__((weak, alias("__weak_decode_fallback")));

int __weak_decode_fallback(int fmt, raw_t* raw)
{
    if (fmt == STRFMT_UNICORE) {
        unsigned type=U2(raw->buff+4);
        printf("unknown type: %d\n", type);
    }
    return 0;
}
