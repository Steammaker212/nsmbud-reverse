/* sub_609918B8
 * address: 0x609918B8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609918B8(int result, int a2)
{
  if ( FIELD_U8(result, 28) != a2 )
  {
    if ( (a2 | 2) == 2 && (FIELD_U16(result, 30) & 0x800) != 0 )
      FIELD_U16(result, 30) = FIELD_U16(result, 30) & 0xF7BF | 0x40;
    FIELD_U8(result, 28) = a2;
  }
  return result;
}
