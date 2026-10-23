/* sub_60751808
 * address: 0x60751808   size: 904   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60751808(int a1, int a2, int a3, int a4, int a5)
{
  int (**v6)(); // r0
  const char *v7; // r1
  int *v8; // r7
  int *v9; // r0
  int v10; // r6
  int (__fastcall *v11)(int, int (***)()); // r2
  int (__fastcall *v12)(int, int (***)()); // r2
  int (__fastcall *v13)(int, int (***)()); // r2
  int (__fastcall *v14)(int, int (***)()); // r2
  int (__fastcall *v15)(int, int (***)()); // r2
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int v19; // r1
  int (**v21)(); // [sp+Ch] [bp-3Ch] BYREF
  const char *v22; // [sp+10h] [bp-38h]
  int v23; // [sp+14h] [bp-34h]
  int v24; // [sp+18h] [bp-30h] BYREF

  sub_6078C444(a1, &dword_60CBEAF4, a2, a3, a4, a5);
  *(_DWORD *)a1 = off_60C23D34;
  v21 = &sead__SafeStringBase__vtable;
  v22 = "KinopicoAnm";
  FIELD_U32(a1, 544) = LoadResource(ResourceMgrRelated_instance, &v21);
  FIELD_U32(a1, 548) = 0;
  FIELD_U32(a1, 552) = 0;
  FIELD_U32(a1, 556) = 0;
  FIELD_U32(a1, 560) = 0;
  sub_6040E90C(a1 + 564, 5);
  FIELD_U8(a1, 628) = 0;
  FIELD_U32(a1, 632) = -1;
  FIELD_U32(a1, 636) = 1065353216;
  FIELD_U32(a1, 640) = 0;
  FIELD_U32(a1, 644) = 0;
  FIELD_U32(a1, 648) = 0;
  FIELD_U32(a1, 652) = 0;
  FIELD_U32(a1, 656) = 1065353216;
  FIELD_U32(a1, 660) = 0;
  FIELD_U32(a1, 664) = 0;
  FIELD_U32(a1, 668) = 0;
  FIELD_U32(a1, 672) = 0;
  FIELD_U32(a1, 676) = 1065353216;
  FIELD_U32(a1, 680) = 0;
  FIELD_U32(a1, 908) = 0;
  FIELD_U16(a1, 904) = 0;
  FIELD_U32(a1, 900) = 0;
  FIELD_U32(a1, 912) = 1065982362;
  FIELD_U32(a1, 916) = -1;
  v21 = &sead__SafeStringBase__vtable;
  v22 = "PeachMdl";
  FIELD_U32(a1, 1052) = LoadResource(ResourceMgrRelated_instance, &v21);
  v21 = &sead__SafeStringBase__vtable;
  v22 = "PeachAnm";
  FIELD_U32(a1, 1056) = LoadResource(ResourceMgrRelated_instance, &v21);
  FIELD_U8(dword_60C9BBD4, 18064) = FIELD_U8(a1, 540);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  sub_608DEB0C(&v21, 3, (int)&v24);
  v6 = v21;
  v7 = v22;
  if ( (int)v21 < (int)v22 )
  {
    *(_DWORD *)(v23 + 4 * (_DWORD)v21) = FIELD_U32(a1, 20);
    v6 = (int (**)())((char *)v21 + 1);
    v21 = (int (**)())((char *)v21 + 1);
    v7 = v22;
  }
  if ( (int)v6 < (int)v7 )
  {
    *(_DWORD *)(v23 + 4 * (_DWORD)v6) = FIELD_U32(a1, 544);
    v21 = (int (**)())((char *)v21 + 1);
  }
  sub_6078C590(a1, &v21);
  FIELD_U8(dword_60C9BBD4, 18064) = 1;
  sub_6078E5A8(a1, FIELD_U32(a1, 472));
  FIELD_U32(a1, 684) = -1;
  v8 = (int *)(a1 + 684);
  FIELD_U32(a1, 688) = -1;
  FIELD_U32(a1, 692) = -1;
  FIELD_U32(a1, 696) = -1;
  v9 = *(int **)(a1 + 292);
  if ( v9 )
  {
    v10 = *v9;
    if ( *v9 )
    {
      v11 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v10 + 84);
      v21 = &sead__SafeStringBase__vtable;
      v22 = "head_1";
      FIELD_U32(a1, 632) = v11(v10, &v21);
      v12 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v10 + 84);
      v21 = &sead__SafeStringBase__vtable;
      v22 = "hair_l1";
      FIELD_U32(a1, 684) = v12(v10, &v21);
      v13 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v10 + 84);
      v21 = &sead__SafeStringBase__vtable;
      v22 = "hair_l2";
      FIELD_U32(a1, 688) = v13(v10, &v21);
      v14 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v10 + 84);
      v21 = &sead__SafeStringBase__vtable;
      v22 = "hair_r1";
      FIELD_U32(a1, 692) = v14(v10, &v21);
      v15 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v10 + 84);
      v21 = &sead__SafeStringBase__vtable;
      v22 = "hair_r2";
      FIELD_U32(a1, 696) = v15(v10, &v21);
    }
    v16 = FIELD_U32(a1, 632);
    if ( v16 >= 0 )
      sub_604302C8(**(_DWORD **)(a1 + 292), v16, a1 + 636);
    if ( *v8 >= 0 )
      sub_604302C8(**(_DWORD **)(a1 + 292), *v8, a1 + 700);
    v17 = FIELD_U32(a1, 688);
    if ( v17 >= 0 )
      sub_604302C8(**(_DWORD **)(a1 + 292), v17, a1 + 748);
    v18 = FIELD_U32(a1, 692);
    if ( v18 >= 0 )
      sub_604302C8(**(_DWORD **)(a1 + 292), v18, a1 + 796);
    v19 = FIELD_U32(a1, 696);
    if ( v19 >= 0 )
      sub_604302C8(**(_DWORD **)(a1 + 292), v19, a1 + 844);
    FIELD_U8(a1, 628) = 2;
    FIELD_U32(a1, 892) = 1065353216;
    FIELD_U32(a1, 896) = 1065353216;
  }
  return a1;
}
