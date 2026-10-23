/* sub_6037C45C
 * address: 0x6037C45C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6037C45C(int a1)
{
  float v1; // s0
  float v2; // s2
  int v3; // r2
  _DWORD v5[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_F32(a1, 7608);
  v5[0] = 4097;
  v3 = FIELD_U32(a1, 116);
  v5[1] = FIELD_U32(a1, 108);
  *(float *)&v5[2] = (float)(v1 + 32.0) - v2;
  v5[3] = v3;
  v5[4] = 1068149419;
  v5[5] = fabsf((float)(v2 + 8.0) / 36.0);
  v5[6] = 1065353216;
  v5[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v5, 1u);
}
