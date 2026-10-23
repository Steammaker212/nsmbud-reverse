/* sub_6057AEC8
 * address: 0x6057AEC8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057AEC8(int result)
{
  unsigned __int16 v1; // r1
  _WORD *v2; // r1
  int v3; // r2
  __int16 v4; // r1

  if ( !FIELD_U16(result, 7332) )
    goto LABEL_7;
  v1 = FIELD_U16(result, 7332) - 1;
  FIELD_U16(result, 7332) = v1;
  if ( v1 > 0xB3u )
    return result;
  if ( v1 )
  {
    v2 = (_WORD *)(result + 7334);
    v3 = FIELD_U16(result, 7334);
    if ( FIELD_U16(result, 7334) )
    {
      *v2 = v3 - 1;
      return v3 - 1;
    }
    else
    {
      *v2 = 4;
      v4 = FIELD_U16(result, 7336) ^ 1;
      FIELD_U16(result, 7336) = v4;
      FIELD_U8(result, 535) = v4 == 0;
    }
  }
  else
  {
LABEL_7:
    FIELD_U8(result, 19) = 1;
  }
  return result;
}
