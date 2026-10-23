/* sub_60490858
 * address: 0x60490858   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60490858(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 56);
  if ( v2 > 5 )
  {
    v3 = FIELD_U32(a1, 60);
    if ( (unsigned int)(v3 - 1) >= 2 )
    {
      if ( v3 != 3 )
        goto LABEL_20;
      if ( FIELD_S32(a1, 52) < 1 )
      {
        FIELD_U32(a1, 60) = 0;
        FIELD_U32(a1, 44) = 0;
        FIELD_U32(a1, 48) = 0;
        goto LABEL_20;
      }
      v6 = v2 - 6;
      v7 = 0;
      v8 = v2 - 5;
      if ( v6 <= 0 )
        v6 = 0;
      if ( v8 > 0 )
        v7 = v8;
      FIELD_U32(a1, 44) = v6;
      FIELD_U32(a1, 48) = v7;
    }
    else
    {
      if ( FIELD_S32(a1, 52) < 1 )
      {
        FIELD_U32(a1, 48) = 0;
        FIELD_U32(a1, 60) = 0;
        goto LABEL_20;
      }
      v4 = 0;
      v5 = FIELD_U32(a1, 44) - 1;
      if ( v5 <= 0 )
        v5 = 0;
      FIELD_U32(a1, 44) = v5;
      if ( FIELD_U32(a1, 48) - 1 > 0 )
        v4 = FIELD_U32(a1, 48) - 1;
      FIELD_U32(a1, 48) = v4;
    }
    sub_605052C0(FIELD_U32(a1, 68));
    FIELD_U32(a1, 60) = 2;
    goto LABEL_20;
  }
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 52) = 0;
LABEL_20:
  sub_60505324(FIELD_U32(a1, 68), 0, FIELD_U32(a1, 44));
  sub_60505324(FIELD_U32(a1, 68), 1, FIELD_U32(a1, 44) + 1);
  sub_60505324(FIELD_U32(a1, 68), 2, FIELD_U32(a1, 44) + 2);
  sub_60505324(FIELD_U32(a1, 68), 3, FIELD_U32(a1, 44) + 3);
  sub_60505324(FIELD_U32(a1, 68), 4, FIELD_U32(a1, 44) + 4);
  result = sub_60505324(FIELD_U32(a1, 68), 5, FIELD_U32(a1, 44) + 5);
  FIELD_U8(a1, 64) = 0;
  return result;
}
