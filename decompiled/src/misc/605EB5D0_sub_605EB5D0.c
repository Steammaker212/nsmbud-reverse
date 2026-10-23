/* sub_605EB5D0
 * address: 0x605EB5D0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EB5D0(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 176);
  if ( (v1 & 8) == 0 )
    FIELD_U32(result, 176) = v1 | 8;
  return result;
}
