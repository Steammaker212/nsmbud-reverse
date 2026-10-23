/* KoopalingBase__vf34C
 * address: 0x600B2474   size: 388   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026868
// 
// Overridden by: None
int __fastcall KoopalingBase__vf34C(int a1, int a2)
{
  int v4; // r10
  float *v5; // r0
  int v6; // t1
  float v7; // s0
  int *v8; // r1
  int v9; // r1
  float v10; // r0
  unsigned int v11; // r1
  int v12; // r0
  ActiveColliderMgr *v13; // r7
  _DWORD v15[5]; // [sp+0h] [bp-40h] BYREF
  char v16; // [sp+14h] [bp-2Ch]
  int v17; // [sp+18h] [bp-28h]
  char v18; // [sp+1Ch] [bp-24h]

  v4 = 0;
  v6 = FIELD_U32(a1, 7096);
  v5 = (float *)(a1 + 7096);
  v7 = FIELD_F32(a2, 108);
  v8 = *(int **)(v6 + 28);
  if ( FIELD_U32(v6, 24) > 1u )
    ++v8;
  v9 = *v8;
  if ( *(v5 - 1747) >= v7 )
    v4 = 1;
  if ( v9 )
  {
    FIELD_U32(v9, 20) = 0;
    FIELD_U32(v9, 28) |= 2u;
    v10 = *v5;
    v11 = *(_DWORD *)(LODWORD(v10) + 24);
    v12 = *(_DWORD *)(LODWORD(v10) + 28);
    if ( v11 > 1 )
      v12 += 4;
    *(_DWORD *)(*(_DWORD *)v12 + 24) = 0;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v13 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromCreateList(v13, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromList3(v13, a1 + 7184);
  FIELD_U32(a1, 7172) = 0;
  FIELD_U32(a1, 7168) = 0;
  if ( FIELD_U8(a2, 84) <= 3u )
    sub_60025B84(a1, a2, a1 + 108, 6u);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1164))(a1);
  v15[0] = 0;
  v15[1] = 1081711002;
  v15[2] = -1065353216;
  v15[3] = -1103101952;
  v15[4] = &stru_60C7F618;
  v16 = -1;
  v17 = v4;
  v18 = FIELD_U8(a2, 84);
  return sub_602A852C(a1 + 6104, v15);
}
