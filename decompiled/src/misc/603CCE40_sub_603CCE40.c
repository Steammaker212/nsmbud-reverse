/* sub_603CCE40
 * address: 0x603CCE40   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603CCE40(int a1)
{
  float v1; // s4
  float v2; // s2
  EnemyFreezeMgr_Info v4; // [sp+0h] [bp-28h] BYREF

  v4.settings = 0;
  v1 = FIELD_F32(a1, 116);
  v2 = FIELD_F32(a1, 112) + *(float *)&dword_60C98ABC;
  v4.position.x = FIELD_F32(a1, 108) + *(float *)&dword_60C98AB8;
  v4.position.y = v2;
  v4.position.z = v1 + *(float *)&dword_60C98AC0;
  v4.scale = *(Vec3 *)byte_60C98AC4;
  v4.field_1C = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), &v4, 1u);
}
