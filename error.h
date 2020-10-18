#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#define notice(...) do{\
	fprintf(stderr,"\033[92;1mNotice!\033[0m at line %d of %s in %s():\n\t",__LINE__,__FILE__,__func__);\
	fprintf(stderr,__VA_ARGS__);\
	fputs("\n",stderr);\
	}while(0)

#define warning(...) do{\
	fprintf(stderr,"\033[93;1mWarning!\033[0m at line %d of %s in %s():\n\t",__LINE__,__FILE__,__func__);\
	fprintf(stderr,__VA_ARGS__);\
	fputs("\n",stderr);\
	}while(0)

#define error(...) do{\
	fprintf(stderr,"\033[91;1;5mError!\033[0m at line %d of %s in %s():\n\t",__LINE__,__FILE__,__func__);\
	fprintf(stderr,__VA_ARGS__);\
	fputs("\n",stderr);\
	}while(0)

#define panic(...) do{\
	fprintf(stderr,"\033[95;1;6mPanic!\033[0m at line %d of %s in %s():\n\t",__LINE__,__FILE__,__func__);\
	fprintf(stderr,__VA_ARGS__);\
	fputs("\n",stderr);\
	abort();\
	}while(0)
