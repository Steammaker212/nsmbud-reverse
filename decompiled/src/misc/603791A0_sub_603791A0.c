/* sub_603791A0
 * address: 0x603791A0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603791A0(int *a1)
{
  float v2; // s16
  int result; // r0
  float v4; // s0
  int v5; // r1

  v2 = *(float *)(sub_60377B20(dword_60C96478, *a1, a1[3]) + 16);
  result = sub_60377B20(dword_60C96478, a1[1], a1[4]);
  v4 = v2 - FIELD_F32(result, 16);
  if ( v4 > 0.0 && (result = a1[7], FIELD_F32(result, 108) > v2)
    || v4 < 0.0 && (result = a1[7], FIELD_F32(result, 108) < v2) )
  {
    v5 = a1[3];
    a1[1] = *a1;
    a1[3] = v5 + 1;
    a1[4] = v5 + 1;
    return v5 + 1;
  }
  return result;
}
