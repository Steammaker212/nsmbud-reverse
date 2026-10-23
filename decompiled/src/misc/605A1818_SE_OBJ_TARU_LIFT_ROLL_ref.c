/* SE_OBJ_TARU_LIFT_ROLL_ref
 * address: 0x605A1818   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_TARU_LIFT_ROLL_ref(int result)
{
  __int16 v1; // r3
  int v2; // r7
  unsigned int v3; // r2
  int *v4; // r3
  int v5; // r2
  int v6; // r2
  int v7; // r6
  int v8; // r6
  int *v9; // r1
  int v10; // r2
  int v11; // r2
  int v12; // r2
  bool v13; // nf
  int v14; // r4
  int v15; // r5
  float v16; // r1
  float v17; // r0
  float v18; // s0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  if ( !FIELD_U16(result, 6354) )
  {
    v4 = (int *)(result + 6344);
    v2 = FIELD_U32(result, 6344);
    if ( !v2 )
    {
      v1 = 0;
      v3 = 0;
      v2 = 0;
      goto LABEL_16;
    }
    FIELD_U32(result, 156) += v2;
    if ( v2 >= 0x2000000 )
    {
      v5 = v2 - 3145728;
LABEL_7:
      *v4 = v5;
      v3 = 1;
LABEL_15:
      v1 = 0;
      goto LABEL_16;
    }
    if ( FIELD_U8(result, 6333) )
    {
      v6 = 0x80000;
      if ( v2 >= -16777216 )
        v6 = 0x40000;
      v7 = v6 + v2;
      v13 = v6 + v2 < 0;
      v3 = (unsigned int)(v6 + v2) >> 31;
      if ( !v13 )
        v7 = 0;
    }
    else
    {
      if ( v2 >= -33554432 )
      {
        v5 = v2 - 0x200000;
        goto LABEL_7;
      }
      if ( v2 >= -67108864 )
      {
        v5 = v2 - 0x100000;
        goto LABEL_7;
      }
      v3 = 1;
      FIELD_U8(result, 6333) = 1;
      v7 = v2 + 0x100000;
    }
    *v4 = v7;
    goto LABEL_15;
  }
  v1 = FIELD_U16(result, 6354) - 1;
  v2 = 0x4000000;
  FIELD_U16(result, 6354) = v1;
  FIELD_U32(result, 156) += 0x4000000;
  v3 = 1;
  if ( !v1 )
  {
    FIELD_U32(result, 6344) = 67174400;
    v1 = 0;
    FIELD_U8(result, 6333) = 0;
  }
LABEL_16:
  if ( FIELD_U16(result, 6356) )
  {
    --FIELD_U16(result, 6356);
    v8 = 0x2000000;
    FIELD_U32(result, 156) += 0x2000000;
    if ( !v1 )
    {
      FIELD_U32(result, 6348) = 50397184;
      FIELD_U8(result, 6334) = 0;
    }
    goto LABEL_32;
  }
  v9 = (int *)(result + 6348);
  v8 = FIELD_U32(result, 6348);
  if ( !v8 )
  {
    v8 = 0;
    if ( v3 != 1 )
      return result;
    goto LABEL_32;
  }
  FIELD_U32(result, 156) += v8;
  if ( v8 >= 0x2000000 )
  {
    v10 = v8 - 3145728;
LABEL_22:
    *v9 = v10;
LABEL_32:
    v14 = FIELD_U32(result, 8);
    v15 = Global_BasicSoundActor2;
    v16 = FIELD_F32(result, 108);
    v17 = FIELD_F32(result, 112);
    position.x = v16;
    position.y = v17;
    mapPositionToScreen(&out, &position);
    if ( v8 < 0 )
      v8 = -v8;
    if ( v2 < 0 )
      v2 = -v2;
    if ( v2 < v8 )
      LOWORD(v2) = v8;
    return sub_60813CA0(v15, "SE_OBJ_TARU_LIFT_ROLL", v14, &out, v18, (__int16)v2, 0);
  }
  if ( !FIELD_U8(result, 6334) )
  {
    if ( v8 < -16777216 )
    {
      if ( v8 < -33554432 )
      {
        FIELD_U8(result, 6334) = 1;
        v10 = v8 + 0x100000;
      }
      else
      {
        v10 = v8 - 0x100000;
      }
    }
    else
    {
      v10 = v8 - 0x200000;
    }
    goto LABEL_22;
  }
  v11 = 0x80000;
  if ( v8 >= -16777216 )
    v11 = 0x40000;
  v12 = v11 + v8;
  v13 = v12 < 0;
  if ( v12 >= 0 )
    v12 = 0;
  *v9 = v12;
  if ( v13 )
    goto LABEL_32;
  return result;
}
