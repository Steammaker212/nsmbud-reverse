/* sub_604906A4
 * address: 0x604906A4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604906A4(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 56);
  if ( v2 > 5 )
  {
    v3 = FIELD_U32(a1, 60);
    if ( (unsigned int)(v3 - 1) >= 2 )
    {
      if ( !v3 )
      {
        FIELD_U32(a1, 44) = 0;
        FIELD_U32(a1, 48) = 1;
        sub_6050520C(FIELD_U32(a1, 68));
        FIELD_U32(a1, 60) = 1;
      }
    }
    else
    {
      if ( FIELD_U32(a1, 52) >= v2 - 1 )
      {
        FIELD_U32(a1, 48) = v2 - 4;
        v4 = 3;
      }
      else
      {
        ++FIELD_U32(a1, 44);
        ++FIELD_U32(a1, 48);
        sub_6050520C(FIELD_U32(a1, 68));
        v4 = 1;
      }
      FIELD_U32(a1, 60) = v4;
    }
  }
  else
  {
    FIELD_U32(a1, 44) = 0;
    FIELD_U32(a1, 48) = 1;
  }
  sub_60505324(FIELD_U32(a1, 68), 0, FIELD_U32(a1, 44));
  sub_60505324(FIELD_U32(a1, 68), 1, FIELD_U32(a1, 44) + 1);
  sub_60505324(FIELD_U32(a1, 68), 2, FIELD_U32(a1, 44) + 2);
  sub_60505324(FIELD_U32(a1, 68), 3, FIELD_U32(a1, 44) + 3);
  sub_60505324(FIELD_U32(a1, 68), 4, FIELD_U32(a1, 44) + 4);
  result = sub_60505324(FIELD_U32(a1, 68), 5, FIELD_U32(a1, 44) + 5);
  FIELD_U8(a1, 64) = 0;
  return result;
}
