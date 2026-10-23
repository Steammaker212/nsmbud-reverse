/* sub_603FBAA0
 * address: 0x603FBAA0   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FBAA0(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 208);
  if ( result )
    FIELD_U32(result, 3336) |= 1u;
  return result;
}
