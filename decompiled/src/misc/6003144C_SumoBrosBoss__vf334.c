/* SumoBrosBoss__vf334
 * address: 0x6003144C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026818
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf334(StateActor *a1, int a2)
{
  Vec3 *p_position; // r7
  signed int v5; // r8
  unsigned int v6; // r5
  unsigned int v7; // r1
  int v8; // r0
  _DWORD v10[5]; // [sp+0h] [bp-38h] BYREF
  char v11; // [sp+14h] [bp-24h]
  signed int v12; // [sp+18h] [bp-20h]
  char v13; // [sp+1Ch] [bp-1Ch]

  p_position = &FIELD_U32(a1, 0x0)._.position;
  v5 = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 72))(a1);
  v6 = FIELD_U8(a2, 84);
  if ( v6 <= 3 )
    sub_60025B84((int)a1, a2, (int)p_position, 6u);
  v7 = *(_DWORD *)&a1[1]._.collisionMgr[568];
  if ( v7 )
  {
    v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v7);
    if ( v8 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v8 + 192))(v8, &dword_60C7FD98);
  }
  v10[0] = 0;
  v10[1] = 1084227584;
  v10[2] = -1058013184;
  v10[3] = -1110651699;
  v10[4] = &dword_60C7F9C8;
  v11 = -1;
  v12 = v5;
  v13 = v6;
  return sub_602A852C((int)&a1[1]._._._.heap, v10);
}
