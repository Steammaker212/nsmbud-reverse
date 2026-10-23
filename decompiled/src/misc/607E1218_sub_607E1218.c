/* sub_607E1218
 * address: 0x607E1218   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E1218(int a1)
{
  int v2; // r5
  _DWORD *v3; // r1
  _DWORD *v4; // r1
  int v5; // r5
  float *v6; // r1
  int v7; // r4
  int v8; // r0
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r2
  unsigned int v14; // r1
  int v15; // r0
  int result; // r0
  int (**v17)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v18; // [sp+8h] [bp-28h]

  sub_60521364(a1 + 2972);
  sub_60523860(a1 + 7296);
  FIELD_U8(dword_60C9BB38, 628) = FIELD_U8(dword_60CC6D78, 20) ^ 1;
  sub_6045BF58(a1 + 952, 0);
  sub_6045BF58(a1 + 1356, 1);
  sub_6045BF58(a1 + 1760, 2);
  sub_6045BF58(a1 + 2164, 3);
  sub_6045BF58(a1 + 2568, 4);
  v2 = dword_60CD0B40;
  v17 = &sead__SafeStringBase__vtable;
  v18 = "ChallengeResultScene";
  FIELD_U32(a1, 528) = a1;
  FIELD_U32(a1, 532) = sub_607E14F4;
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 524) = off_60C267E8;
  sead__SafeStringBase__operator_assign(a1 + 504, (int)&v17);
  FIELD_U32(a1, 512) = 1;
  v3 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v3 += 5;
  sub_6095537C(*v3, 1, a1 + 488);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "ChallengeResultScene";
  FIELD_U32(a1, 596) = a1;
  FIELD_U32(a1, 600) = sub_607E14FC;
  FIELD_U32(a1, 604) = 0;
  FIELD_U32(a1, 592) = off_60C267E8;
  sead__SafeStringBase__operator_assign(a1 + 572, (int)&v17);
  FIELD_U32(a1, 580) = 1;
  v4 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v4 += 7;
  sub_6095537C(*v4, 1, a1 + 556);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "ChallengeResultSceneGather";
  FIELD_U32(a1, 664) = a1;
  FIELD_U32(a1, 668) = sub_607E1548;
  FIELD_U32(a1, 672) = 0;
  FIELD_U32(a1, 660) = off_60C267E8;
  sead__SafeStringBase__operator_assign(a1 + 640, (int)&v17);
  FIELD_U32(a1, 648) = 1;
  sub_6095537C(**(_DWORD **)(v2 + 36), 0, a1 + 624);
  v5 = a1 + 280;
  sub_6090C9A0(a1 + 280);
  FIELD_U32(a1, 428) = 0;
  v6 = (float *)(a1 + 280);
  FIELD_U32(a1, 432) = 1184645120;
  FIELD_U8(a1, 284) = 1;
  v7 = a1 + 192;
  sub_6090A7D4(v7, v6);
  v8 = dword_60CD0B40;
  v9 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
    v9 += 20;
  *(_DWORD *)(*(_DWORD *)v9 + 72) = v7;
  v10 = FIELD_U32(v8, 36);
  if ( FIELD_U32(v8, 32) > 5u )
    v10 += 20;
  *(_DWORD *)(*(_DWORD *)v10 + 76) = v5;
  v11 = FIELD_U32(v8, 36);
  if ( FIELD_U32(v8, 32) > 7u )
    v11 += 28;
  *(_DWORD *)(*(_DWORD *)v11 + 72) = v7;
  v12 = FIELD_U32(v8, 36);
  if ( FIELD_U32(v8, 32) > 7u )
    v12 += 28;
  *(_DWORD *)(*(_DWORD *)v12 + 76) = v5;
  v13 = FIELD_U32(v8, 36);
  if ( FIELD_U32(v8, 32) > 6u )
    v13 += 24;
  *(_DWORD *)(*(_DWORD *)v13 + 72) = v7;
  v14 = FIELD_U32(v8, 32);
  v15 = FIELD_U32(v8, 36);
  if ( v14 > 6 )
    v15 += 24;
  *(_DWORD *)(*(_DWORD *)v15 + 76) = v5;
  result = dword_60CC6C2C;
  FIELD_U8(dword_60CC6C2C, 286) |= 1u;
  return result;
}
