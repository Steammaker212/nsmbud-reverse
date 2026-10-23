/* sub_60701744
 * address: 0x60701744   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60701744(_DWORD *a1)
{
  float *v1; // r8
  int v2; // r1
  int *v3; // r5
  int v4; // r0
  _DWORD *v5; // r4
  float *v6; // r6
  int v7; // r1
  void (__fastcall ***v8)(_DWORD, int, int *, int *, int *); // r0
  int v9; // r1
  int v10; // r0
  int v11; // r1
  void (__fastcall ***v12)(_DWORD, int, int *, int *, int *); // r0
  int v13; // t1
  int ResArchiveById; // r0
  float32x2_t v15; // d1
  int v16; // r0
  float32x2_t v17; // d0
  int v19; // [sp+8h] [bp-38h] BYREF
  int v20; // [sp+Ch] [bp-34h]
  int v21; // [sp+10h] [bp-30h] BYREF
  int v22; // [sp+14h] [bp-2Ch] BYREF
  int v23; // [sp+18h] [bp-28h]

  v1 = (float *)a1;
  v3 = a1 + 1538;
  v2 = a1[1538];
  v5 = a1 + 1542;
  v4 = a1[1542];
  v22 = (int)&sead__SafeStringBase__vtable;
  v23 = (int)"waterpillar";
  sub_60446088(v4, v2, &v22);
  *(_DWORD *)(*v5 + 24) = 1065353216;
  v6 = v1 + 1622;
  v7 = *v5;
  FIELD_F32(v7, 20) = v1[1622];
  FIELD_U32(v7, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(*v5 + 4), 1);
  v22 = 1065353216;
  v23 = 1065353216;
  v19 = 0;
  v21 = 0;
  v20 = -1073741824;
  v8 = (void (__fastcall ***)(_DWORD, int, int *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***((_DWORD ***)v1 + 1539) + 132))(
                                                                  **((_DWORD **)v1 + 1539),
                                                                  0);
  (**v8)(v8, 3, &v22, &v21, &v19);
  v9 = *v3;
  v10 = *((_DWORD *)v1 + 1544);
  v22 = (int)&sead__SafeStringBase__vtable;
  v23 = (int)"waterpillar_behind";
  sub_60446088(v10, v9, &v22);
  *(_DWORD *)(*((_DWORD *)v1 + 1544) + 24) = 1065353216;
  v11 = *((_DWORD *)v1 + 1544);
  FIELD_F32(v11, 20) = v1[1622];
  FIELD_U32(v11, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(*((_DWORD *)v1 + 1544) + 4), 1);
  v22 = 1065353216;
  v19 = 0;
  v23 = 1065353216;
  v21 = 0;
  v20 = -1073741824;
  v12 = (void (__fastcall ***)(_DWORD, int, int *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***((_DWORD ***)v1 + 1541) + 132))(
                                                                   **((_DWORD **)v1 + 1541),
                                                                   0);
  (**v12)(v12, 3, &v22, &v21, &v19);
  v13 = *((_DWORD *)v1 + 1543);
  v1 += 1543;
  ResArchiveById = Profile__getResArchiveById(*((Profile **)v1 - 1540), 0);
  v22 = (int)&sead__SafeStringBase__vtable;
  v23 = (int)"waterpillar_top";
  sub_60446088(v13, ResArchiveById, &v22);
  v15.n64_u32[0] = 0;
  *(_DWORD *)(*(_DWORD *)v1 + 24) = 1065353216;
  v16 = *(_DWORD *)v1;
  v17.n64_f32[0] = *v6 + -20.0;
  FIELD_U32(v16, 20) = vmax_f32(v17, v15).n64_u32[0];
  FIELD_U32(v16, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v1 + 4), 1);
  v1[82] = 0.02;
  v1[83] = 0.0008;
  v1[84] = 0.02;
  *(v1 - 1506) = 0.0;
  *((_DWORD *)v1 + 85) = 1;
  return 1;
}
