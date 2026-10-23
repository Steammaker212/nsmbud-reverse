/* BoomBoomBase__vf3EC
 * address: 0x6005121C   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BE4
// 
// Overridden by: None
int __fastcall BoomBoomBase__vf3EC(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // r0
  unsigned int v9; // r1
  _DWORD **v10; // r0
  _DWORD *v11; // r0
  int v12; // r0
  unsigned int v13; // r1
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  int *v17; // r0
  int v18; // r0
  int v19; // r0
  unsigned int v20; // r1
  int v21; // r0
  int v22; // r0
  unsigned int v23; // r1
  int *v24; // r0
  int v25; // r0
  int v26; // r0
  unsigned int v27; // r1
  int v28; // r0
  int v29; // r0
  unsigned int v30; // r1
  int *v31; // r0
  int v32; // r0
  int v33; // r0
  unsigned int v34; // r1
  int v35; // r0
  void (__fastcall ***v36)(_DWORD, int, sead__SafeString *, _DWORD *, int *); // r0
  void (__fastcall *v37)(_DWORD, int, sead__SafeString *, _DWORD *, int *); // r7
  int (__fastcall ***v38)(_DWORD, int, sead__SafeString *, _DWORD *, int *); // r0
  int (__fastcall *v39)(_DWORD, int, sead__SafeString *, _DWORD *, int *); // r7
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  _DWORD v42[10]; // [sp+20h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bunbun";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 0, 3, 1, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 3, 1, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 7204) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  sub_60421938(v4, (int)ResArchiveById, (int)&a2);
  v6 = **(_DWORD ***)(FIELD_U32(a1, 7204) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "damage_s";
  ShuAnim_play(v6, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7204) + 28) + 4), 0);
  v7 = **(_DWORD **)(FIELD_U32(a1, 7204) + 28);
  FIELD_U32(v7, 20) = 0;
  FIELD_U32(v7, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7204) + 28) + 24) = 0;
  v8 = FIELD_U32(a1, 7204);
  v9 = FIELD_U32(v8, 24);
  v10 = *(_DWORD ***)(v8 + 28);
  if ( v9 > 1 )
    ++v10;
  v11 = *v10;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "power_up";
  ShuAnim_play(v11, (int)ResArchiveById, (int)&a2);
  v12 = FIELD_U32(a1, 7204);
  v13 = FIELD_U32(v12, 24);
  v14 = FIELD_U32(v12, 28);
  if ( v13 > 1 )
    v14 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v14 + 4), 0);
  v15 = FIELD_U32(a1, 7204);
  v16 = FIELD_U32(v15, 24);
  v17 = *(int **)(v15 + 28);
  if ( v16 > 1 )
    ++v17;
  v18 = *v17;
  FIELD_U32(v18, 20) = 0;
  FIELD_U32(v18, 28) |= 2u;
  v19 = FIELD_U32(a1, 7204);
  v20 = FIELD_U32(v19, 24);
  v21 = FIELD_U32(v19, 28);
  if ( v20 > 1 )
    v21 += 4;
  *(_DWORD *)(*(_DWORD *)v21 + 24) = 0;
  v22 = FIELD_U32(a1, 7204);
  v23 = FIELD_U32(v22, 24);
  v24 = *(int **)(v22 + 28);
  if ( v23 > 2 )
    v24 += 2;
  v25 = *v24;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "power_up";
  sub_60446088(v25, (int)ResArchiveById, (int)&a2);
  v26 = FIELD_U32(a1, 7204);
  v27 = FIELD_U32(v26, 24);
  v28 = FIELD_U32(v26, 28);
  if ( v27 > 2 )
    v28 += 8;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v28 + 4), 0);
  v29 = FIELD_U32(a1, 7204);
  v30 = FIELD_U32(v29, 24);
  v31 = *(int **)(v29 + 28);
  if ( v30 > 2 )
    v31 += 2;
  v32 = *v31;
  FIELD_U32(v32, 20) = 0;
  FIELD_U32(v32, 28) |= 2u;
  v33 = FIELD_U32(a1, 7204);
  v34 = FIELD_U32(v33, 24);
  v35 = FIELD_U32(v33, 28);
  if ( v34 > 2 )
    v35 += 8;
  *(_DWORD *)(*(_DWORD *)v35 + 24) = 0;
  a2.vtable = (void *)-1146890486;
  a2.cstr = (char *)-1146890486;
  (*(void (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)a1 + 1096))(a1, &a2);
  v36 = (void (__fastcall ***)(_DWORD, int, sead__SafeString *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 7204) + 132))(
                                                                                   **(_DWORD **)(a1 + 7204),
                                                                                   0);
  v37 = **v36;
  v42[0] = 0;
  v37(v36, 3, &a2, v42, &dword_60B3B944);
  v38 = (int (__fastcall ***)(_DWORD, int, sead__SafeString *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 7204) + 132))(
                                                                                  **(_DWORD **)(a1 + 7204),
                                                                                  0);
  v39 = **v38;
  v42[0] = 0;
  return v39(v38, 4, &a2, v42, &dword_60B3B944);
}
