/* sub_60826C44
 * address: 0x60826C44   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60826C44(int result, int a2)
{
  int v2; // r2

  v2 = FIELD_U32(result, 40);
  if ( FIELD_U8(v2, 9) != a2 )
  {
    FIELD_U8(v2, 9) = a2;
    FIELD_U8(result, 44) = 1;
  }
  return result;
}
