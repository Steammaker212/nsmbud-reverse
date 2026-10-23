/* sub_60481E9C
 * address: 0x60481E9C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60481E9C(int result, int a2)
{
  if ( FIELD_S32(result, 3648) < 0 )
  {
    FIELD_U32(result, 3648) = a2;
    FIELD_U8(result, 3668) = 1;
  }
  return result;
}
