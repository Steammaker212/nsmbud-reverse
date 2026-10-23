/* sub_60478DD8
 * address: 0x60478DD8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60478DD8(int result, float *a2)
{
  float v2; // s0
  float v3; // s2
  int v4; // r1

  if ( a2 )
  {
    v2 = FIELD_F32(result, 232);
    if ( FIELD_U8(result, 240) )
    {
      v2 = v2 + (float)(*a2 - FIELD_F32(result, 224));
      if ( v2 >= FIELD_F32(result, 244) )
      {
        if ( v2 > FIELD_F32(result, 252) )
          v2 = FIELD_F32(result, 252);
      }
      else
      {
        v2 = FIELD_F32(result, 244);
      }
    }
    v3 = FIELD_F32(result, 236);
    if ( !FIELD_U8(result, 241) )
      goto LABEL_13;
    v3 = v3 + (float)(a2[1] - FIELD_F32(result, 228));
    if ( v3 >= FIELD_F32(result, 248) )
    {
      if ( v3 <= FIELD_F32(result, 256) )
      {
LABEL_13:
        result = FIELD_U32(result, 220);
        FIELD_F32(result, 24) = v2;
        FIELD_F32(result, 28) = v3;
        FIELD_U8(result, 64) |= 0x10u;
        return result;
      }
      v4 = result + 252;
    }
    else
    {
      v4 = result + 244;
    }
    v3 = FIELD_F32(v4, 4);
    goto LABEL_13;
  }
  return result;
}
