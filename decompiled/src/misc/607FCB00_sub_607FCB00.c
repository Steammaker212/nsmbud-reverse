/* sub_607FCB00
 * address: 0x607FCB00   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FCB00(int a1)
{
  int result; // r0
  bool v2; // zf

  result = FIELD_U32(a1, 200);
  v2 = result == 0;
  if ( result )
  {
    result = FIELD_U32(result, 28);
    v2 = result == 0;
  }
  if ( !v2 )
  {
    result = FIELD_U32(result, 36);
    FIELD_U8(result, 8) = 0;
  }
  return result;
}
