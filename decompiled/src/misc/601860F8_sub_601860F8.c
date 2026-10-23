/* sub_601860F8
 * address: 0x601860F8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601860F8(int a1)
{
  unsigned int v1; // r1
  float *v2; // r2
  float v3; // s12
  float v4; // s0
  float v5; // s4
  int v6; // r1
  int v8; // r1
  float v9; // s4
  float v10; // s0
  float v11; // s2

  v6 = FIELD_U32(a1, 232);
  if ( v6 <= 0 )
  {
    v8 = FIELD_U32(a1, 236);
    if ( v8 >= 1 )
    {
      FIELD_U32(a1, 236) = v8 - 1;
LABEL_11:
      v1 = FIELD_U32(a1, 192);
      v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
      v3 = FIELD_F32(a1, 200);
      v4 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
      v5 = v3 * (float)(v2[2] + (float)(v4 * v2[3]));
      FIELD_F32(a1, 116) = v3 * (float)(*v2 + (float)(v2[1] * v4));
      FIELD_F32(a1, 124) = v5;
      JUMPOUT(0x60168D78);
    }
    v9 = FIELD_F32(a1, 224);
    v10 = v9 + FIELD_F32(a1, 220);
    FIELD_F32(a1, 220) = v10;
    v11 = FIELD_F32(a1, 228);
    if ( v9 <= 0.0 )
    {
      if ( v10 > v11 )
      {
LABEL_10:
        FIELD_F32(a1, 128) = v10;
        FIELD_F32(a1, 132) = v10;
        FIELD_F32(a1, 136) = v10;
        goto LABEL_11;
      }
    }
    else if ( v10 < v11 )
    {
      goto LABEL_10;
    }
    v10 = FIELD_F32(a1, 228);
    FIELD_F32(a1, 220) = v11;
    goto LABEL_10;
  }
  FIELD_U32(a1, 232) = v6 - 1;
  return 0;
}
