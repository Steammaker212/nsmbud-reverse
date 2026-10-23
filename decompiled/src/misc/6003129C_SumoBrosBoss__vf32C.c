/* SumoBrosBoss__vf32C
 * address: 0x6003129C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600267FC
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf32C(int a1, int a2)
{
  int v4; // r7
  signed int v5; // r8
  unsigned int v6; // r5
  unsigned int v7; // r1
  int v8; // r0
  _DWORD v10[5]; // [sp+0h] [bp-38h] BYREF
  char v11; // [sp+14h] [bp-24h]
  signed int v12; // [sp+18h] [bp-20h]
  char v13; // [sp+1Ch] [bp-1Ch]

  v4 = a1 + 108;
  v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v6 = FIELD_U8(a2, 84);
  if ( v6 <= 3 )
    sub_60025B84(a1, a2, v4, 6u);
  v7 = FIELD_U32(a1, 7316);
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
  v10[4] = &dword_60C7F9A8;
  v11 = -1;
  v12 = v5;
  v13 = v6;
  return sub_602A852C(a1 + 6104, v10);
}
