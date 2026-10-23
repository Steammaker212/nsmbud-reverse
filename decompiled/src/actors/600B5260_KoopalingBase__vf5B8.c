/* KoopalingBase__vf5B8
 * address: 0x600B5260   size: 312   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf5B8(int a1)
{
  _DWORD *v2; // r7
  _DWORD *v3; // r0
  int v4; // r6
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r5
  int ResArchiveById; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  ActiveColliderMgr *v14; // r6

  v2 = (_DWORD *)(a1 + 7112);
  if ( **(_BYTE **)(FIELD_U32(a1, 7112) + 20) )
  {
    v4 = a1 + 7096;
    v3 = *(_DWORD **)(a1 + 7096);
    v5 = (int *)v3[3];
    v6 = v3[2];
    v7 = v3[17];
    if ( v6 > v7 )
      v5 += v7;
    v8 = *v5;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    SkeletalAnim_play(v8, ResArchiveById, *v2 + 16);
    v10 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v11 )
      v10 += 4 * v11;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 0);
    v12 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v13 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v13 )
      v12 += 4 * v13;
    *(_DWORD *)(*(_DWORD *)v12 + 24) = FIELD_U32(a1, 7760);
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 7184), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC9850, 0);
  v14 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184))
    && !ActiveColliderMgr_isInCreateList(v14, (ActiveCollider *)(a1 + 7184)) )
  {
    ActiveColliderMgr_addToCreateList(v14, (ActiveCollider *)(a1 + 7184));
  }
  FIELD_U32(a1, 7092) = 1;
  return 7092;
}
