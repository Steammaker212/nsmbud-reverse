/* sub_601F76E4
 * address: 0x601F76E4   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F76E4(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r0
  _DWORD v7[2]; // [sp+4h] [bp-1Ch] BYREF
  int v8; // [sp+Ch] [bp-14h]

  result = (StateMethodExecuter *)(FIELD_U32(a1, 708) - 1);
  FIELD_U32(a1, 708) = result;
  if ( !result )
  {
    *(_DWORD *)(**(_DWORD **)(a1 + 304) + 348) |= 4u;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 344))(a1);
    v7[0] = -1;
    v7[1] = -1;
    v8 = -1;
    sub_601FA238(dword_60C8BF58, v7, 0x80000, 7);
    FIELD_U32(a1, 248) = v8;
    FIELD_U32(a1, 240) = 7;
    FIELD_U32(a1, 592) = 0;
    sub_6019EC34((_DWORD *)(dword_60CC6D78 + 456), v7);
    v3 = (int *)sub_601E0040((int)v7);
    v4 = *v3;
    FIELD_U32(a1, 568) = *v3;
    v5 = v3[1];
    FIELD_U32(a1, 572) = v5;
    v6 = v3[2];
    FIELD_U32(a1, 576) = v6;
    FIELD_U32(a1, 80) = v4;
    FIELD_U32(a1, 84) = v5;
    FIELD_U32(a1, 88) = v6;
    FIELD_U8(a1, 621) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 288), (StateBase *)&dword_60C8BA6C);
  }
  return result;
}
