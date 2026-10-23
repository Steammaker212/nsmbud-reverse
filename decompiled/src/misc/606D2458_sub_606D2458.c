/* sub_606D2458
 * address: 0x606D2458   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D2458(int a1, int a2)
{
  int result; // r0

  sub_606CA41C(a1, a2);
  FIELD_U8(a1, 6184) = sub_606D4760(a2, FIELD_U32(a1, 6168));
  result = FIELD_U8(a1, 6185);
  if ( FIELD_U8(a1, 6185) )
  {
    result = FIELD_U32(a1, 6176);
    FIELD_U32(a1, 164) = result;
  }
  return result;
}
