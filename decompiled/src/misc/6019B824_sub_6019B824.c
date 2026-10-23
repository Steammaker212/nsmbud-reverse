/* sub_6019B824
 * address: 0x6019B824   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_6019B824(int a1)
{
  __n64 result; // d0
  float v2[4]; // [sp+0h] [bp-10h] BYREF

  sub_601FF878(dword_60C8C188, v2, a1, 1);
  result.n64_f32[0] = v2[0] / 640.0;
  result.n64_f32[1] = v2[1] / 360.0;
  return result;
}
