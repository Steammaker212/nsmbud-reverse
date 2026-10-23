/* sub_606C7B7C
 * address: 0x606C7B7C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C7B7C(int result, float a2)
{
  float *v2; // r1
  float v3; // s2
  float v4; // s2
  int v5; // r2
  float v6; // s2
  float v7; // s2
  int v8; // r3
  int v9; // r12

  if ( (FIELD_U8(result, 22) & 0x10) != 0 )
  {
    v2 = (float *)(result + 7092);
    v3 = FIELD_F32(result, 7092);
    if ( FIELD_U8(result, 7096) )
    {
      v4 = v3 + 12.0;
      *v2 = v4;
      if ( v4 < 48.0 )
      {
        v5 = LODWORD(v4);
LABEL_10:
        v7 = FIELD_F32(result, 112);
        v8 = FIELD_U32(result, 108);
        v9 = FIELD_U32(result, 116);
        FIELD_U32(result, 7140) = v5;
        FIELD_U32(result, 7148) = v8;
        FIELD_F32(result, 7152) = v7 + a2;
        FIELD_U32(result, 7156) = v9;
        return LightMask__update((LightMask *)(result + 7136));
      }
      v5 = 1111490560;
    }
    else
    {
      v6 = v3 + -3.0;
      *v2 = v6;
      if ( v6 > 0.0 )
      {
        v5 = LODWORD(v6);
        goto LABEL_10;
      }
      v5 = 0;
    }
    *(_DWORD *)v2 = v5;
    goto LABEL_10;
  }
  return result;
}
