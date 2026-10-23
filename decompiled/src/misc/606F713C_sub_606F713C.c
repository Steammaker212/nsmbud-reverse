/* sub_606F713C
 * address: 0x606F713C   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F713C(int a1)
{
  int v2; // r1
  int *v3; // r5
  int v4; // r0
  int *v5; // r4
  int v6; // r1
  void (__fastcall ***v7)(_DWORD, int, int *, int *, int *); // r0
  int v8; // r1
  int v9; // r0
  int v10; // r1
  void (__fastcall ***v11)(_DWORD, int, int *, int *, int *); // r0
  int v12; // r5
  int ResArchiveById; // r0
  float32x2_t v14; // d1
  int v15; // r0
  float32x2_t v16; // d0
  int result; // r0
  int v18; // r1
  int v19; // [sp+8h] [bp-38h] BYREF
  int v20; // [sp+Ch] [bp-34h]
  int v21; // [sp+10h] [bp-30h] BYREF
  int v22; // [sp+14h] [bp-2Ch] BYREF
  int v23; // [sp+18h] [bp-28h]

  v3 = (int *)(a1 + 6152);
  v2 = FIELD_U32(a1, 6152);
  v5 = (int *)(a1 + 6168);
  v4 = FIELD_U32(a1, 6168);
  v22 = (int)&sead__SafeStringBase__vtable;
  v23 = (int)"waterpillar";
  sub_60446088(v4, v2, &v22);
  *(_DWORD *)(*v5 + 24) = 1065353216;
  v6 = *v5;
  FIELD_U32(v6, 20) = FIELD_U32(a1, 6488);
  FIELD_U32(v6, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(*v5 + 4), 1);
  v22 = 1065353216;
  v23 = 1065353216;
  v19 = 0;
  v21 = 0;
  v20 = -1073741824;
  v7 = (void (__fastcall ***)(_DWORD, int, int *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6156) + 132))(
                                                                  **(_DWORD **)(a1 + 6156),
                                                                  0);
  (**v7)(v7, 3, &v22, &v21, &v19);
  v8 = *v3;
  v9 = FIELD_U32(a1, 6176);
  v22 = (int)&sead__SafeStringBase__vtable;
  v23 = (int)"waterpillar_behind";
  sub_60446088(v9, v8, &v22);
  *(_DWORD *)(FIELD_U32(a1, 6176) + 24) = 1065353216;
  v10 = FIELD_U32(a1, 6176);
  FIELD_U32(v10, 20) = FIELD_U32(a1, 6488);
  FIELD_U32(v10, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6176) + 4), 1);
  v22 = 1065353216;
  v19 = 0;
  v23 = 1065353216;
  v21 = 0;
  v20 = -1073741824;
  v11 = (void (__fastcall ***)(_DWORD, int, int *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6164) + 132))(
                                                                   **(_DWORD **)(a1 + 6164),
                                                                   0);
  (**v11)(v11, 3, &v22, &v21, &v19);
  v12 = FIELD_U32(a1, 6172);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v22 = (int)&sead__SafeStringBase__vtable;
  v23 = (int)"waterpillar_top";
  sub_60446088(v12, ResArchiveById, &v22);
  v14.n64_u32[0] = 0;
  *(_DWORD *)(FIELD_U32(a1, 6172) + 24) = 1065353216;
  v15 = FIELD_U32(a1, 6172);
  v16.n64_f32[0] = FIELD_F32(a1, 6488) + -20.0;
  FIELD_U32(v15, 20) = vmax_f32(v16, v14).n64_u32[0];
  FIELD_U32(v15, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6172) + 4), 1);
  FIELD_U32(a1, 6500) = 1017370378;
  FIELD_U32(a1, 6504) = 978433815;
  FIELD_U32(a1, 6508) = 1017370378;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 6512) = 1;
  result = FIELD_U8(a1, 6140);
  if ( !FIELD_U8(a1, 6140) )
  {
    v18 = FIELD_U32(a1, 6124);
    v22 = FIELD_U32(a1, 108);
    v23 = v18;
    return TileMgr_splashRelated(TileMgr_instance, &v22, 29);
  }
  return result;
}
