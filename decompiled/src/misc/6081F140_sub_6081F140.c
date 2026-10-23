/* sub_6081F140
 * address: 0x6081F140   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F140(int result, int a2)
{
  if ( a2 )
  {
    if ( FIELD_U32(result, 452) != 2 )
      FIELD_U32(result, 452) = a2;
  }
  else
  {
    FIELD_U32(result, 452) = 0;
  }
  return result;
}
