/* eye_wait_ref
 * address: 0x6024D71C   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall eye_wait_ref(int a1)
{
  int v2; // r5
  int result; // r0
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
  _DWORD *v15; // r0
  int v16; // r7
  int *v17; // r1
  unsigned int v18; // r2
  unsigned int v19; // r0
  int v20; // r5
  int v21; // r0
  int v22; // r1
  unsigned int v23; // r0
  int v24; // r1
  unsigned int v25; // r0
  int v26; // r5
  int v27; // r0
  _DWORD v28[2]; // [sp+4h] [bp-34h] BYREF
  int (**v29)(); // [sp+Ch] [bp-2Ch] BYREF
  const char *v30; // [sp+10h] [bp-28h]

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C8DE58 + 8))();
  if ( v2 != result )
  {
    v5 = a1 + 6300;
    v4 = *(_DWORD **)(a1 + 6300);
    v6 = (int *)v4[3];
    v7 = v4[2];
    v8 = v4[17];
    if ( v7 > v8 )
      v6 += v8;
    v9 = *v6;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v29 = &sead__SafeStringBase__vtable;
    v30 = "wait";
    SkeletalAnim_play(v9, ResArchiveById, (int)&v29);
    v11 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v12 )
      v11 += 4 * v12;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
    v13 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v14 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v14 )
      v13 += 4 * v14;
    *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065353216;
    if ( FIELD_U32(a1, 6336) )
    {
      v16 = a1 + 6308;
      v15 = *(_DWORD **)(a1 + 6308);
      v17 = (int *)v15[3];
      v18 = v15[2];
      v19 = v15[17];
      if ( v18 > v19 )
        v17 += v19;
      v20 = *v17;
      v21 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      v29 = &sead__SafeStringBase__vtable;
      v30 = "eye_wait";
      SkeletalAnim_play(v20, v21, (int)&v29);
      v22 = *(_DWORD *)(*(_DWORD *)v16 + 12);
      v23 = *(_DWORD *)(*(_DWORD *)v16 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v16 + 8) > v23 )
        v22 += 4 * v23;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v22 + 4), 1);
      v24 = *(_DWORD *)(*(_DWORD *)v16 + 12);
      v25 = *(_DWORD *)(*(_DWORD *)v16 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v16 + 8) > v25 )
        v24 += 4 * v25;
      *(_DWORD *)(*(_DWORD *)v24 + 24) = 1065353216;
      v26 = FIELD_U32(a1, 6324);
      v29 = &sead__SafeStringBase__vtable;
      v30 = "basabasa";
      v27 = LoadResource(ResourceMgrRelated_instance, &v29);
      v28[0] = &sead__SafeStringBase__vtable;
      v28[1] = "eye_wait";
      TexAnim_play(v26, v27, v28);
      AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6324) + 4), 1);
      *(_DWORD *)(FIELD_U32(a1, 6324) + 24) = 1065353216;
    }
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFD7A4, &stru_60AFD7B0, 0);
    CollisionMgr_init((CollisionMgr *)(a1 + 6464), (StateActor *)a1, 0, &stru_60AFD7B0, 0);
    FIELD_U32(a1, 3192) |= 0x200000u;
    FIELD_U32(a1, 3204) |= 4u;
    FIELD_F32(a1, 100) = --0.1875;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 136) = 1065353216;
    FIELD_U32(a1, 11816) = 1;
    return 11816;
  }
  return result;
}
