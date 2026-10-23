/* sub_605462AC
 * address: 0x605462AC   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605462AC(int result)
{
  int v1; // r2
  int v2; // r2
  int v3; // r2
  int v4; // r2
  int v5; // r3

  switch ( FIELD_U32(result, 4660) )
  {
    case 0:
      if ( (FIELD_U8(result, 31452) & 0x10) != 0 )
      {
        v1 = FIELD_U32(result, 31420);
        goto LABEL_18;
      }
      break;
    case 7:
      v2 = FIELD_U32(result, 31452);
      if ( (v2 & 0x20) != 0 )
      {
        v5 = 7;
        goto LABEL_17;
      }
      if ( (v2 & 0x80) != 0 )
        goto LABEL_13;
      break;
    case 8:
      v3 = FIELD_U32(result, 31452);
      if ( (v3 & 0x20) != 0 )
      {
        v5 = 8;
        goto LABEL_17;
      }
      if ( (v3 & 0x40) != 0 )
      {
        v1 = 7;
        goto LABEL_18;
      }
      if ( (v3 & 0x80) != 0 )
      {
        v1 = 9;
        goto LABEL_18;
      }
      break;
    case 9:
      v4 = FIELD_U32(result, 31452);
      if ( (v4 & 0x20) != 0 )
      {
        v5 = 9;
LABEL_17:
        FIELD_U32(result, 31420) = v5;
        v1 = 0;
      }
      else
      {
        if ( (v4 & 0x40) == 0 )
          return result;
LABEL_13:
        v1 = 8;
      }
LABEL_18:
      FIELD_U32(result, 4660) = v1;
      FIELD_U32(result, 33488) = FIELD_U32(result, 33492);
      break;
    default:
      return result;
  }
  return result;
}
