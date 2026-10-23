/* sub_6090CCA4
 * address: 0x6090CCA4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090CCA4(float *a1)
{
  float v1; // s16
  float v2; // s0
  float v3; // s0

  v1 = a1[39] - a1[40];
  v2 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 16))(a1);
  v3 = atan2f(v1 * 0.5, v2);
  return v3 + v3;
}
