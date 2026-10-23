/* sub_605C9D04
 * address: 0x605C9D04   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C9D04(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r1
  float *v5; // r0
  float v6; // s4
  float v7; // s6
  int v8; // r6

  result = sub_605CC878();
  v3 = result;
  if ( result )
  {
    v4 = FIELD_U32(a1, 6124);
    FIELD_U32(a1, 6124) = v4 | 2;
    if ( (FIELD_U8(result, 1217) & 0x20) == 0 )
      FIELD_U32(a1, 6124) = v4 & 0xFFFFFFFD;
    if ( (FIELD_U8(result, 1205) & 0x40) != 0 )
      goto LABEL_10;
    sub_6079D4B0(result, a1 + 108);
    if ( sub_6075EDF8(v3) == 1 )
    {
      v5 = (float *)&unk_60B0AFD8;
    }
    else
    {
      if ( FIELD_U32(v3, 1320) != 9 )
      {
LABEL_10:
        v8 = FIELD_U32(v3, 160);
        result = sub_607BA5CC(v3) + v8;
        FIELD_U32(a1, 160) = result;
        return result;
      }
      v5 = (float *)&unk_60B0B02C;
    }
    v6 = v5[1];
    v7 = v5[2];
    FIELD_F32(a1, 108) = *v5 + FIELD_F32(a1, 108);
    FIELD_F32(a1, 112) = v6 + FIELD_F32(a1, 112);
    FIELD_F32(a1, 116) = v7 + FIELD_F32(a1, 116);
    goto LABEL_10;
  }
  return result;
}
