// stddeutsch.h replacing stdlib.h
// author Justin Sostre 

#include <stdlib.h>

#define stddeutsch.h stdlib.h
#define umfassen include
#define wahr 0
#define falsch 1

// PRINT
#define drucken(fmt, ...) printf(fmt, ##__VA_ARGS__)

// LOGIC
#define während while
#define machen do
#define ob if

// STANDARD
#define große_a size_t
#define EXIT_FAILURE SCHEITERN_AUSFAHRT
#define EXIT_SUCCESS ERFOLG_AUSFAHRT
#define RAND_MAX ZUFÄLLIG_MAX

// FUNCTIONS - FUNKTIONEN
#define azus(zeich) atol(zeich)
#define azug(zeich) atoi(zeich)
#define zeichzud(zeich, zeig) strod(zeich, zeig)

// Memory
#define szourd(zeich) malloc(zeich)
#define czourd(zeich) calloc(zeich)
#define rezourd(zeich) realloc(zeich)
