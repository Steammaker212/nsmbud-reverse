/* sub_605F2114
 * address: 0x605F2114   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F2114(int a1)
{
  int v2; // r0
  int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r5
  int v6; // r1
  int result; // r0
  _DWORD v8[6]; // [sp+4h] [bp-2Ch] BYREF
  char v9; // [sp+1Ch] [bp-14h]

  FIELD_U16(a1, 7376) = 1;
  v2 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 7488) = v2;
  v3 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 7492) = v3;
  FIELD_U32(a1, 7496) = 1141473280;
  FIELD_U32(a1, 116) = 1141473280;
  v4 = FIELD_U32(a1, 20);
  v8[0] = v2;
  v8[1] = v3;
  v8[2] = 1141473280;
  v8[4] = 1;
  v5 = HIBYTE(v4);
  v8[5] = HIBYTE(v4);
  v9 = FIELD_U8(LevelInfo_instance, 18);
  v6 = sub_605829C8(dword_60CAF15C, (int)v8);
  result = 2;
  if ( v6 != 2 )
  {
    FIELD_U8(a1, 7484) = v5;
    obj_coin_ref(a1);
    FIELD_U32(a1, 7288) = 0;
    FIELD_U8(a1, 87) = 3;
    FIELD_U8(a1, 86) = 0;
    sub_60579AE4(a1);
    sub_6057A244(a1, 1);
    sub_605D0580((ColliderBase *)a1);
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 1090519040;
    FIELD_U32(a1, 500) = 1098907648;
    FIELD_U32(a1, 504) = 1098907648;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB2140);
    sub_60579D4C(a1);
    FIELD_U8(a1, 7482) = 0;
    return 1;
  }
  return result;
}
