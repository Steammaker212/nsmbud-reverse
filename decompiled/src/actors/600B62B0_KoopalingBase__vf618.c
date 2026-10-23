/* KoopalingBase__vf618
 * address: 0x600B62B0   size: 900   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6009FE90 : Iggy
int __fastcall KoopalingBase__vf618(int a1)
{
  _DWORD *v2; // r9
  int v3; // r0
  int *v4; // r7
  _DWORD *v5; // r0
  int v6; // r6
  int *v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  int v10; // r8
  int ResArchiveById; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  _DWORD *v16; // r0
  int v17; // r6
  int *v18; // r1
  unsigned int v19; // r2
  unsigned int v20; // r0
  int v21; // r5
  int v22; // r0
  int v23; // r1
  unsigned int v24; // r0
  int v25; // r1
  unsigned int v26; // r0
  _DWORD *v27; // r7
  int v28; // r5
  int v29; // r5
  int v30; // r5
  float v31; // s16
  __int16 v32; // r5
  char v33; // r1
  float *v34; // r0
  char v35; // r1
  float v36; // s0

  v2 = (_DWORD *)(a1 + 7176);
  if ( FIELD_U32(a1, 7176) == 1 )
  {
    v4 = (int *)(a1 + 7116);
    v3 = FIELD_U32(a1, 7116);
    if ( **(_BYTE **)(v3 + 20) )
    {
      v6 = a1 + 7096;
      v5 = *(_DWORD **)(a1 + 7096);
      v7 = (int *)v5[3];
      v8 = v5[2];
      v9 = v5[17];
      if ( v8 > v9 )
        v7 += v9;
      v10 = *v7;
      ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      SkeletalAnim_play(v10, ResArchiveById, *v4 + 16);
      v12 = *(_DWORD *)(*(_DWORD *)v6 + 12);
      v13 = *(_DWORD *)(*(_DWORD *)v6 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v13 )
        v12 += 4 * v13;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 0);
      v14 = *(_DWORD *)(*(_DWORD *)v6 + 12);
      v15 = *(_DWORD *)(*(_DWORD *)v6 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v15 )
        v14 += 4 * v15;
      *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
      v3 = *v4;
    }
    if ( **(_BYTE **)(v3 + 36) )
    {
      v17 = a1 + 7100;
      v16 = *(_DWORD **)(a1 + 7100);
      v18 = (int *)v16[3];
      v19 = v16[2];
      v20 = v16[17];
      if ( v19 > v20 )
        v18 += v20;
      v21 = *v18;
      v22 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      SkeletalAnim_play(v21, v22, *v4 + 32);
      v23 = *(_DWORD *)(*(_DWORD *)v17 + 12);
      v24 = *(_DWORD *)(*(_DWORD *)v17 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v17 + 8) > v24 )
        v23 += 4 * v24;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v23 + 4), 0);
      v25 = *(_DWORD *)(*(_DWORD *)v17 + 12);
      v26 = *(_DWORD *)(*(_DWORD *)v17 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v17 + 8) > v26 )
        v25 += 4 * v26;
      *(_DWORD *)(*(_DWORD *)v25 + 24) = 1065353216;
    }
  }
  v27 = (_DWORD *)(a1 + 6096);
  v28 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v28 != (*(int (**)(void))(dword_60C83320 + 8))() )
  {
    v29 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v27 + 8))(*v27);
    if ( v29 != (*(int (**)(void))(dword_60C83368 + 8))() )
    {
      v30 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v27 + 8))(*v27);
      if ( v30 != (*(int (**)(void))(dword_60C83344 + 8))() )
      {
        FIELD_U32(a1, 100) = -1098068787;
        v31 = FIELD_F32(a1, 112) + -8.0;
        v32 = (int)FIELD_F32(a1, 108);
        sub_607160F4(TileMgr_instance, v32, (unsigned __int16)(int)(float)-v31, FIELD_U8(a1, 86), 1);
        if ( (v33 & 0xFu) - 1 > 1 )
        {
          sub_607160F4(
            TileMgr_instance,
            v32,
            (unsigned __int16)(int)(float)-(float)(v31 + -16.0),
            FIELD_U8(a1, 86),
            1);
          v34 = (float *)(a1 + 120);
          if ( (v35 & 0xFu) - 1 > 1 )
          {
            v36 = 5.25;
            goto LABEL_26;
          }
        }
        else
        {
          v34 = (float *)(a1 + 120);
        }
        v36 = 6.25;
LABEL_26:
        *v34 = 0.0;
        v34[1] = v36;
        v34[2] = 0.0;
        FIELD_U32(a1, 136) = -1065353216;
      }
    }
  }
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 7744) = 0x2000000;
  FIELD_U32(a1, 7172) = 0;
  FIELD_U32(a1, 7712) = 4;
  *v2 |= 2u;
  PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6644);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1296))(a1);
}
