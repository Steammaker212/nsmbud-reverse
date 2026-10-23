/* sub_60676C54
 * address: 0x60676C54   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60676C54(int a1)
{
  int v2; // r6
  int v3; // r0
  float *v4; // r5
  float *result; // r0
  float v6; // s0

  v2 = FIELD_U8(a1, 6129);
  switch ( FIELD_U8(a1, 6128) )
  {
    case 0:
      v3 = sub_606D4BD4(FIELD_U8(a1, 6129));
      goto LABEL_4;
    case 1:
      v3 = sub_606D4ABC(FIELD_U8(a1, 6129));
LABEL_4:
      v4 = (float *)v3;
      if ( !v3 )
        goto LABEL_5;
      goto LABEL_10;
    case 2:
      v4 = (float *)sub_606D41DC(FIELD_U8(a1, 6129));
      if ( v4 )
        goto LABEL_10;
      v4 = (float *)sub_606D42F4(v2);
      if ( v4 )
        goto LABEL_10;
      goto LABEL_5;
    case 3:
      v4 = (float *)sub_606D4150(FIELD_U8(a1, 6129));
      if ( !v4 )
      {
        v4 = (float *)sub_606D4268(v2);
        if ( !v4 )
          goto LABEL_5;
      }
LABEL_10:
      sub_606767B4(a1, (int)v4);
      sub_606769E4(a1, v4, v6);
      result = v4;
      break;
    default:
LABEL_5:
      result = 0;
      break;
  }
  return result;
}
