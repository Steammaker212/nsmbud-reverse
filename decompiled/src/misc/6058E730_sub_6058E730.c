/* sub_6058E730
 * address: 0x6058E730   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058E730(int a1)
{
  int v2; // r1
  int result; // r0
  float v4; // s0
  float v5; // s2
  float v6; // r0
  _BYTE v7[4]; // [sp+4h] [bp-24h] BYREF
  float v8[3]; // [sp+8h] [bp-20h] BYREF
  int v9; // [sp+14h] [bp-14h] BYREF

  FIELD_U32(a1, 7388) = 1;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U32(a1, 7392) = 0;
  FIELD_U8(a1, 7339) = 1;
  sub_60579AE4(a1);
  v2 = sub_605D00B8(a1);
  result = 2;
  if ( !v2 )
  {
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 0;
    sub_6057A244(a1, 1);
    v4 = FIELD_F32(a1, 108) + 8.0;
    FIELD_F32(a1, 108) = v4;
    v5 = FIELD_F32(a1, 112) + -8.0;
    FIELD_F32(a1, 112) = v5;
    FIELD_U16(a1, 7376) = 0;
    v9 = 0;
    v6 = FIELD_F32(a1, 116);
    v8[0] = v4;
    v8[1] = v5 + -32.0;
    v8[2] = v6;
    ((void (__fastcall *)(_BYTE *, int *, float *, _DWORD))checkLiquidCollisions)(
      v7,
      &v9,
      v8,
      FIELD_U8(a1, 86));
    sub_606DF470(a1 + 7484, FIELD_U32(EnemyCounterMaybe_instance, 28));
    FIELD_U32(a1, 164) = FIELD_U32(a1, 7504);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 7520);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
    return 1;
  }
  return result;
}
