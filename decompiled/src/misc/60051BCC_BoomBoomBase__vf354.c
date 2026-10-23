/* BoomBoomBase__vf354
 * address: 0x60051BCC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026884
// 
// Overridden by: None
int __fastcall BoomBoomBase__vf354(StateActor *a1)
{
  int p_position; // r5
  signed int v3; // r6
  _DWORD v5[5]; // [sp+0h] [bp-30h] BYREF
  char v6; // [sp+14h] [bp-1Ch]
  signed int v7; // [sp+18h] [bp-18h]
  char v8; // [sp+1Ch] [bp-14h]

  p_position = (int)&FIELD_U32(a1, 0x0)._.position;
  v3 = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
  sub_600228F4(dword_60C7F52C, p_position, 6);
  v5[0] = 0;
  v5[1] = 1077936128;
  v5[2] = -1065353216;
  v5[3] = -1103101952;
  v5[4] = &stru_60C7F63C;
  v6 = -1;
  v7 = v3;
  v8 = -1;
  return sub_602A852C((int)&a1[1]._._._.heap, v5);
}
