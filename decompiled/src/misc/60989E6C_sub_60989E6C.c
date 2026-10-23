/* sub_60989E6C
 * address: 0x60989E6C   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60989E6C(int a1, float a2)
{
  int result; // r0
  float v4; // s2
  float v5; // s16
  int v6; // s0
  int v7; // r1
  int v8; // r5
  int v9; // r0
  unsigned int v10; // s0
  float v11; // s0
  float v12; // s0

  result = FIELD_U8(a1, 51) & 0xF0;
  FIELD_U8(a1, 51) = result;
  v4 = FIELD_F32(a1, 44);
  if ( v4 != 0.0 )
  {
    v5 = FIELD_F32(a1, 16) + (float)(v4 * a2);
    if ( v4 <= 0.0 )
    {
      if ( v5 <= 0.0 )
      {
        v7 = FIELD_U8(a1, 50);
        if ( v7 == 2 )
        {
          v5 = -v5;
          result |= 8u;
          FIELD_F32(a1, 44) = -v4;
          goto LABEL_17;
        }
        if ( v7 == 1 )
        {
          v12 = (float)(unsigned int)sub_608502E4(a1);
          result = FIELD_U8(a1, 51) | 8;
          v5 = v5 + v12;
          goto LABEL_17;
        }
        if ( !FIELD_U8(a1, 50) )
        {
          v5 = 0.0;
          result |= 1u;
          FIELD_U32(a1, 44) = 0;
          goto LABEL_17;
        }
      }
    }
    else
    {
      result = sub_608502E4(a1);
      if ( v5 >= (float)(unsigned int)result )
      {
        result = FIELD_U8(a1, 50);
        if ( result == 2 )
        {
          v8 = sub_608502E4(a1);
          v9 = sub_608502E4(a1);
          FIELD_F32(a1, 44) = -FIELD_F32(a1, 44);
          v10 = v9;
          result = FIELD_U8(a1, 51) | 4;
          v5 = (float)(unsigned int)v8 - (float)(v5 - (float)v10);
          goto LABEL_17;
        }
        if ( result == 1 )
        {
          v11 = (float)(unsigned int)sub_608502E4(a1);
          result = FIELD_U8(a1, 51) | 4;
          v5 = v5 - v11;
          goto LABEL_17;
        }
        if ( !FIELD_U8(a1, 50) )
        {
          v6 = sub_608502E4(a1);
          FIELD_U32(a1, 44) = 0;
          v5 = (float)(unsigned int)v6;
          result = FIELD_U8(a1, 51) | 1;
LABEL_17:
          FIELD_U8(a1, 51) = result;
        }
      }
    }
    FIELD_F32(a1, 16) = v5;
  }
  return result;
}
