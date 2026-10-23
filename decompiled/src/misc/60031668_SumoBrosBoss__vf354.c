/* SumoBrosBoss__vf354
 * address: 0x60031668   size: 240   group: misc
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
int __fastcall SumoBrosBoss__vf354(StateActor *a1)
{
  Vec3 *p_position; // r6
  signed int v3; // r5
  unsigned int v4; // r1
  int v5; // r0
  _DWORD v7[5]; // [sp+0h] [bp-38h] BYREF
  char v8; // [sp+14h] [bp-24h]
  signed int v9; // [sp+18h] [bp-20h]
  char v10; // [sp+1Ch] [bp-1Ch]

  p_position = &FIELD_U32(a1, 0x6C);
  v3 = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 72))(a1);
  v4 = *(_DWORD *)&a1[1]._.collisionMgr[568];
  if ( v4 )
  {
    v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
    if ( v5 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60C7FD98);
  }
  sub_600228F4(dword_60C7F52C, (int)p_position, 6);
  v7[0] = 0;
  v7[1] = 1084227584;
  v7[2] = -1058013184;
  v7[3] = -1110651699;
  v7[4] = &dword_60C7F9C8;
  v8 = -1;
  v9 = v3;
  v10 = 4;
  return sub_602A852C((int)&a1[1]._._._.heap, v7);
}
