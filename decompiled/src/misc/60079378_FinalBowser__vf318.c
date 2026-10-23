/* FinalBowser__vf318
 * address: 0x60079378   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600267A0
// 
// Overridden by: None
int __fastcall FinalBowser__vf318(int a1, int a2)
{
  int v2; // r3
  float v3; // s2
  _DWORD v5[5]; // [sp+4h] [bp-14h] BYREF

  v2 = FIELD_U32(a1, 7392);
  v3 = FIELD_F32(a1, 7388);
  v5[0] = FIELD_U32(a1, 7384);
  *(float *)&v5[1] = v3 + 80.0;
  v5[2] = v2;
  return sub_60025C14(a1, a2, (int)v5, 7);
}
