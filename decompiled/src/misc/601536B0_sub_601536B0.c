/* sub_601536B0
 * address: 0x601536B0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601536B0(int a1, int a2)
{
  _BOOL4 result; // r0

  result = 1;
  if ( !FIELD_U32(a2, 20) && !FIELD_U32(a2, 24) )
    return FIELD_U32(a1, 20) == a2 + 16;
  return result;
}
