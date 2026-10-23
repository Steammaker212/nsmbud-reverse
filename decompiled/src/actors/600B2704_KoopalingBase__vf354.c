/* KoopalingBase__vf354
 * address: 0x600B2704   size: 364   group: actors
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
int __fastcall KoopalingBase__vf354(int a1)
{
  int v2; // r9
  signed int v3; // r8
  int v4; // r1
  unsigned int v5; // r2
  int *v6; // r1
  int v7; // r1
  int v8; // r0
  unsigned int v9; // r1
  int v10; // r0
  ActiveColliderMgr *v11; // r4
  _DWORD v13[5]; // [sp+0h] [bp-40h] BYREF
  char v14; // [sp+14h] [bp-2Ch]
  signed int v15; // [sp+18h] [bp-28h]
  char v16; // [sp+1Ch] [bp-24h]

  v2 = a1 + 108;
  v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v4 = FIELD_U32(a1, 7096);
  v5 = FIELD_U32(v4, 24);
  v6 = *(int **)(v4 + 28);
  if ( v5 > 1 )
    ++v6;
  v7 = *v6;
  if ( v7 )
  {
    FIELD_U32(v7, 20) = 0;
    FIELD_U32(v7, 28) |= 2u;
    v8 = FIELD_U32(a1, 7096);
    v9 = FIELD_U32(v8, 24);
    v10 = FIELD_U32(v8, 28);
    if ( v9 > 1 )
      v10 += 4;
    *(_DWORD *)(*(_DWORD *)v10 + 24) = 0;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v11 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromCreateList(v11, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromList3(v11, a1 + 7184);
  FIELD_U32(a1, 7172) = 0;
  FIELD_U32(a1, 7168) = 0;
  sub_600228F4(dword_60C7F52C, v2, 6);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1164))(a1);
  v13[0] = 0;
  v13[1] = 1081711002;
  v13[2] = -1065353216;
  v13[3] = -1103101952;
  v13[4] = &stru_60C7F618;
  v14 = -1;
  v15 = v3;
  v16 = 4;
  return sub_602A852C(a1 + 6104, v13);
}
