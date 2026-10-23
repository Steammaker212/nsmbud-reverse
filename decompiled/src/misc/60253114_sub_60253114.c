/* sub_60253114
 * address: 0x60253114   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60253114(int a1)
{
  float v1; // s2
  float v2; // s0
  int v3; // r2
  float v4; // s4
  _DWORD v6[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 108);
  v2 = FIELD_F32(a1, 112) + -1.5;
  v3 = FIELD_U32(a1, 116);
  v4 = flt_60AF1EA0[FIELD_U32(a1, 80)];
  v6[0] = 0;
  *(float *)&v6[1] = v1 + v4;
  *(float *)&v6[2] = v2;
  v6[3] = v3;
  v6[4] = 1058642330;
  v6[5] = 1058642330;
  v6[6] = 1058642330;
  v6[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v6, 1u);
}
