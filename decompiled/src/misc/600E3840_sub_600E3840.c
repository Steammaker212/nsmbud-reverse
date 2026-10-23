/* sub_600E3840
 * address: 0x600E3840   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600E3840(float *a1)
{
  float v2; // s16
  float result; // s0

  v2 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 204))(a1);
  result = v2 * (*(float (__fastcall **)(float *, float))(*(_DWORD *)a1 + 200))(a1, v2);
  a1[1617] = result;
  return result;
}
