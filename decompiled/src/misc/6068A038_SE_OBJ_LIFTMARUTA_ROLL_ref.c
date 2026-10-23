/* SE_OBJ_LIFTMARUTA_ROLL_ref
 * address: 0x6068A038   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_LIFTMARUTA_ROLL_ref(int a1)
{
  unsigned int v2; // r6
  unsigned int *v3; // r5
  int result; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r5
  int v8; // r1
  float v9; // r1
  int v10; // r8
  int v11; // r6
  float v12; // s0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = a1 + 6436;
  v3 = (unsigned int *)(a1 + 6304);
  result = 0;
  do
  {
    if ( *v3 )
    {
      sub_60689274(v3);
      result = 1;
    }
    v3 += 3;
  }
  while ( (unsigned int)v3 <= v2 );
  if ( FIELD_S8(a1, 8016) <= 0 )
  {
    v5 = FIELD_U32(a1, 6456);
    if ( (result & 1) != 0 )
    {
      FIELD_U8(a1, 6460) = 1;
      v6 = 0x20000;
      if ( v5 >= 0x800000 )
        v6 = 0x40000;
      v7 = v6 + v5;
    }
    else
    {
      if ( FIELD_U8(a1, 6460) )
      {
        if ( v5 <= 0x800000 )
          v5 = 0x800000;
        FIELD_U8(a1, 6460) = 0;
      }
      v7 = v5 - 0x20000;
    }
    result = 0;
    if ( v7 < 0 )
      goto LABEL_20;
    v8 = FIELD_U32(a1, 156);
    if ( v7 < 134217729 )
    {
      FIELD_U32(a1, 156) = v8 + v7;
      if ( !v7 )
      {
LABEL_20:
        FIELD_U32(a1, 6456) = result;
        return result;
      }
    }
    else
    {
      v7 = 0x8000000;
      FIELD_U32(a1, 156) = v8 + 0x8000000;
    }
    v9 = FIELD_F32(a1, 112);
    v10 = FIELD_U32(a1, 8);
    v11 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&out, &position);
    sub_60813CA0(v11, "SE_OBJ_LIFTMARUTA_ROLL", v10, &out, v12, (__int16)v7, 0);
    result = v7;
    goto LABEL_20;
  }
  return result;
}
