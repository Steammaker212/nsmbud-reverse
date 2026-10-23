/* sub_605E6E10
 * address: 0x605E6E10   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E6E10(int result)
{
  int v1; // r2
  int v2; // r2

  v1 = FIELD_U32(result, 6256);
  if ( !v1 || (v2 = v1 - 1, (FIELD_U32(result, 6256) = v2) == 0) )
    FIELD_U8(result, 19) = 1;
  return result;
}
