/* sub_602FE58C
 * address: 0x602FE58C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FE58C(int a1)
{
  float v2; // r1
  int v3; // r2
  int v4; // r0
  int *v5; // r5
  int v6; // r0
  _DWORD *v7; // r0
  int *v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0
  int result; // r0
  float v12; // s0
  int v13; // [sp+4h] [bp-24h] BYREF
  _DWORD v14[8]; // [sp+8h] [bp-20h] BYREF

  sub_60300AA0();
  sub_60300D18(a1);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v14[0] = FIELD_U32(a1, 108);
  v14[2] = v3;
  *(float *)&v14[1] = v2 + 32.0;
  ((void (__fastcall *)(int *, _DWORD, _DWORD *, _DWORD))checkLiquidCollisions)(
    &v13,
    0,
    v14,
    FIELD_U8(a1, 86));
  if ( v13 == 1 )
  {
    v5 = (int *)(a1 + 13980);
    v4 = FIELD_U32(a1, 13980);
    if ( v4 >= 1 )
    {
      v6 = v4 - 1;
      *v5 = v6;
      if ( !v6 )
      {
        sub_602FE478(a1);
        FIELD_U32(a1, 13984) = ((unsigned __int8)FIELD_U32(a1, 13984) + 1) & 7;
        *v5 = ((40 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 30;
      }
    }
  }
  v7 = *(_DWORD **)(a1 + 6300);
  v8 = (int *)v7[3];
  v9 = v7[2];
  v10 = v7[17];
  if ( v9 > v10 )
    v8 += v10;
  result = *v8;
  v12 = *(float *)(*v8 + 20);
  if ( v12 == 116.0 || v12 == 80.0 || v12 == 44.0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 700))(a1);
  return result;
}
