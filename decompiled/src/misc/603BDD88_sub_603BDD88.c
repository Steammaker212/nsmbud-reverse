/* sub_603BDD88
 * address: 0x603BDD88   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603BDD88(int a1)
{
  int *v1; // r2
  float v2; // s0
  float v3; // s2
  float v4; // s4
  float v5; // r3
  float v6; // r1
  float v7; // r2
  float v8; // s10
  float v9; // s2
  EnemyFreezeMgr_Info v11; // [sp+0h] [bp-28h] BYREF

  v1 = &dword_60C98480[7 * FIELD_U32(a1, 6352)];
  v2 = *((float *)v1 + 1);
  v3 = *((float *)v1 + 2);
  v4 = *((float *)v1 + 3);
  v5 = *((float *)v1 + 5);
  v11.settings = *v1 & 7;
  v6 = *((float *)v1 + 4);
  v7 = *((float *)v1 + 6);
  v8 = FIELD_F32(a1, 116);
  v9 = FIELD_F32(a1, 112) + v3;
  v11.position.x = FIELD_F32(a1, 108) + v2;
  v11.position.y = v9;
  v11.position.z = v8 + v4;
  v11.scale.z = v7;
  v11.scale.y = v5;
  v11.scale.x = v6;
  v11.field_1C = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), &v11, 1u);
}
