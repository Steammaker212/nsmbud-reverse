/* sub_608CF0DC
 * address: 0x608CF0DC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608CF0DC(int a1, int a2)
{
  int v2; // r3
  int v3; // r4
  _DWORD *result; // r0
  unsigned int v5; // r3
  _DWORD *v6; // r4

  v2 = a1 + a2;
  v3 = a1 + 3;
  result = 0;
  v5 = v2 & 0xFFFFFFFC;
  v6 = (_DWORD *)(v3 & 0xFFFFFFFC);
  if ( (unsigned int)v6 <= v5 && v5 - (unsigned int)v6 >= 0x2C )
  {
    *v6 = v6;
    v6[1] = v6;
    v6[5] = v6 + 5;
    v6[6] = v6 + 5;
    sub_608CF434(v6, 1179798856, v6 + 11);
    v6[8] = v6[2];
    v6[9] = v6[3];
    v6[10] = 0;
    return v6;
  }
  return result;
}
