/* sub_606FD9B0
 * address: 0x606FD9B0   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606FD9B0(int a1)
{
  int *v2; // r4
  int v3; // r5
  int ResArchiveById; // r0
  int v5; // r0
  void (__fastcall ***v6)(_DWORD, int, int *, int *, int *); // r0
  int v7; // r5
  int v8; // r0
  int v9; // r0
  void (__fastcall ***v10)(_DWORD, int, int *, int *, int *); // r0
  int v12; // [sp+4h] [bp-34h] BYREF
  int v13; // [sp+8h] [bp-30h]
  int v14; // [sp+Ch] [bp-2Ch] BYREF
  int v15; // [sp+10h] [bp-28h] BYREF
  int v16; // [sp+14h] [bp-24h]

  v2 = (int *)(a1 + 6116);
  v3 = FIELD_U32(a1, 6116);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = (int)"waterpillar_end";
  sub_60446088(v3, ResArchiveById, &v15);
  v5 = *v2;
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  *(_DWORD *)(*v2 + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(*v2 + 4), 0);
  v15 = 1065353216;
  v12 = 0;
  v16 = 1065353216;
  v14 = 0;
  v13 = 0;
  v6 = (void (__fastcall ***)(_DWORD, int, int *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6104) + 132))(
                                                                  **(_DWORD **)(a1 + 6104),
                                                                  0);
  (**v6)(v6, 3, &v15, &v14, &v12);
  v7 = FIELD_U32(a1, 6124);
  v8 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = (int)"waterpillar_behind_end";
  sub_60446088(v7, v8, &v15);
  v9 = FIELD_U32(a1, 6124);
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6124) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6124) + 4), 0);
  v15 = 1065353216;
  v12 = 0;
  v16 = 1065353216;
  v14 = 0;
  v13 = 0;
  v10 = (void (__fastcall ***)(_DWORD, int, int *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6112) + 132))(
                                                                   **(_DWORD **)(a1 + 6112),
                                                                   0);
  (**v10)(v10, 3, &v15, &v14, &v12);
  FIELD_U32(a1, 6156) = 120;
  FIELD_U32(a1, 6176) = 1;
  return 1;
}
