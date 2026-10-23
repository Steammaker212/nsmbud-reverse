/* KoopalingBase__vf5AC
 * address: 0x600B4E00   size: 476   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf5AC(int a1)
{
  int v2; // r0
  int *v3; // r6
  _DWORD *v4; // r0
  int v5; // r4
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int v9; // r5
  int ResArchiveById; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r0
  int v16; // r4
  unsigned int v17; // r1
  _DWORD **v18; // r0
  _DWORD *v19; // r5
  int v20; // r0
  int v21; // r0
  int *v22; // r0
  int v23; // r0
  int v24; // r0
  ActiveColliderMgr *v25; // r6

  v3 = (int *)(a1 + 7112);
  v2 = FIELD_U32(a1, 7112);
  if ( **(_BYTE **)(v2 + 12) )
  {
    v5 = a1 + 7096;
    v4 = *(_DWORD **)(a1 + 7096);
    v6 = (int *)v4[3];
    v7 = v4[2];
    v8 = v4[17];
    if ( v7 > v8 )
      v6 += v8;
    v9 = *v6;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    SkeletalAnim_play(v9, ResArchiveById, *v3 + 8);
    v11 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v12 )
      v11 += 4 * v12;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
    v13 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v14 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v14 )
      v13 += 4 * v14;
    *(_DWORD *)(*(_DWORD *)v13 + 24) = FIELD_U32(a1, 7760);
    v2 = *v3;
  }
  if ( **(_BYTE **)(v2 + 36) )
  {
    v16 = a1 + 7096;
    v15 = FIELD_U32(a1, 7096);
    v17 = FIELD_U32(v15, 24);
    v18 = *(_DWORD ***)(v15 + 28);
    if ( v17 > 1 )
      ++v18;
    v19 = *v18;
    v20 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    ShuAnim_play(v19, v20, *v3 + 32);
    v21 = *(_DWORD *)(*(_DWORD *)v16 + 28);
    if ( *(_DWORD *)(*(_DWORD *)v16 + 24) > 1u )
      v21 += 4;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v21 + 4), 0);
    v22 = *(int **)(*(_DWORD *)v16 + 28);
    if ( *(_DWORD *)(*(_DWORD *)v16 + 24) > 1u )
      ++v22;
    v23 = *v22;
    FIELD_U32(v23, 20) = 0;
    FIELD_U32(v23, 28) |= 2u;
    v24 = *(_DWORD *)(*(_DWORD *)v16 + 28);
    if ( *(_DWORD *)(*(_DWORD *)v16 + 24) > 1u )
      v24 += 4;
    *(_DWORD *)(*(_DWORD *)v24 + 24) = 1065353216;
  }
  v25 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromCreateList(v25, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromList3(v25, a1 + 7184);
  FIELD_U32(a1, 7092) = 1;
  return 7092;
}
