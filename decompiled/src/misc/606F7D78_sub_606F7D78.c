/* sub_606F7D78
 * address: 0x606F7D78   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F7D78(int a1)
{
  int v2; // r6
  int v3; // r1
  int *v4; // r5
  int v5; // r0
  int *v6; // r4
  int *v7; // r0
  int v8; // s16
  int v9; // r0
  void (__fastcall ***v10)(_DWORD, int, int *, int *, int *); // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  void (__fastcall ***v14)(_DWORD, int, int *, int *, int *); // r0
  int v15; // r5
  int ResArchiveById; // r0
  int v17; // r0
  __int16 v18; // r0
  int v19; // r1
  _BYTE v21[4]; // [sp+8h] [bp-48h] BYREF
  int v22; // [sp+Ch] [bp-44h] BYREF
  int v23; // [sp+10h] [bp-40h]
  int v24; // [sp+14h] [bp-3Ch] BYREF
  int v25; // [sp+18h] [bp-38h] BYREF
  int v26; // [sp+1Ch] [bp-34h]

  v2 = FIELD_U32(a1, 24);
  v4 = (int *)(a1 + 6152);
  v3 = FIELD_U32(a1, 6152);
  v6 = (int *)(a1 + 6168);
  v5 = FIELD_U32(a1, 6168);
  v25 = (int)&sead__SafeStringBase__vtable;
  v26 = (int)"waterpillar_end";
  sub_60446088(v5, v3, &v25);
  v7 = &dword_606F7FE4;
  if ( (v2 & 0xF) != 0 )
    v7 = &dword_606F7FE8;
  v8 = *v7;
  v9 = *v6;
  FIELD_U32(v9, 20) = v8;
  FIELD_U32(v9, 28) |= 2u;
  *(_DWORD *)(*v6 + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(*v6 + 4), 0);
  v25 = 1065353216;
  v22 = 0;
  v26 = 1065353216;
  v24 = 0;
  v23 = 0;
  v10 = (void (__fastcall ***)(_DWORD, int, int *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6156) + 132))(
                                                                   **(_DWORD **)(a1 + 6156),
                                                                   0);
  (**v10)(v10, 3, &v25, &v24, &v22);
  v11 = *v4;
  v12 = FIELD_U32(a1, 6176);
  v25 = (int)&sead__SafeStringBase__vtable;
  v26 = (int)"waterpillar_behind_end";
  sub_60446088(v12, v11, &v25);
  v13 = FIELD_U32(a1, 6176);
  FIELD_U32(v13, 20) = v8;
  FIELD_U32(v13, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6176) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6176) + 4), 0);
  v25 = 1065353216;
  v22 = 0;
  v26 = 1065353216;
  v24 = 0;
  v23 = 0;
  v14 = (void (__fastcall ***)(_DWORD, int, int *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6164) + 132))(
                                                                   **(_DWORD **)(a1 + 6164),
                                                                   0);
  (**v14)(v14, 3, &v25, &v24, &v22);
  if ( (v2 & 0xF) != 0 )
  {
    v15 = FIELD_U32(a1, 6172);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v25 = (int)&sead__SafeStringBase__vtable;
    v26 = (int)"waterpillar_top_end";
    sub_60446088(v15, ResArchiveById, &v25);
    v17 = FIELD_U32(a1, 6172);
    FIELD_U32(v17, 20) = 1106247680;
    FIELD_U32(v17, 28) |= 2u;
    *(_DWORD *)(FIELD_U32(a1, 6172) + 24) = 1065353216;
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6172) + 4), 1);
  }
  v18 = 120;
  if ( (v2 & 0xF) != 0 )
    v18 = 70;
  FIELD_U16(a1, 6148) = v18;
  v19 = 1;
  if ( (v2 & 0xF) != 0 )
    v19 = 2;
  FIELD_U32(a1, 6512) = v19;
  FIELD_U8(a1, 8220) = 1;
  return ((int (__fastcall *)(_BYTE *, int, int, _DWORD))checkLiquidCollisions)(
           v21,
           a1 + 6124,
           a1 + 108,
           FIELD_U8(a1, 86));
}
