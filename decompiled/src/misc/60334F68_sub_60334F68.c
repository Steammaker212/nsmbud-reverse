/* sub_60334F68
 * address: 0x60334F68   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60334F68(float *result)
{
  float v1; // s0
  int v2; // r1

  v1 = -1.5;
  if ( *((_DWORD *)result + 1650) == 1 )
    v1 = 1.5;
  result[30] = v1;
  v2 = *((_DWORD *)result + 5);
  if ( (v2 & 0x100) != 0 )
  {
    result[31] = -2.0;
    *((_DWORD *)result + 800) &= ~0x40000000u;
    *((_DWORD *)result + 801) &= ~4u;
  }
  if ( (v2 & 0x10) != 0 )
  {
    result[31] = -2.0;
    *((_DWORD *)result + 800) &= ~0x40000000u;
    *((_DWORD *)result + 801) &= ~4u;
  }
  return result;
}
