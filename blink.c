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
