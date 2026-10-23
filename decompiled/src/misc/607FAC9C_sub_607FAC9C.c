/* sub_607FAC9C
 * address: 0x607FAC9C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FAC9C(int result, int a2)
{
  int v2; // r1
  float v3; // s6

  v2 = FIELD_U32(result, 12) + a2;
  FIELD_U32(result, 12) = v2;
  if ( v2 >= 10 )
  {
    v3 = FIELD_F32(result, 4);
    do
    {
      while ( 1 )
      {
        v2 -= 10;
        if ( v3 != 2.4 )
          break;
        FIELD_U8(result, 28) = 1;
        v3 = 2.4;
        if ( v2 < 10 )
          goto LABEL_9;
      }
      v3 = v3 + 0.2;
      FIELD_F32(result, 4) = v3;
      if ( v3 > 2.399 )
      {
        v3 = 2.4;
        FIELD_U32(result, 4) = 1075419546;
      }
    }
    while ( v2 >= 10 );
LABEL_9:
    FIELD_U32(result, 12) = v2;
  }
  return result;
}
