/* sub_6057C7A0
 * address: 0x6057C7A0   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057C7A0(int a1)
{
  int v2; // r5
  int v3; // s2
  unsigned int v4; // r0
  _DWORD *v5; // r10
  int *v6; // r0
  int v7; // r2
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int *v11; // r1
  int v13; // [sp+4h] [bp-34h] BYREF
  _DWORD v14[3]; // [sp+8h] [bp-30h] BYREF
  int v15; // [sp+14h] [bp-24h] BYREF

  v2 = 2;
  FIELD_U32(a1, 7388) = 2;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U32(a1, 7392) = 0;
  sub_60579AE4(a1);
  if ( sub_605D00B8(a1) )
    return v2;
  FIELD_U8(a1, 7321) = 0;
  FIELD_F64(a1, 7560) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 7556))(a1 + 7556);
  FIELD_U32(a1, 7568) = v3;
  obj_coin_ref(a1);
  balloon_coin_ref(a1);
  sub_6057A244(a1, 0);
  sub_601606A4((__int64 *)(a1 + 6120), 1);
  FIELD_U32(a1, 6456) = a1 + 7588;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 70.0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 500) = 1134559232;
  FIELD_U32(a1, 504) = 1115684864;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  FIELD_U32(a1, 7280) = 1124073472;
  FIELD_U32(a1, 7284) = 1132462080;
  sub_605D0024(a1);
  FIELD_U16(a1, 7376) = 1;
  v4 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 7528) = v4 & 0xF;
  FIELD_U32(a1, 7532) = HIWORD(v4) & 0xF;
  FIELD_U32(a1, 7536) = (v4 >> 8) & 0xF;
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v5 = (_DWORD *)(a1 + 7532);
  if ( FIELD_U32(a1, 7532) == 3 )
  {
    FIELD_U32(a1, 80) = 1;
    *v5 = 0;
  }
  FIELD_U32(a1, 7540) = StageActor__directionToPlayerY((StageActor *)a1, (Vec2 *)(a1 + 108));
  if ( FIELD_U32(a1, 7528) == 1 )
  {
    v6 = (int *)(a1 + 7536);
    FIELD_U32(a1, 7544) = 2;
    if ( *v5 == 1 )
    {
      if ( *v6 > 2 )
      {
        v7 = 6;
        if ( *v6 < 5 )
          v7 = 4;
        *v6 = v7;
        goto LABEL_13;
      }
    }
    else if ( *v5 )
    {
      goto LABEL_13;
    }
    *v6 = 2;
  }
LABEL_13:
  v15 = 0;
  v8 = FIELD_U32(a1, 112);
  v9 = FIELD_U32(a1, 116);
  v14[0] = FIELD_U32(a1, 108);
  v14[1] = v8;
  v14[2] = v9;
  ((void (__fastcall *)(int *, int *, _DWORD *, _DWORD))checkLiquidCollisions)(
    &v13,
    &v15,
    v14,
    FIELD_U8(a1, 86));
  v10 = v13;
  if ( v13 )
    v10 = 1;
  FIELD_U32(a1, 7524) = v10;
  if ( *v5 == 2 )
    v11 = &dword_60CAEE5C;
  else
    v11 = &dword_60CAEE3C;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v11);
  sub_60579D4C(a1);
  balloon_coin_model_ref_3(a1);
  return 1;
}
