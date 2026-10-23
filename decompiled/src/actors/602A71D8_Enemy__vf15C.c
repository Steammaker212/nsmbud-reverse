/* Enemy__vf15C
 * address: 0x602A71D8   size: 340   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6029E328 : Thwomp
//   - 0x603835E8 : Pokey
//   - 0x600259B8 : BossBase
int __fastcall Enemy__vf15C(int a1, int a2)
{
  char v2; // r12
  float v5; // s0
  char *v6; // r5
  char v7; // r0
  int v8; // r2
  _DWORD v10[5]; // [sp+0h] [bp-40h] BYREF
  char v11; // [sp+14h] [bp-2Ch]
  int v12; // [sp+18h] [bp-28h]
  char v13; // [sp+1Ch] [bp-24h]
  Vec3 v14; // [sp+24h] [bp-1Ch] BYREF

  if ( ((unsigned int)&dword_60C907F8 & ~(1613394428 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F8) )
  {
    dword_60C9082C = 0;
    dword_60C90830 = 0x40000000;
    dword_60C90834 = 0;
    dword_60C90838 = 1080033280;
    _cxa_guard_release(&dword_60C907F8);
  }
  v5 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v14.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v14.y = v5;
  v14.z = 4500.0;
  EffectData_create(0x179, &v14, 0, 0);
  SE_EMY_DOWN_SYNC_ref(FIELD_U32(EnemyCounterMaybe_instance, 240), (float *)(a1 + 108));
  sub_6000A454(EnemyCounterMaybe_instance);
  v6 = (char *)&unk_60C907F0 + 8 * a2;
  v7 = sub_602856EC((int *)(a1 + 6292), FIELD_U32(EnemyCounterMaybe_instance, 240));
  v8 = *((_DWORD *)v6 + 16);
  v10[0] = *((_DWORD *)v6 + 15);
  v10[1] = v8;
  v10[2] = -1065353216;
  v10[3] = unk_60C906E8;
  v10[4] = &stru_60C90710;
  v11 = v7;
  v12 = FIELD_U32(a1, 80);
  v13 = 4;
  return sub_602A852C(a1 + 6104, v10);
}
