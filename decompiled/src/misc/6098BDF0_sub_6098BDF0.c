/* sub_6098BDF0
 * address: 0x6098BDF0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6098BDF0(int a1)
{
  _BOOL4 result; // r0

  result = 0;
  if ( !FIELD_U8(a1, 122) )
    return FIELD_S8(a1, 121) < 1;
  return result;
}
