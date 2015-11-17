#include "basicli.h"
#include <project.h>




BLINK_START
#if WITH_LISTV
    INT_BLINK(listv,0) BLINK_DONE
#endif
#if WITH_LISTF
    INT_BLINK(listf,0)  BLINK_DONE
#endif
VOID_BLINK(Led1_Write,1) BLINKINT BLINK_DONE
BLINK_END
int basicli_init(void)
{
	call_func("", NULL, -2);
//	BLINK_VAR_INT(g_test);
	ftos = 0; /* initialize the FOR stack index */
	gtos = 0; /* initialize the GOSUB stack index */
    return 0;
}
