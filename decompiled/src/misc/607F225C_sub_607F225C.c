/* sub_607F225C
 * address: 0x607F225C   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F225C(int a1)
{
  int v2; // r5
  _DWORD *v3; // r1
  _DWORD *v4; // r1
  _DWORD *v5; // r1
  int v6; // r9
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

  sub_60815858(dword_60CC6B68, 3);
  sub_6045BF58(a1 + 1056, 0);
  FIELD_U8(dword_60C9BB38, 628) = 1;
  v2 = dword_60CD0B40;
  v17 = &sead__SafeStringBase__vtable;
  v18 = "MultiPlayCourseSelectScene";
  FIELD_U32(a1, 472) = a1;
  FIELD_U32(a1, 476) = sub_607F2624;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 468) = off_60C274FC;
  sead__SafeStringBase__operator_assign(a1 + 448, (int)&v17);
  FIELD_U32(a1, 456) = 2;
  sub_6095537C(**(_DWORD **)(v2 + 36), 0, a1 + 432);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "MultiPlayCourseSelectSceneBack";
  FIELD_U32(a1, 268) = a1;
  FIELD_U32(a1, 272) = sub_607F271C;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 264) = off_60C27524;
  sead__SafeStringBase__operator_assign(a1 + 244, (int)&v17);
  FIELD_U32(a1, 252) = 1;
  v3 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v3 += 5;
  sub_6095537C(*v3, 1, a1 + 228);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "MultiPlayCourseSelectScene3DUI";
  FIELD_U32(a1, 336) = a1;
  FIELD_U32(a1, 340) = sub_607F2730;
  FIELD_U32(a1, 344) = 0;
  FIELD_U32(a1, 332) = off_60C27524;
  sead__SafeStringBase__operator_assign(a1 + 312, (int)&v17);
  FIELD_U32(a1, 320) = 1;
  v4 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v4 += 6;
  sub_6095537C(*v4, 2, a1 + 296);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "MultiPlayCourseSelectSceneFront";
  FIELD_U32(a1, 404) = a1;
  FIELD_U32(a1, 408) = sub_607F27A8;
  FIELD_U32(a1, 412) = 0;
  FIELD_U32(a1, 400) = off_60C27524;
  sead__SafeStringBase__operator_assign(a1 + 380, (int)&v17);
  FIELD_U32(a1, 388) = 1;
  v5 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v5 += 7;
  sub_6095537C(*v5, 1, a1 + 364);
  v6 = a1 + 860;
  sub_6090C9A0(a1 + 860);
  v7 = a1 + 772;
  FIELD_U32(a1, 1008) = 0;
  FIELD_U32(a1, 1012) = 1184645120;
  FIELD_U8(a1, 864) = 1;
  sub_6090A7D4(a1 + 772, (float *)(a1 + 860));
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 772) + 16))(a1 + 772, a1 + 776);
  FIELD_U32(a1, 584) = 0;
  FIELD_U32(a1, 552) = 0;
  FIELD_U32(a1, 556) = 0;
  FIELD_U32(a1, 560) = 1158578176;
  FIELD_U32(a1, 564) = 0;
  FIELD_U32(a1, 568) = 0;
  FIELD_U32(a1, 572) = -1014693888;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 1065353216;
  v9 = FIELD_U32(a1, 500);
  v8 = a1 + 500;
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
  sub_60427258(dword_60C9BBD4, v8, v8 + 88);
  FIELD_U32(dword_60C99E2C, 619404) = v8;
  return sub_6082909C(dword_60CC6E04);
}
