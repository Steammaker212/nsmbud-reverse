/* ChallengeRetryScene_ref
 * address: 0x607E1F54   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ChallengeRetryScene_ref(int a1)
{
  int v2; // r5
  _DWORD *v3; // r1
  int v4; // r5
  float *v5; // r1
  int v6; // r4
  int v7; // r0
  int v8; // r2
  unsigned int v9; // r1
  int v10; // r0
  int result; // r0
  _DWORD v12[8]; // [sp+0h] [bp-20h] BYREF

  sub_6048647C(a1 + 2836);
  FIELD_U8(dword_60C9BB38, 628) = FIELD_U8(dword_60CC6D78, 20) ^ 1;
  sub_6045BF58(a1 + 816, 0);
  sub_6045BF58(a1 + 1220, 1);
  sub_6045BF58(a1 + 1624, 2);
  sub_6045BF58(a1 + 2028, 3);
  sub_6045BF58(a1 + 2432, 4);
  v2 = dword_60CD0B40;
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "ChallengeRetryScene";
  FIELD_U32(a1, 528) = a1;
  FIELD_U32(a1, 532) = sub_607E2120;
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 524) = off_60C26900;
  sead__SafeStringBase__operator_assign(a1 + 504, (int)v12);
  FIELD_U32(a1, 512) = 1;
  v3 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v3 += 5;
  sub_6095537C(*v3, 1, a1 + 488);
  v4 = a1 + 280;
  sub_6090C9A0(a1 + 280);
  FIELD_U32(a1, 428) = 0;
  v5 = (float *)(a1 + 280);
  FIELD_U32(a1, 432) = 1184645120;
  FIELD_U8(a1, 284) = 1;
  v6 = a1 + 192;
  sub_6090A7D4(v6, v5);
  v7 = dword_60CD0B40;
  v8 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
    v8 += 20;
  *(_DWORD *)(*(_DWORD *)v8 + 72) = v6;
  v9 = FIELD_U32(v7, 32);
  v10 = FIELD_U32(v7, 36);
  if ( v9 > 5 )
    v10 += 20;
  *(_DWORD *)(*(_DWORD *)v10 + 76) = v4;
  result = dword_60CC6C2C;
  FIELD_U8(dword_60CC6C2C, 286) |= 1u;
  return result;
}
