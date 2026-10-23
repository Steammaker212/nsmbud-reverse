/* sub_605CD7C4
 * address: 0x605CD7C4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CD7C4(int result)
{
  int v1; // r2

  v1 = FIELD_U32(result, 60);
  if ( !FIELD_U8(result, 106) )
    v1 = -v1;
  FIELD_U32(result, 64) = v1;
  return result;
}
