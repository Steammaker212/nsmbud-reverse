/* sub_608D7588
 * address: 0x608D7588   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608D7588(int a1)
{
  _BOOL4 result; // r0

  result = 0;
  if ( !FIELD_U8(a1, 745) )
    return FIELD_U32(a1, 2028) != a1 + 2024;
  return result;
}
