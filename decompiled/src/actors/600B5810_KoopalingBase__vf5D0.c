/* KoopalingBase__vf5D0
 * address: 0x600B5810   size: 392   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf5D0(int a1)
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

  v2 = (_DWORD *)(a1 + 7116);
  if ( **(_BYTE **)(FIELD_U32(a1, 7116) + 12) )
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
    SkeletalAnim_play(v8, ResArchiveById, *v2 + 8);
    v10 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v11 )
      v10 += 4 * v11;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 1);
    v12 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v13 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v13 )
      v12 += 4 * v13;
    *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v14 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromCreateList(v14, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromList3(v14, a1 + 7184);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1208))(a1, a1 + 7716);
  FIELD_U32(a1, 144) = FIELD_U32(a1, 7716);
  FIELD_U32(a1, 148) = FIELD_U32(a1, 7720);
  FIELD_U32(a1, 152) = FIELD_U32(a1, 7724);
  FIELD_U16(a1, 6276) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1212))(a1);
  FIELD_U32(a1, 7092) = 1;
  return 7092;
}
