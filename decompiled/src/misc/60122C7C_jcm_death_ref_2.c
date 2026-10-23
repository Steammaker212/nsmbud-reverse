/* jcm_death_ref_2
 * address: 0x60122C7C   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall jcm_death_ref_2(_DWORD *a1)
{
  unsigned int v2; // r5
  _DWORD *v3; // r6
  _DWORD *v4; // r6
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int *v9; // r0
  int v10; // r0
  int v11; // r0
  int *v12; // r0
  int v13; // r0
  int v14; // r0
  unsigned int v15; // r1
  _DWORD *v16; // r0
  int v17; // r0
  ActiveColliderMgr *v18; // r5
  ActiveColliderMgr *v19; // r6
  ActiveColliderMgr *v20; // r6
  ActiveColliderMgr *v21; // r5
  _DWORD *v22; // r4
  int v23; // r0
  int *i; // r6
  char v25; // r12
  int v26; // r5
  int (**v27)(); // [sp+Ch] [bp-2Ch] BYREF
  const char *v28; // [sp+10h] [bp-28h]

  v2 = 0;
  *((_BYTE *)a1 + 9318) = 0;
  v3 = a1 + 2355;
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 2);
  sub_6040EB10(v3);
  v4 = a1 + 1576;
  v5 = a1[1575];
  v6 = **(_DWORD **)(a1[1576] + 12);
  v27 = &sead__SafeStringBase__vtable;
  v28 = "jcm_death";
  SkeletalAnim_play(v6, v5, (int)&v27);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1576] + 12) + 4), 0);
  v7 = **(_DWORD **)(a1[1576] + 12);
  FIELD_U32(v7, 20) = 0;
  FIELD_U32(v7, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(a1[1576] + 12) + 24) = 1065353216;
  v8 = a1[1575];
  v9 = *(int **)(a1[1576] + 12);
  if ( *(_DWORD *)(a1[1576] + 8) > 1u )
    ++v9;
  v10 = *v9;
  v27 = &sead__SafeStringBase__vtable;
  v28 = "jcm_death";
  SkeletalAnim_play(v10, v8, (int)&v27);
  v11 = *(_DWORD *)(*v4 + 12);
  if ( *(_DWORD *)(*v4 + 8) > 1u )
    v11 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 0);
  v12 = *(int **)(*v4 + 12);
  if ( *(_DWORD *)(*v4 + 8) > 1u )
    ++v12;
  v13 = *v12;
  FIELD_U32(v13, 20) = 0;
  FIELD_U32(v13, 28) |= 2u;
  v14 = *(_DWORD *)(*v4 + 12);
  if ( *(_DWORD *)(*v4 + 8) > 1u )
    v14 += 4;
  *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
  *((_BYTE *)a1 + 9331) = 0;
  do
  {
    v17 = *v4;
    if ( v2 <= 9 && ((1 << v2) & 0x3EC) != 0 )
    {
      v16 = *(_DWORD **)(v17 + 12);
    }
    else
    {
      v15 = FIELD_U32(v17, 8);
      v16 = *(_DWORD **)(v17 + 12);
      if ( v15 > 1 )
        ++v16;
    }
    sub_60448AF4(*v16, v2++);
  }
  while ( v2 != 10 );
  v18 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 47));
  ActiveColldierMgr_removeFromCreateList(v18, (ActiveCollider *)(a1 + 47));
  ActiveColldierMgr_removeFromList3(v18, (int)(a1 + 47));
  v19 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 1956));
  ActiveColldierMgr_removeFromCreateList(v19, (ActiveCollider *)(a1 + 1956));
  ActiveColldierMgr_removeFromList3(v19, (int)(a1 + 1956));
  v20 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 1837));
  ActiveColldierMgr_removeFromCreateList(v20, (ActiveCollider *)(a1 + 1837));
  ActiveColldierMgr_removeFromList3(v20, (int)(a1 + 1837));
  v21 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 2032));
  ActiveColldierMgr_removeFromCreateList(v21, (ActiveCollider *)(a1 + 2032));
  ActiveColldierMgr_removeFromList3(v21, (int)(a1 + 2032));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 1584));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 2108));
  v22 = a1 + 1571;
  a1[1571] = a1[2320];
  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 628))(a1) )
  {
    v23 = (*(int (__fastcall **)(_DWORD *))(*a1 + 628))(a1);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v23 + 1040))(v23, *v22);
  }
  a1[30] = dword_60AFE3F8[*v22];
  a1[31] = 1077936128;
  a1[32] = 0;
  a1[33] = 0;
  a1[34] = -1056964608;
  a1[35] = 0;
  a1[26] = 0;
  a1[25] = -1105618534;
  a1[29] = 1167867904;
  for ( i = (int *)sub_60008598(ActorMgr__instance, 279, *(_DWORD *)(ActorMgr__instance + 27172));
        ;
        i = (int *)sub_60008598(ActorMgr__instance, 279, (int)(i + 1)) )
  {
    v26 = *i;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611804748 << v25) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( !v26 || (**(int (__fastcall ***)(int, int *))v26)(v26, &StageActor_RTTI) != 1 )
      break;
    FIELD_U8(v26, 19) = 1;
  }
}
