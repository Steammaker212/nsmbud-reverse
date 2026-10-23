/* sub_6028D3D4
 * address: 0x6028D3D4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6028D3D4(int a1)
{
  int v1; // r1
  float v2; // s2
  float v3; // s0
  _DWORD v5[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_U32(a1, 6320);
  v2 = FIELD_F32(a1, 6324);
  v3 = FIELD_F32(a1, 6328);
  v5[0] = 2;
  v5[1] = v1;
  *(float *)&v5[2] = v2 + -12.0;
  *(float *)&v5[3] = v3 + -2.0;
  v5[4] = 1065353216;
  v5[5] = 1067030938;
  v5[6] = 1071225242;
  v5[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v5, 1u);
}
