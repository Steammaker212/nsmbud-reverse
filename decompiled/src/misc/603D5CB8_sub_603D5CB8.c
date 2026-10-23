/* sub_603D5CB8
 * address: 0x603D5CB8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603D5CB8(int a1)
{
  int v1; // r2
  int v2; // r3
  int v3; // r12
  float v4; // s0
  _DWORD v6[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_U32(a1, 108);
  v2 = FIELD_U32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v4 = FIELD_F32(a1, 6364);
  v6[0] = 4097;
  v6[1] = v1;
  v6[2] = v2;
  v6[3] = v3;
  v6[4] = 1071225242;
  *(float *)&v6[5] = (float)(v4 + 8.0) / 36.0;
  v6[6] = 1077936128;
  v6[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v6, 1u);
}
