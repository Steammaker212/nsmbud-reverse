/* sub_607F7FB0
 * address: 0x607F7FB0   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F7FB0(int a1)
{
  int v2; // r5
  _DWORD *v3; // r1
  _DWORD *v4; // r1
  _DWORD *v5; // r1
  int v6; // r8
  int v7; // r6
  int v8; // r4
  int v9; // t1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int (**v17)(); // [sp+8h] [bp-28h] BYREF
  const char *v18; // [sp+Ch] [bp-24h]

  v2 = dword_60CD0B40;
  v17 = &sead__SafeStringBase__vtable;
  v18 = "TheEndScene";
  FIELD_U32(a1, 9896) = a1;
  FIELD_U32(a1, 9900) = nullsub_5605;
  FIELD_U32(a1, 9904) = 0;
  FIELD_U32(a1, 9892) = off_60C27AC0;
  sead__SafeStringBase__operator_assign(a1 + 9872, (int)&v17);
  FIELD_U32(a1, 9880) = 2;
  sub_6095537C(**(_DWORD **)(v2 + 36), 0, a1 + 9856);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "TheEndSceneBack";
  FIELD_U32(a1, 9692) = a1;
  FIELD_U32(a1, 9696) = nullsub_5606;
  FIELD_U32(a1, 9700) = 0;
  FIELD_U32(a1, 9688) = off_60C27AE8;
  sead__SafeStringBase__operator_assign(a1 + 9668, (int)&v17);
  FIELD_U32(a1, 9676) = 1;
  v3 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v3 += 5;
  sub_6095537C(*v3, 1, a1 + 9652);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "TheEndScene3DUI";
  FIELD_U32(a1, 9760) = a1;
  FIELD_U32(a1, 9764) = nullsub_5607;
  FIELD_U32(a1, 9768) = 0;
  FIELD_U32(a1, 9756) = off_60C27AE8;
  sead__SafeStringBase__operator_assign(a1 + 9736, (int)&v17);
  FIELD_U32(a1, 9744) = 1;
  v4 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v4 += 6;
  sub_6095537C(*v4, 3, a1 + 9720);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "TheEndSceneFront";
  FIELD_U32(a1, 9828) = a1;
  FIELD_U32(a1, 9832) = sub_607F83C8;
  FIELD_U32(a1, 9836) = 0;
  FIELD_U32(a1, 9824) = off_60C27AE8;
  sead__SafeStringBase__operator_assign(a1 + 9804, (int)&v17);
  FIELD_U32(a1, 9812) = 1;
  v5 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v5 += 7;
  sub_6095537C(*v5, 1, a1 + 9788);
  v6 = a1 + 10284;
  sub_6090C9A0(a1 + 10284);
  FIELD_U32(a1, 10432) = 0;
  v7 = a1 + 10196;
  FIELD_U32(a1, 10436) = 1184645120;
  FIELD_U8(a1, 10288) = 1;
  sub_6090A7D4(a1 + 10196, (float *)(a1 + 10284));
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 10196) + 16))(a1 + 10196, a1 + 10200);
  FIELD_U32(a1, 9976) = 0;
  FIELD_U32(a1, 9980) = 0;
  FIELD_U32(a1, 9984) = 1158578176;
  FIELD_U32(a1, 9988) = 0;
  FIELD_U32(a1, 9992) = 0;
  FIELD_U32(a1, 9996) = -1014693888;
  FIELD_U32(a1, 10000) = 0;
  FIELD_U32(a1, 10004) = 1065353216;
  FIELD_U32(a1, 10008) = 0;
  v9 = FIELD_U32(a1, 9924);
  v8 = a1 + 9924;
  (*(void (__fastcall **)(int, int))(v9 + 16))(v8, v8 + 4);
  sub_6090C42C(v8 + 88);
  v10 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v10 += 24;
  *(_DWORD *)(*(_DWORD *)v10 + 72) = v8;
  v11 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v11 += 24;
  *(_DWORD *)(*(_DWORD *)v11 + 76) = v8 + 88;
  v12 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v12 += 20;
  *(_DWORD *)(*(_DWORD *)v12 + 72) = v7;
  v13 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v13 += 20;
  *(_DWORD *)(*(_DWORD *)v13 + 76) = v6;
  v14 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v14 += 28;
  *(_DWORD *)(*(_DWORD *)v14 + 72) = v7;
  v15 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v15 += 28;
  *(_DWORD *)(*(_DWORD *)v15 + 76) = v6;
  return sub_60427258(dword_60C9BBD4, v8, v8 + 88);
}
