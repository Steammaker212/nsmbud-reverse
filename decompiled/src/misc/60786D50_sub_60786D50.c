/* sub_60786D50
 * address: 0x60786D50   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60786D50(int result, int a2)
{
  int v2; // r2

  if ( (FIELD_U8(result, 5) & 4) != 0 )
  {
    v2 = FIELD_U32(result, 132) & ~(1 << a2);
    FIELD_U32(result, 132) = v2;
    if ( a2 == 5 )
      FIELD_U32(result, 132) = v2 & 0xFFFFDFFF;
  }
  return result;
}
