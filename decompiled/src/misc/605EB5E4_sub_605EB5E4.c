/* sub_605EB5E4
 * address: 0x605EB5E4   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EB5E4(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 176);
  if ( (v1 & 8) != 0 )
    FIELD_U32(result, 176) = v1 & 0xFFFFFFF7;
  return result;
}
