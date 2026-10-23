/* SumoBrosBoss__beginState_DieFumi
 * address: 0x6002FCD0   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600260D0
// 
// Overridden by: None
int __fastcall SumoBrosBoss__beginState_DieFumi(int a1)
{
  _DWORD *v2; // r1
  int v3; // r0
  bool v4; // zf
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  int v11; // r7
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r0
  int v17; // r0
  unsigned int v18; // r1
  int v19; // r0

  v2 = (_DWORD *)PlayerMgr_instance;
  v3 = FIELD_U32(PlayerMgr_instance, 32);
  v4 = v3 == 0;
  if ( v3 )
    v4 = FIELD_U8(a1, 7436) == 0;
  if ( !v4 )
  {
    sub_607A1FFC(v3);
    v2 = (_DWORD *)PlayerMgr_instance;
  }
  v5 = v2[9];
  v6 = v5 == 0;
  if ( v5 )
    v6 = FIELD_U8(a1, 7437) == 0;
  if ( !v6 )
  {
    sub_607A1FFC(v5);
    v2 = (_DWORD *)PlayerMgr_instance;
  }
  v7 = v2[10];
  v8 = v7 == 0;
  if ( v7 )
    v8 = FIELD_U8(a1, 7438) == 0;
  if ( !v8 )
  {
    sub_607A1FFC(v7);
    v2 = (_DWORD *)PlayerMgr_instance;
  }
  v9 = v2[11];
  v10 = v9 == 0;
  if ( v9 )
    v10 = FIELD_U8(a1, 7439) == 0;
  if ( !v10 )
    sub_607A1FFC(v9);
  FIELD_U32(a1, 6308) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 788))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 768))(a1);
  FIELD_U32(a1, 7380) = 1065353216;
  if ( FIELD_U8(a1, 7426) != 10 )
  {
    v11 = a1 + 7096;
    sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F770);
    v12 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v13 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v13 )
      v12 += 4 * v13;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 1);
    v14 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    v15 = *(_DWORD *)(*(_DWORD *)v11 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v15 )
      v14 += 4 * v15;
    *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
    FIELD_U8(a1, 7426) = 10;
  }
  v16 = FIELD_U32(a1, 6108);
  FIELD_U32(a1, 120) = FIELD_U32(a1, 6104);
  FIELD_U32(a1, 124) = v16;
  FIELD_U32(a1, 128) = 0;
  v17 = FIELD_U32(a1, 6112);
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = v17;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = FIELD_U32(a1, 6116);
  FIELD_U32(a1, 80) = FIELD_U32(a1, 6128);
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 116) = 1167867904;
  FIELD_U8(a1, 7433) = 1;
  v18 = FIELD_U32(a1, 7316);
  if ( v18 )
  {
    v19 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v18);
    if ( v19 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v19 + 192))(v19, &dword_60C7FD98);
  }
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF518C, 3);
  FIELD_U32(a1, 3180) |= 4u;
  FIELD_U32(a1, 3188) |= 4u;
  FIELD_U32(a1, 3204) |= 4u;
  FIELD_U8(a1, 7427) = 0;
  return 7427;
}
