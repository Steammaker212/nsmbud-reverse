/* sub_60872BF0
 * address: 0x60872BF0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60872BF0(float *a1)
{
  float *result; // r0
  float v3; // s0
  int v4; // r2
  int v5; // r1
  int v6; // r0

  result = *((float **)a1 + 1);
  v3 = *result;
  if ( a1[11] != *result )
  {
    v4 = *((_DWORD *)a1 + 10);
    if ( v4 <= 0 )
    {
      v5 = *((_DWORD *)a1 + 12);
      v6 = *((_DWORD *)a1 + 15);
    }
    else
    {
      v5 = *((_DWORD *)a1 + 12);
      v6 = *((_DWORD *)a1 + 15);
      if ( v4 <= *((_DWORD *)a1 + 9) )
      {
        sub_60870D20(v6, v5, *((_DWORD *)a1 + 8), v3);
LABEL_7:
        result = **((float ***)a1 + 1);
        *((_DWORD *)a1 + 11) = result;
        return result;
      }
    }
    sub_60870CB0(v6, v5, v3);
    goto LABEL_7;
  }
  return result;
}
