/* sub_60765960
 * address: 0x60765960   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60765960(int result)
{
  int v1; // r2
  int v2; // r2

  v1 = FIELD_U32(result, 9616);
  if ( v1 )
  {
    v2 = v1 - 1;
    FIELD_U32(result, 9616) = v2;
    if ( !v2 )
      FIELD_U32(result, 9620) = 0;
  }
  return result;
}
