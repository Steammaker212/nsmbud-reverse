/* KoopalingBase__vf630
 * address: 0x600B6DB4   size: 512   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf630(_DWORD *a1)
{
  int v2; // r0
  int *v3; // r6
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int v9; // r8
  int ResArchiveById; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r7
  int *v17; // r1
  unsigned int v18; // r2
  unsigned int v19; // r0
  int v20; // r5
  int v21; // r0
  int v22; // r1
  unsigned int v23; // r0
  int v24; // r1
  unsigned int v25; // r0
  int v26; // r2

  v3 = a1 + 1779;
  v2 = a1[1779];
  if ( **(_BYTE **)(v2 + 28) )
  {
    v5 = a1 + 1774;
    v4 = (_DWORD *)a1[1774];
    v6 = (int *)v4[3];
    v7 = v4[2];
    v8 = v4[17];
    if ( v7 > v8 )
      v6 += v8;
    v9 = *v6;
    ResArchiveById = Profile__getResArchiveById((Profile *)a1[3], 0);
    SkeletalAnim_play(v9, ResArchiveById, *v3 + 24);
    v11 = *(_DWORD *)(*v5 + 12);
    v12 = *(_DWORD *)(*v5 + 68);
    if ( *(_DWORD *)(*v5 + 8) > v12 )
      v11 += 4 * v12;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 0);
    v13 = *(_DWORD *)(*v5 + 12);
    v14 = *(_DWORD *)(*v5 + 68);
    if ( *(_DWORD *)(*v5 + 8) > v14 )
      v13 += 4 * v14;
    *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065353216;
    v2 = *v3;
  }
  if ( **(_BYTE **)(v2 + 44) )
  {
    v16 = a1 + 1775;
    v15 = (_DWORD *)a1[1775];
    v17 = (int *)v15[3];
    v18 = v15[2];
    v19 = v15[17];
    if ( v18 > v19 )
      v17 += v19;
    v20 = *v17;
    v21 = Profile__getResArchiveById((Profile *)a1[3], 0);
    SkeletalAnim_play(v20, v21, *v3 + 40);
    v22 = *(_DWORD *)(*v16 + 12);
    v23 = *(_DWORD *)(*v16 + 68);
    if ( *(_DWORD *)(*v16 + 8) > v23 )
      v22 += 4 * v23;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v22 + 4), 0);
    v24 = *(_DWORD *)(*v16 + 12);
    v25 = *(_DWORD *)(*v16 + 68);
    if ( *(_DWORD *)(*v16 + 8) > v25 )
      v24 += 4 * v25;
    *(_DWORD *)(*(_DWORD *)v24 + 24) = 1065353216;
  }
  a1[26] = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[33] = 0;
  PlayerLookTargetList_add(PlayerLookTargetList_instance, (int)(a1 + 1661));
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1300))(a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1336))(a1);
  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 724))(a1) == 1 )
    sub_60816D48(dword_60CC6B68, 2048, v26);
  a1[1773] = 1;
  return 7092;
}
