/* KoopalingBase__vf334
 * address: 0x600B21D8   size: 396   group: actors
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
int __fastcall KoopalingBase__vf334(int a1, int a2)
{
  float v4; // s16
  float v5; // s18
  ActiveColliderMgr *v6; // r7
  int v7; // r1
  unsigned int v8; // r2
  int *v9; // r1
  int v10; // r1
  int v11; // r0
  unsigned int v12; // r1
  int v13; // r0
  _DWORD v15[5]; // [sp+0h] [bp-48h] BYREF
  char v16; // [sp+14h] [bp-34h]
  _BOOL4 v17; // [sp+18h] [bp-30h]
  char v18; // [sp+1Ch] [bp-2Ch]

  v4 = FIELD_F32(a2, 108);
  v5 = FIELD_F32(a1, 108);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromList3(v6, a1 + 7184);
  FIELD_U32(a1, 7172) = 0;
  FIELD_U32(a1, 7168) = 0;
  if ( FIELD_U8(a2, 84) <= 3u )
    sub_60025B84(a1, a2, a1 + 108, 6u);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1164))(a1);
  v7 = FIELD_U32(a1, 7096);
  v8 = FIELD_U32(v7, 24);
  v9 = *(int **)(v7 + 28);
  if ( v8 > 1 )
    ++v9;
  v10 = *v9;
  if ( v10 )
  {
    FIELD_U32(v10, 20) = 0;
    FIELD_U32(v10, 28) |= 2u;
    v11 = FIELD_U32(a1, 7096);
    v12 = FIELD_U32(v11, 24);
    v13 = FIELD_U32(v11, 28);
    if ( v12 > 1 )
      v13 += 4;
    *(_DWORD *)(*(_DWORD *)v13 + 24) = 0;
  }
  FIELD_U32(a1, 7500) = 60;
  v15[0] = 0;
  v15[1] = 1077936128;
  v15[2] = -1065353216;
  v15[3] = -1103101952;
  v15[4] = &dword_60C83464;
  v16 = -1;
  v17 = v5 >= v4;
  v18 = FIELD_U8(a2, 84);
  return sub_602A852C(a1 + 6104, v15);
}
