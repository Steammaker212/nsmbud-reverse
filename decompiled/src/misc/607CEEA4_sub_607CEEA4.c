/* sub_607CEEA4
 * address: 0x607CEEA4   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CEEA4(_DWORD *a1, int a2)
{
  float v2; // s0
  int v3; // r3
  int v4; // r12

  if ( (unsigned int)a2 < 2 )
  {
    a1[40] = 0;
    if ( a2 == 1 )
      *((float *)a1 + 28) = *((float *)a1 + 28) + -16.0;
  }
  else
  {
    if ( a2 == 2 )
    {
      v2 = 32.0;
      goto LABEL_9;
    }
    if ( a2 == 3 )
    {
      v2 = -32.0;
LABEL_9:
      v3 = a1[28];
      v4 = a1[29];
      *((float *)a1 + 2456) = v2 + *((float *)a1 + 27);
      a1[2457] = v3;
      a1[2458] = v4;
    }
  }
  return sub_6076A88C(a1, a2);
}
