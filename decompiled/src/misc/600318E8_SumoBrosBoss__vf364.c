/* SumoBrosBoss__vf364
 * address: 0x600318E8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268BC
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf364(int a1)
{
  signed int v2; // r5
  unsigned int v3; // r1
  int v4; // r0
  _DWORD v6[5]; // [sp+0h] [bp-30h] BYREF
  char v7; // [sp+14h] [bp-1Ch]
  signed int v8; // [sp+18h] [bp-18h]
  char v9; // [sp+1Ch] [bp-14h]

  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v3 = FIELD_U32(a1, 7316);
  if ( v3 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( v4 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v4 + 192))(v4, &dword_60C7FD98);
  }
  v6[0] = 0;
  v6[1] = 1084227584;
  v6[2] = -1058013184;
  v6[3] = -1110651699;
  v6[4] = &dword_60C7F9C8;
  v7 = -1;
  v8 = v2;
  v9 = 4;
  return sub_602A852C(a1 + 6104, v6);
}
