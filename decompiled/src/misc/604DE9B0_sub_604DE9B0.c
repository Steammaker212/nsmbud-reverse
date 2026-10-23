/* sub_604DE9B0
 * address: 0x604DE9B0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DE9B0(int a1)
{
  float v1; // s4
  float v3[4]; // [sp+0h] [bp-10h] BYREF

  v1 = FIELD_F32(a1, 368);
  v3[0] = FIELD_F32(a1, 364) + -640.0;
  v3[1] = -(float)(v1 + -360.0);
  return sub_6047E518(a1 + 24, (FIELD_U32(a1, 360) >> 12) & 1, (FIELD_U32(a1, 92) >> 12) & 1, (int)v3);
}
