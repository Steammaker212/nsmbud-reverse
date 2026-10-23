/* sub_605249C4
 * address: 0x605249C4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605249C4(int result)
{
  int v1; // r2

  v1 = 60;
  if ( FIELD_U8(result, 4674) )
    v1 = 90;
  FIELD_U32(result, 4660) = v1;
  return result;
}
