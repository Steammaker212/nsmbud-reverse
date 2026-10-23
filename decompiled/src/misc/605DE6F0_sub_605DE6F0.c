/* sub_605DE6F0
 * address: 0x605DE6F0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DE6F0(int a1, int a2)
{
  int result; // r0

  result = FIELD_U32(a1, 140);
  if ( result == 24 )
  {
    result = FIELD_U32(a1, 64);
    if ( result )
    {
      result = sub_605E33D0();
      if ( result == 1 )
      {
        result = FIELD_U8(a2, 110) | 2;
        FIELD_U8(a2, 110) = result;
      }
    }
  }
  return result;
}
