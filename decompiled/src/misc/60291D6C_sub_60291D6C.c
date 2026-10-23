/* sub_60291D6C
 * address: 0x60291D6C   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60291D6C(int a1)
{
  int v2; // r0
  int v3; // r5
  unsigned int v4; // r1
  int v5; // r0
  int *v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r5
  float v12[9]; // [sp+4h] [bp-24h] BYREF

  sub_602918C0(a1);
  memset(v12, 0, 12);
  sub_60292D70(a1, v12);
  FIELD_U32(a1, 80) = v12[0] < 0.0;
  FIELD_U8(a1, 7532) = 1;
  sub_60290A48(a1, 2);
  v3 = a1 + 7500;
  v2 = FIELD_U32(a1, 7500);
  v4 = FIELD_U32(v2, 8);
  v5 = FIELD_U32(v2, 12);
  if ( v4 > 1 )
    v5 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4), 1);
  v6 = *(int **)(*(_DWORD *)v3 + 12);
  LOWORD(v7) = 0;
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > 1u )
    ++v6;
  HIWORD(v7) = 17076;
  v8 = *v6;
  FIELD_U32(v8, 20) = v7;
  FIELD_U32(v8, 28) |= 2u;
  FIELD_U32(a1, 7516) = v7;
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > 1u )
    v9 += 4;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 6664) = 20;
  v10 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v10 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    FIELD_U32(a1, 7504) = 1;
  FIELD_U32(a1, 6700) = 0;
  FIELD_U32(a1, 7528) = 1;
  FIELD_U16(a1, 7600) = 0;
  FIELD_U8(a1, 6673) = 1;
  FIELD_U8(a1, 6848) = 1;
  return 6848;
}
