#include <stdio.h>
#include <conio.h>

#include "true.h"
#include "var.h"

#define RESULT_FIRST(x, y, z) (MAX(SQR(x - z), x - y))
#define PRINTR(w) puts ("Result :"); \
		printf (#w"=%f\n",(float)w)
#define SQR(x) ((x) * (x))
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

using namespace nsVar;

void nsTrue::True()
{
	w = RESULT_FIRST(x, y, z);
	PRINTR(w);
}