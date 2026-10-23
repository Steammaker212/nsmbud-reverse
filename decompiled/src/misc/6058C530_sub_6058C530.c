/* sub_6058C530
 * address: 0x6058C530   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058C530(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r0
  float v7; // s0
  float v8; // s2
  _DWORD v10[6]; // [sp+4h] [bp-34h] BYREF
  char v11; // [sp+1Ch] [bp-1Ch]

  FIELD_U8(a1, 7320) = 1;
  FIELD_U32(a1, 7392) = 0;
  FIELD_U8(a1, 7504) = FIELD_U8(a1, 28);
  FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
  sub_60579AE4(a1);
  v2 = 2;
  v3 = EnemyCounterMaybe_instance;
  v4 = FIELD_U32(EnemyCounterMaybe_instance, 248);
  FIELD_U32(a1, 7492) = v4;
  v5 = FIELD_U32(v3, 252);
  FIELD_U32(a1, 7496) = v5;
  v6 = FIELD_U32(v3, 256);
  FIELD_U32(a1, 7500) = v6;
  v10[0] = v4;
  v10[1] = v5;
  v10[2] = v6;
  v10[4] = 1;
  v10[5] = FIELD_U8(a1, 7504);
  v11 = FIELD_U8(LevelInfo_instance, 18);
  v10[3] = 2;
  if ( sub_605829C8(dword_60CAF15C, (int)v10) != 2 )
  {
    FIELD_U32(a1, 7288) = 0;
    FIELD_U16(a1, 7376) = 0;
    FIELD_U8(a1, 7400) = 1;
    v7 = FIELD_F32(a1, 108) + 8.0;
    FIELD_F32(a1, 108) = v7;
    v8 = FIELD_F32(a1, 112) + -8.0;
    FIELD_F32(a1, 112) = v8;
    FIELD_F32(a1, 7484) = v7;
    FIELD_F32(a1, 7488) = v8;
    FIELD_U32(a1, 164) = FIELD_U8(a1, 7504) << 27;
    sub_6057A244(a1, 0);
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 0;
    FIELD_U32(a1, 580) = 0;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
    FIELD_U32(a1, 7280) = 1124073472;
    FIELD_U32(a1, 7284) = 1124073472;
    sub_605D0024(a1);
    return 1;
  }
  return v2;
}
