/* sub_60774360
 * address: 0x60774360   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60774360(int a1)
{
  float v2; // s0
  int result; // r0

  v2 = FIELD_F32(a1, 88);
  result = FIELD_U32(a1, 6900) & 0x20000000;
  if ( v2 == 0.0 )
  {
    if ( result )
    {
      result = sub_607868D4(a1 + 688, 0);
      if ( !result )
      {
        result = FIELD_U32(a1, 1236) | 0x200;
        goto LABEL_8;
      }
    }
  }
  else if ( !result || (result = sub_607868D4(a1 + 688, 0), result == 1) )
  {
    result = FIELD_U32(a1, 1236) & 0xFFFFFDFF;
LABEL_8:
    FIELD_U32(a1, 1236) = result;
  }
  return result;
}
