/* sub_609673A0
 * address: 0x609673A0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609673A0(int a1)
{
  float v3[5]; // [sp+4h] [bp-14h] BYREF

  FIELD_U8(a1, 112) = 1;
  v3[0] = -0.0;
  v3[1] = -1.0;
  v3[2] = -0.0;
  ((void (__fastcall *)(int, float *))loc_60966E2C)(a1, v3);
  return a1;
}
