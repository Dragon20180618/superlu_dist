/* superlu_dist_config.h.in */

/* Enable parmetis */
#define HAVE_PARMETIS TRUE

/* Enable LAPACK */
/* #undef SLU_HAVE_LAPACK */

/* Enable CombBLAS */
/* #undef HAVE_COMBBLAS */

/* enable 64bit index mode */
#define XSDK_INDEX_SIZE 64

#if (XSDK_INDEX_SIZE == 64)
#define _LONGINT 1

#endif
