/* Thwomp__vf15C
 * address: 0x6029E328   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A71D8
// 
// Overridden by: None
int __fastcall Thwomp__vf15C(int a1, int a2)
{
  float v3; // s0
  int v4; // r0
  _DWORD v6[5]; // [sp+4h] [bp-3Ch] BYREF
  char v7; // [sp+18h] [bp-28h]
  int v8; // [sp+1Ch] [bp-24h]
  char v9; // [sp+20h] [bp-20h]
  Vec3 v10; // [sp+24h] [bp-1Ch] BYREF

  v3 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v10.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v10.y = v3;
  v10.z = 4500.0;
  if ( !a2 )
    EffectData_create(377, &v10, 0, 0);
  SE_EMY_DOWN_SYNC_ref(FIELD_U32(EnemyCounterMaybe_instance, 240), (float *)(a1 + 108));
  sub_6000A454(EnemyCounterMaybe_instance);
  v4 = FIELD_U32(EnemyCounterMaybe_instance, 240);
  v6[0] = 1069547520;
  v6[1] = 1081711002;
  v6[2] = -1065353216;
  v6[3] = unk_60C906E8;
  v6[4] = &stru_60C90710;
  v7 = v4;
  v8 = FIELD_U32(a1, 80);
  v9 = 4;
  return sub_602A852C(a1 + 6104, v6);
}
