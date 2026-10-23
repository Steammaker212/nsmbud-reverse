/* sub_6032FFD0
 * address: 0x6032FFD0   size: 840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032FFD0(int a1)
{
  _DWORD *v2; // r9
  int v3; // r5
  _DWORD *v4; // r5
  int v5; // r7
  int v6; // r8
  unsigned int v7; // r4
  int ResArchiveById; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int *v13; // r1
  unsigned int v14; // r0
  int v15; // r0
  int v16; // r5
  int v17; // r4
  _DWORD *v18; // r5
  int v19; // r8
  unsigned int v20; // r7
  int v21; // r0
  int v22; // r1
  unsigned int v23; // r0
  int v24; // r1
  unsigned int v25; // r0
  int *v26; // r1
  unsigned int v27; // r0
  int v28; // r0
  int v29; // r5
  int result; // r0
  _DWORD *v31; // r6
  _DWORD *v32; // t1
  int v33; // r4
  unsigned int v34; // r7
  int v35; // r0
  int v36; // r1
  unsigned int v37; // r0
  int v38; // r1
  unsigned int v39; // r0
  int *v40; // r1
  unsigned int v41; // r0
  int (**v42)(); // [sp+0h] [bp-28h] BYREF
  char *v43; // [sp+4h] [bp-24h]

  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v3 == (*(int (**)(void))(dword_60C93DE0 + 8))() )
  {
    v5 = a1 + 6300;
    v4 = *(_DWORD **)(a1 + 6300);
    v6 = FIELD_U32(a1, 7104);
    v7 = FIELD_U32(a1, 160);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v42 = &sead__SafeStringBase__vtable;
    v43 = off_60BEC280[v7 >> 31];
    sub_60421938(v4, ResArchiveById, (int)&v42);
    v9 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
    v10 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v10 )
      v9 += 4 * v10;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 0);
    v11 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v12 )
      v11 += 4 * v12;
    *(_DWORD *)(*(_DWORD *)v11 + 24) = 1065353216;
    v13 = *(int **)(*(_DWORD *)v5 + 12);
    v14 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v14 )
      v13 += v14;
    v15 = *v13;
    FIELD_U32(v15, 20) = v6;
    FIELD_U32(v15, 28) |= 2u;
  }
  v16 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  if ( v16 == (*(int (**)(void))(dword_60C93E00 + 8))() )
  {
    v17 = a1 + 6300;
    v18 = *(_DWORD **)(a1 + 6300);
    v19 = FIELD_U32(a1, 7104);
    v20 = FIELD_U32(a1, 160);
    v21 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v42 = &sead__SafeStringBase__vtable;
    v43 = off_60BEC288[v20 >> 31];
    sub_60421938(v18, v21, (int)&v42);
    v22 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
    v23 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v23 )
      v22 += 4 * v23;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v22 + 4), 1);
    v24 = *(_DWORD *)(*(_DWORD *)v17 + 12);
    v25 = *(_DWORD *)(*(_DWORD *)v17 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v17 + 8) > v25 )
      v24 += 4 * v25;
    *(_DWORD *)(*(_DWORD *)v24 + 24) = 1065353216;
    v26 = *(int **)(*(_DWORD *)v17 + 12);
    v27 = *(_DWORD *)(*(_DWORD *)v17 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v17 + 8) > v27 )
      v26 += v27;
    v28 = *v26;
    FIELD_U32(v28, 20) = v19;
    FIELD_U32(v28, 28) |= 2u;
  }
  v29 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  result = (*(int (**)(void))(dword_60C93E20 + 8))();
  if ( v29 == result )
  {
    v32 = *(_DWORD **)(a1 + 6300);
    v31 = (_DWORD *)(a1 + 6300);
    v33 = v31[201];
    v34 = *(v31 - 1535);
    v35 = Profile__getResArchiveById((Profile *)*(v31 - 1572), 0);
    v42 = &sead__SafeStringBase__vtable;
    v43 = off_60BEC290[v34 >> 31];
    sub_60421938(v32, v35, (int)&v42);
    v36 = *(_DWORD *)(*v31 + 12);
    v37 = *(_DWORD *)(*v31 + 68);
    if ( *(_DWORD *)(*v31 + 8) > v37 )
      v36 += 4 * v37;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v36 + 4), 0);
    v38 = *(_DWORD *)(*v31 + 12);
    v39 = *(_DWORD *)(*v31 + 68);
    if ( *(_DWORD *)(*v31 + 8) > v39 )
      v38 += 4 * v39;
    *(_DWORD *)(*(_DWORD *)v38 + 24) = 1065353216;
    v40 = *(int **)(*v31 + 12);
    v41 = *(_DWORD *)(*v31 + 68);
    if ( *(_DWORD *)(*v31 + 8) > v41 )
      v40 += v41;
    result = *v40;
    FIELD_U32(result, 20) = v33;
    FIELD_U32(result, 28) |= 2u;
  }
  return result;
}
