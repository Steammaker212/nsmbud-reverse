/* sub_603D9384
 * address: 0x603D9384   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603D9384(int a1)
{
  float v1; // s0
  float v2; // s2
  int v3; // r1
  _DWORD v5[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_F32(a1, 116);
  v3 = FIELD_U32(a1, 108);
  v5[0] = 0;
  v5[1] = v3;
  *(float *)&v5[2] = v1 + -16.5;
  *(float *)&v5[3] = v2 + 8.0;
  v5[4] = 1071644672;
  v5[5] = 1071644672;
  v5[6] = 1082130432;
  v5[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v5, 1u);
}
