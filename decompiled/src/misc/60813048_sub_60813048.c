/* sub_60813048
 * address: 0x60813048   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60813048(int a1)
{
  int result; // r0
  int v3; // r0
  float v4; // s0
  float *v5; // r1
  int v6; // r2
  int v7; // r3
  float v8; // s2
  float v9; // s8
  float v10; // s10
  float v11; // s4
  Vec2 v12[2]; // [sp+0h] [bp-10h] BYREF

  result = FIELD_U32(a1, 468);
  if ( result )
  {
    if ( FIELD_U32(a1, 472) && !sub_6080FAAC(a1, FIELD_U32(a1, 492)) )
    {
      FIELD_U32(a1, 468) = 0;
      FIELD_U32(a1, 492) = 0;
      return 0;
    }
    v12[0].x = 0.0;
    v12[0].y = 0.0;
    if ( FIELD_U8(a1, 497) )
    {
      if ( FIELD_U32(a1, 472) )
      {
LABEL_17:
        result = FIELD_U32(a1, 472) + 1;
        FIELD_U32(a1, 472) = result;
        return result;
      }
    }
    else
    {
      v3 = FIELD_U32(a1, 468);
      if ( v3 < 1 )
        goto LABEL_17;
      v4 = 0.0;
      v5 = (float *)(a1 + 312);
      v6 = 0;
      v7 = 0;
      v8 = 0.0;
      do
      {
        v9 = *(v5 - 1);
        if ( v9 < 1.5 )
        {
          v10 = *v5;
          if ( *v5 > -1.5 && v10 < 1.5 )
          {
            v8 = v9 + v8;
            v4 = v10 + v4;
            ++v7;
            v12[0].x = v8;
            v12[0].y = v4;
          }
        }
        ++v6;
        v5 += 2;
      }
      while ( v6 < v3 );
      if ( v7 <= 0 )
        goto LABEL_17;
      v11 = 1.0 / (float)v7;
      v12[0].x = v11 * v8;
      v12[0].y = v11 * v4;
      if ( FIELD_U32(a1, 472) )
      {
        MovingSoundActor_setPosition((MovingSoundActor *)a1, v12);
        goto LABEL_17;
      }
    }
    sub_6081030C((_DWORD *)a1, FIELD_U32(a1, 492), (int)v12, (float *)(a1 + 480));
    goto LABEL_17;
  }
  return result;
}
