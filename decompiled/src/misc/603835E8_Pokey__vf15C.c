/* Pokey__vf15C
 * address: 0x603835E8   size: 168   group: misc
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
int __fastcall Pokey__vf15C(int a1)
{
  char v2; // r0
  _DWORD v4[5]; // [sp+0h] [bp-30h] BYREF
  char v5; // [sp+14h] [bp-1Ch]
  int v6; // [sp+18h] [bp-18h]
  char v7; // [sp+1Ch] [bp-14h]

  SE_EMY_DOWN_SYNC_ref(FIELD_U32(EnemyCounterMaybe_instance, 240), (float *)(a1 + 108));
  sub_6000A454(EnemyCounterMaybe_instance);
  v2 = sub_602856DC(a1 + 6292, FIELD_U32(EnemyCounterMaybe_instance, 240));
  memset(v4, 0, 12);
  v4[3] = unk_60C906E8;
  v4[4] = &unk_60C96A1C;
  v5 = v2;
  v6 = FIELD_U32(a1, 80);
  v7 = 4;
  return sub_602A852C(a1 + 6104, v4);
}
