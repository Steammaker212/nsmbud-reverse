/* KoopalingBase__vf364
 * address: 0x600B2888   size: 336   group: actors
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
int __fastcall KoopalingBase__vf364(int a1)
{
  signed int v2; // r8
  int v3; // r1
  unsigned int v4; // r2
  int *v5; // r1
  int v6; // r1
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r0
  ActiveColliderMgr *v10; // r7
  _DWORD v12[5]; // [sp+0h] [bp-38h] BYREF
  char v13; // [sp+14h] [bp-24h]
  signed int v14; // [sp+18h] [bp-20h]
  char v15; // [sp+1Ch] [bp-1Ch]

  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v3 = FIELD_U32(a1, 7096);
  v4 = FIELD_U32(v3, 24);
  v5 = *(int **)(v3 + 28);
  if ( v4 > 1 )
    ++v5;
  v6 = *v5;
  if ( v6 )
  {
    FIELD_U32(v6, 20) = 0;
    FIELD_U32(v6, 28) |= 2u;
    v7 = FIELD_U32(a1, 7096);
    v8 = FIELD_U32(v7, 24);
    v9 = FIELD_U32(v7, 28);
    if ( v8 > 1 )
      v9 += 4;
    *(_DWORD *)(*(_DWORD *)v9 + 24) = 0;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v10 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromCreateList(v10, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromList3(v10, a1 + 7184);
  FIELD_U32(a1, 7172) = 0;
  FIELD_U32(a1, 7168) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1164))(a1);
  v12[0] = 0;
  v12[1] = 1081711002;
  v12[2] = -1065353216;
  v12[3] = -1103101952;
  v12[4] = &stru_60C7F618;
  v13 = -1;
  v14 = v2;
  v15 = 4;
  return sub_602A852C(a1 + 6104, v12);
}
